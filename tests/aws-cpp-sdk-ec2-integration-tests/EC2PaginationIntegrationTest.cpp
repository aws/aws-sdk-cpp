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

class EC2PaginationTest : public Aws::Testing::AwsCppSdkGTestSuite {
protected:
    EC2Client ec2Client;
};

TEST_F(EC2PaginationTest, TestPaginationTraits) {
    DescribeSpotPriceHistoryRequest request;
    request.AddProductDescriptions("Linux/UNIX (Amazon VPC)");
    request.AddInstanceTypes(InstanceType::t1_micro);
    request.SetStartTime(Aws::Utils::DateTime::Now() - std::chrono::hours(1));
    request.SetMaxResults(1);  // Force pagination
    
    size_t pageCount = 0;
    auto paginator = ec2Client.DescribeSpotPriceHistoryPaginator(request);
    
    for (const auto& outcome : paginator) {
        AWS_ASSERT_SUCCESS(outcome);
        pageCount++;
    }
    
    EXPECT_GE(pageCount, 1u);  // Should have at least one page
}