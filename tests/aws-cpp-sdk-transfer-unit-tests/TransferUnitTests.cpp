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
    MockS3Client() : S3Client(), shouldReturnWrongRange(false) {}
    
    void SetReturnWrongRange(bool wrongRange) {
        shouldReturnWrongRange = wrongRange;
    }

    GetObjectOutcome GetObject(const GetObjectRequest& request) const override {
        GetObjectResult result;
        
        if (request.RangeHasBeenSet()) {
            if (shouldReturnWrongRange) {
                // Return a different range than requested
                result.SetContentRange("bytes 1024-2047/2048");
            } else {
                // Parse the requested range and return matching ContentRange
                Aws::String requestRange = request.GetRange();
                if (requestRange.find("bytes=") == 0) {
                    Aws::String range = requestRange.substr(6); // Remove "bytes="
                    result.SetContentRange("bytes " + range + "/2048");
                }
            }
        }
        
        // Create a raw pointer stream
        auto stream = Aws::New<std::stringstream>(ALLOCATION_TAG);
        *stream << "mock data";
        result.ReplaceBody(stream);
        
        return GetObjectOutcome(std::move(result));
    }

private:
    bool shouldReturnWrongRange;
};

class TransferUnitTest : public testing::Test {
protected:
    void SetUp() override {
        executor = Aws::MakeShared<PooledThreadExecutor>(ALLOCATION_TAG, 1);
        mockS3Client = Aws::MakeShared<MockS3Client>(ALLOCATION_TAG);
    }

    static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
        _testMemorySystem.reset(new ExactTestMemorySystem(1024, 128));
        _options.memoryManagementOptions.memoryManager = _testMemorySystem.get();
#endif
        InitAPI(_options);
    }

    static void TearDownTestSuite() {
        ShutdownAPI(_options);
#ifdef USE_AWS_MEMORY_MANAGEMENT
        EXPECT_EQ(_testMemorySystem->GetCurrentOutstandingAllocations(), 0ULL);
        EXPECT_EQ(_testMemorySystem->GetCurrentBytesAllocated(), 0ULL);
        EXPECT_TRUE(_testMemorySystem->IsClean());
        _testMemorySystem.reset();
#endif
    }

    std::shared_ptr<PooledThreadExecutor> executor;
    std::shared_ptr<MockS3Client> mockS3Client;
    static SDKOptions _options;
#ifdef USE_AWS_MEMORY_MANAGEMENT
    static std::unique_ptr<ExactTestMemorySystem> _testMemorySystem;
#endif
};

SDKOptions TransferUnitTest::_options;
#ifdef USE_AWS_MEMORY_MANAGEMENT
std::unique_ptr<ExactTestMemorySystem> TransferUnitTest::_testMemorySystem = nullptr;
#endif

TEST_F(TransferUnitTest, ContentRangeVerification_Failure) {
    mockS3Client->SetReturnWrongRange(true);
    
    TransferManagerConfiguration config(executor.get());
    config.s3Client = mockS3Client;
    auto transferManager = TransferManager::Create(config);
    
    auto createStreamFn = []() {
        return Aws::New<std::stringstream>(ALLOCATION_TAG);
    };
    
    auto handle = transferManager->DownloadFile("test-bucket", "test-key", 0, 1024, createStreamFn);
    handle->WaitUntilFinished();
    
    EXPECT_EQ(TransferStatus::FAILED, handle->GetStatus());
}
