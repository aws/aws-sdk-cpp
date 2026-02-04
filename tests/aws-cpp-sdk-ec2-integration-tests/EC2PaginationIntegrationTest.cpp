/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryPaginationTraits.h>
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsTestHelpers.h>

using namespace Aws;
using namespace Aws::EC2;
using namespace Aws::EC2::Model;

namespace {
    static const char* ALLOCATION_TAG = "EC2PaginationTest";
}

class EC2PaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    std::shared_ptr<EC2Client> ec2Client;

    void SetUp() override {
        ec2Client = Aws::MakeShared<EC2Client>(ALLOCATION_TAG);
    }

    void TearDown() override {
    }
};

TEST_F(EC2PaginationTest, TestPaginationTraits) {
    DescribeSpotPriceHistoryRequest request;
    request.AddProductDescriptions("Linux/UNIX (Amazon VPC)");
    request.AddInstanceTypes(InstanceType::t1_micro);
    request.SetStartTime(Aws::Utils::DateTime::Now() - std::chrono::hours(1));
    request.SetMaxResults(1);  // Force pagination
    
    size_t pageCount = 0;
    auto paginator = ec2Client->DescribeSpotPriceHistoryPaginator(request);
    
    for (auto pageIter = paginator.begin(); pageIter != paginator.end(); ++pageIter) {
        const auto& outcome = *pageIter;
        AWS_ASSERT_SUCCESS(outcome);
        pageCount++;
    }
    
    EXPECT_GE(pageCount, 1u);  // Should have at least one page
}