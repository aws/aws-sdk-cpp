#include <gtest/gtest.h>
#include <aws/core/Aws.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <aws/common/error.h>
#include <aws/s3/s3.h>
#include <aws/testing/MemoryTesting.h>

using namespace Aws;
using namespace Aws::S3Crt;
using namespace Aws::S3Crt::Model;
using namespace Aws::Client;

const char* ALLOCATION_TAG = "S3CrtTest";


class TestS3CrtClient : public S3CrtClient {
public:
    using S3CrtClient::S3CrtClient;
};

class S3CrtUnitTest : public ::testing::Test
{
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(S3CrtUnitTest, Test200WithErrorXml)
{
}
