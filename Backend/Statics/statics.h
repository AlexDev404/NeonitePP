#include "../Response/response.h"

inline void registerStatics() {
  http::response<http::dynamic_body> res;
  std::string route;

  route = "/lightswitch/api/service/bulk/status";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body())
      <<
      R"(
        {
            "serviceInstanceId": "fortnite",
            "status": "UP",
            "message": "Neonite++",
            "maintenanceUri": null,
            "allowedActions": ["PLAY", "DOWNLOAD"],
            "banned": false
        }
        )"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/account/api/public/account/:accountId/externalAuths";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"([])"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/fortnite/api/v2/versioncheck/:version";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"({"type": "NO_UPDATE"})"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/waitingroom/api/waitingroom";
  res.result(http::status::no_content);
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/fortnite/api/game/v2/grant_access/:accountId";
  res.result(http::status::no_content);
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/fortnite/api/game/v2/enabled_features";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"([])"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/fortnite/api/receipts/v1/account/:accountId/receipts";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"([])"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/friends/api/public/blocklist/:accountId";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"({ "blockedUsers": [] })"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/friends/api/v1/:accountId/settings";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"({ "acceptInvites": "public" })"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/friends/api/public/list/fortnite/:accountId/recentPlayers";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"([])"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/friends/api/public/friends/:accountId";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"([])"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/friends/api/public/friends/:accountId";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body()) << R"([])"_json;
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/presence/api/v1/_/:accountId/settings/subscriptions";
  res.result(http::status::no_content);
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route =
      "/party/api/v1/Fortnite/user/:accountId/notifications/undelivered/count";
  res.result(http::status::no_content);
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/socialban/api/public/v1/:accountId";
  res.result(http::status::no_content);
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/content-controls/:accountId";
  res.result(http::status::no_content);
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/fortnite/api/game/v2/tryPlayOnPlatform/account/:accountId";
  res.set(http::field::content_type, "text/plain");
  beast::ostream(res.body()) << "true";
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  route = "/affiliate/api/public/affiliates/slug/:affiliateName";
  res.set(http::field::content_type, "application/json");
  beast::ostream(res.body())
      <<
      R"(
        {
            "id": "aabbccddeeff11223344556677889900",
            "slug": "neonite++",
            "displayName": "neonite++",
	        "status": "ACTIVE",
	        "verified": true
        }
        )"_json;
  // sorry ytrs :pepelaugh: -kemo
  // kusumk - sammy
  router.registerPath(route);
  responses.insert(
      std::pair<std::string, http::response<http::dynamic_body>>(route, res));
  res.body().clear();

  //register dynamic routes too
  router.registerPath("/fortnite/api/game/v2/privacy/account/:accountId");
}