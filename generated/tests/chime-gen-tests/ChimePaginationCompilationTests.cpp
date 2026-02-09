/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Chime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chime/ChimeClientPagination.h>
#include <aws/chime/ChimePaginationBase.h>
#include <aws/chime/model/ListRoomsPaginationTraits.h>
#include <aws/chime/model/ListRoomMembershipsPaginationTraits.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/chime/model/ListBotsPaginationTraits.h>
#include <aws/chime/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/chime/model/ListUsersPaginationTraits.h>
#include <aws/chime/model/ListAccountsPaginationTraits.h>
#include <aws/chime/model/ListPhoneNumberOrdersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ChimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ChimePaginationCompilationTest, ChimePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
