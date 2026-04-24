/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/core/Region.h>
#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/model/QueryRequest.h>


namespace
{

class TimeStreamQueryOperationTest : public ::testing::Test
{
public:

protected:

};
} // anonymous namespace

TEST_F(TimeStreamQueryOperationTest, TestDoubleCall)
{
    Aws::TimestreamQuery::TimestreamQueryClientConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    config.enableEndpointDiscovery = true;

    Aws::TimestreamQuery::TimestreamQueryClient client(config);

    Aws::TimestreamQuery::Model::QueryRequest queryRequest;
    queryRequest.SetQueryString("SELECT 1");
    Aws::TimestreamQuery::Model::QueryOutcome outcome = client.Query(queryRequest);
    AWS_ASSERT_SUCCESS(outcome);

    Aws::TimestreamQuery::Model::QueryRequest queryRequest2;
    queryRequest2.SetQueryString("SELECT 1");
    Aws::TimestreamQuery::Model::QueryOutcome outcome2 = client.Query(queryRequest2);
    AWS_ASSERT_SUCCESS(outcome2);
}