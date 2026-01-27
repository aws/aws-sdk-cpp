/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// TODO: Update these tests to use the new paginator API directly:
// For example: for (const auto& outcome : ec2Client->DescribeSpotPriceHistoryPaginator(request)) { ... }
// instead of manual pagination with traits

#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/Aws.h>
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
        Aws::SDKOptions options;
        Aws::InitAPI(options);
        
        Aws::Client::ClientConfiguration config;
        config.region = "us-east-1";
        ec2Client = Aws::MakeShared<EC2Client>(ALLOCATION_TAG, config);
    }

    void TearDown() override {
        Aws::SDKOptions options;
        Aws::ShutdownAPI(options);
    }
};

TEST_F(EC2PaginationTest, TestSpotPriceHistoryPagination) {
    DescribeSpotPriceHistoryRequest request;
    request.SetAvailabilityZone("us-east-1a");
    request.AddProductDescriptions("Linux/UNIX (Amazon VPC)");
    request.AddInstanceTypes(InstanceType::t1_micro);
    request.SetStartTime(Aws::Utils::DateTime::Now() - std::chrono::milliseconds(1));
    request.SetMaxResults(10);
    
    size_t totalSpotPrices = 0;
    auto outcome = ec2Client->DescribeSpotPriceHistory(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        totalSpotPrices += result.GetSpotPriceHistory().size();
        
        if (!Aws::EC2::Pagination::DescribeSpotPriceHistoryPaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::EC2::Pagination::DescribeSpotPriceHistoryPaginationTraits::SetNextRequest(result, request);
        outcome = ec2Client->DescribeSpotPriceHistory(request);
    }
    
    ASSERT_TRUE(outcome.IsSuccess());
    // Should have at least one spot price entry
    EXPECT_GE(totalSpotPrices, 1u);
}

TEST_F(EC2PaginationTest, TestSpotPriceHistoryMultipleIteration) {
    DescribeSpotPriceHistoryRequest request;
    request.SetAvailabilityZone("us-east-1a");
    request.AddProductDescriptions("Linux/UNIX (Amazon VPC)");
    request.AddInstanceTypes(InstanceType::t1_micro);
    request.SetStartTime(Aws::Utils::DateTime::Now() - std::chrono::milliseconds(1));
    request.SetMaxResults(5);
    
    // First iteration
    size_t firstCount = 0;
    auto outcome = ec2Client->DescribeSpotPriceHistory(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        firstCount += result.GetSpotPriceHistory().size();
        
        if (!Aws::EC2::Pagination::DescribeSpotPriceHistoryPaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::EC2::Pagination::DescribeSpotPriceHistoryPaginationTraits::SetNextRequest(result, request);
        outcome = ec2Client->DescribeSpotPriceHistory(request);
    }
    
    ASSERT_TRUE(outcome.IsSuccess());
    
    // Reset for second iteration
    request = DescribeSpotPriceHistoryRequest();
    request.SetAvailabilityZone("us-east-1a");
    request.AddProductDescriptions("Linux/UNIX (Amazon VPC)");
    request.AddInstanceTypes(InstanceType::t1_micro);
    request.SetStartTime(Aws::Utils::DateTime::Now() - std::chrono::milliseconds(1));
    request.SetMaxResults(5);
    
    // Second iteration
    size_t secondCount = 0;
    outcome = ec2Client->DescribeSpotPriceHistory(request);
    
    while (outcome.IsSuccess()) {
        const auto& result = outcome.GetResult();
        secondCount += result.GetSpotPriceHistory().size();
        
        if (!Aws::EC2::Pagination::DescribeSpotPriceHistoryPaginationTraits::HasMoreResults(result)) {
            break;
        }
        
        Aws::EC2::Pagination::DescribeSpotPriceHistoryPaginationTraits::SetNextRequest(result, request);
        outcome = ec2Client->DescribeSpotPriceHistory(request);
    }
    
    ASSERT_TRUE(outcome.IsSuccess());
    EXPECT_EQ(firstCount, secondCount); // Should get same results
}

TEST_F(EC2PaginationTest, TestManualPaginationWithNextToken) {
    DescribeSpotPriceHistoryRequest request;
    request.SetAvailabilityZone("us-east-1a");
    request.AddProductDescriptions("Linux/UNIX (Amazon VPC)");
    request.AddInstanceTypes(InstanceType::t1_micro);
    request.SetStartTime(Aws::Utils::DateTime::Now() - std::chrono::hours(24)); // Last 24 hours for more data
    request.SetMaxResults(3);
    
    Aws::Vector<SpotPrice> allSpotPrices;
    
    do {
        auto outcome = ec2Client->DescribeSpotPriceHistory(request);
        ASSERT_TRUE(outcome.IsSuccess());
        
        const auto& result = outcome.GetResult();
        for (const auto& spotPrice : result.GetSpotPriceHistory()) {
            allSpotPrices.push_back(spotPrice);
        }
        
        if (!result.GetNextToken().empty()) {
            request.SetNextToken(result.GetNextToken());
        } else {
            break;
        }
    } while (true);
    
    // Should have at least some spot price data
    EXPECT_GE(allSpotPrices.size(), 1u);
}