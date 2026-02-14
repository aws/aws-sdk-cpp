/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for TimestreamInfluxDB pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/timestream-influxdb/TimestreamInfluxDBClientPagination.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBPaginationBase.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbClustersPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbInstancesPaginationTraits.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TimestreamInfluxDBPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TimestreamInfluxDBPaginationCompilationTest, TimestreamInfluxDBPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
