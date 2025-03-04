#include <aws/core/Aws.h>
#include <aws/sso-oidc/SSOOIDCClient.h>
#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <gtest/gtest.h>
using namespace Aws;
using namespace Aws::SSOOIDC;
using namespace Aws::SSOOIDC::Model;
 
class ClientHolder {
public:
  ClientHolder() {
    client = makeClient();
  }
 
  void Foo() {
    const auto response = client.RegisterClient(RegisterClientRequest{});
    assert(!response.IsSuccess());
  }
 
private:
  SSOOIDCClient makeClient() {
    Aws::Client::ClientConfiguration client_config;
    client_config.region = Aws::Region::US_EAST_1;
    return SSOOIDCClient{client_config};
  }
 
  SSOOIDCClient client;
};

TEST(test, sso)
{
  ClientHolder client{};
  client.Foo();
}
 
/*auto main() -> int {
  SDKOptions options{};
  options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Debug;
  InitAPI(options);
  {
      ClientHolder client{};
      client.Foo();
  }
  ShutdownAPI(options);
  return 0;
}
*/