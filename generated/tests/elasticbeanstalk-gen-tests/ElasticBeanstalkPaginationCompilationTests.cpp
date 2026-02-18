/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ElasticBeanstalk pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elasticbeanstalk/ElasticBeanstalkClientPagination.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkPaginationBase.h>
#include <aws/elasticbeanstalk/model/DescribeEventsPaginationTraits.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryPaginationTraits.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesPaginationTraits.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ElasticBeanstalkPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ElasticBeanstalkPaginationCompilationTest, ElasticBeanstalkPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
