#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/GetObjectResult.h>
#include <aws/transfer/TransferManager.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <sstream>

using namespace Aws;
using namespace Aws::S3;
using namespace Aws::S3::Model;
using namespace Aws::Transfer;
using namespace Aws::Utils::Threading;

const char* ALLOCATION_TAG = "TransferUnitTest";

class MockS3Client : public S3Client {
public:
    MockS3Client() : S3Client(){};

    GetObjectOutcome GetObject(const GetObjectRequest& request) const override {
        GetObjectResult result;

        if (request.RangeHasBeenSet()) {
            // Always return mismatched range to trigger validation failure
            result.SetContentRange("bytes 1024-2047/2048");
        }

        auto stream = Aws::New<std::stringstream>(ALLOCATION_TAG);
        *stream << "mock data";
        result.ReplaceBody(stream);
        return GetObjectOutcome(std::move(result));
    }
};

class TransferUnitTest : public testing::Test {
protected:
    void SetUp() override {
        executor = Aws::MakeShared<PooledThreadExecutor>(ALLOCATION_TAG, 1);
        mockS3Client = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG);
    }

    static void SetUpTestSuite() {
        InitAPI(_options);
    }

    static void TearDownTestSuite() {
        ShutdownAPI(_options);
    }

    std::shared_ptr<PooledThreadExecutor> executor;
    std::shared_ptr<MockS3Client> mockS3Client;
    static SDKOptions _options;
};

SDKOptions TransferUnitTest::_options;

TEST_F(TransferUnitTest, ContentValidationShouldFail) {
    TransferManagerConfiguration config(executor.get());
    config.s3Client = mockS3Client;
    auto transferManager = TransferManager::Create(config);

    auto createStreamFn = []() {
        return Aws::New<std::stringstream>(ALLOCATION_TAG);
    };

    // Request bytes 0-1023 but mock returns 1024-2047, should fail validation
    auto handle = transferManager->DownloadFile("test-bucket", "test-key", 0, 1024, createStreamFn);
    handle->WaitUntilFinished();

    EXPECT_EQ(TransferStatus::FAILED, handle->GetStatus());
}