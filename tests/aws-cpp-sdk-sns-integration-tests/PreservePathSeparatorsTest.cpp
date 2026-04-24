#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/UUID.h>

#include <aws/sns/SNSClient.h>
#include <aws/sns/model/ListTopicsRequest.h>
#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/sns/model/DeleteTopicRequest.h>

using namespace Aws;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "PreservePathSeparatorsTest";

    class PreservePathSeparatorsTest : public ::testing::Test
    {
    protected:
        void SetUp() override
        {
            options.httpOptions.preservePathSeparators = true;
            Aws::InitAPI(options);
            snsClient = Aws::MakeShared<SNSClient>(ALLOCATION_TAG);
        }

        void TearDown() override
        {
            snsClient = nullptr;
            Aws::ShutdownAPI(options);
        }

        std::shared_ptr<SNSClient> snsClient;
        Aws::SDKOptions options;
    };

    TEST_F(PreservePathSeparatorsTest, TestSNSListTopicsWithPreservePathSeparators)
    {
        ListTopicsRequest request;
        auto outcome = snsClient->ListTopics(request);
        ASSERT_TRUE(outcome.IsSuccess());

    }

}