/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GameLiftStreams pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/gameliftstreams/GameLiftStreamsClientPagination.h>
#include <aws/gameliftstreams/GameLiftStreamsPaginationBase.h>
#include <aws/gameliftstreams/model/ListApplicationsPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamGroupsPaginationTraits.h>
#include <aws/gameliftstreams/model/ListStreamSessionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GameLiftStreamsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GameLiftStreamsPaginationCompilationTest, GameLiftStreamsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
