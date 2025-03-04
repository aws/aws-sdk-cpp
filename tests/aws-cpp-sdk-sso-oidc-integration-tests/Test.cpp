#include <aws/core/Aws.h>
#include <aws/sso-oidc/SSOOIDCClient.h>
#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <gtest/gtest.h>
using namespace Aws;
using namespace Aws::SSOOIDC;
using namespace Aws::SSOOIDC::Model;
 
class SsoIdcTest : public ::testing::Test{
public:
  void SetUp(){
    m_client = makeClient();
  }
 
  bool RegisterClient() {
    const auto response = m_client.RegisterClient(RegisterClientRequest{});
    //assert(!response.IsSuccess());
    return response.IsSuccess();
  }
 
private:
  SSOOIDCClient makeClient() {
    Aws::Client::ClientConfiguration client_config;
    client_config.region = Aws::Region::US_EAST_1;
    auto _client = SSOOIDCClient{client_config};
    return _client;
  }
 
  SSOOIDCClient m_client;
};

TEST_F(SsoIdcTest, testCopyClient)
{
  EXPECT_TRUE(RegisterClient());
}
