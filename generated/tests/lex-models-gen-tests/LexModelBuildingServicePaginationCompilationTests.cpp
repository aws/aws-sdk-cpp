/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LexModelBuildingService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/lex-models/LexModelBuildingServiceClientPagination.h>
#include <aws/lex-models/LexModelBuildingServicePaginationBase.h>
#include <aws/lex-models/model/GetBotAliasesPaginationTraits.h>
#include <aws/lex-models/model/GetBotsPaginationTraits.h>
#include <aws/lex-models/model/GetBotChannelAssociationsPaginationTraits.h>
#include <aws/lex-models/model/GetIntentsPaginationTraits.h>
#include <aws/lex-models/model/GetBuiltinSlotTypesPaginationTraits.h>
#include <aws/lex-models/model/GetSlotTypeVersionsPaginationTraits.h>
#include <aws/lex-models/model/GetIntentVersionsPaginationTraits.h>
#include <aws/lex-models/model/GetBotVersionsPaginationTraits.h>
#include <aws/lex-models/model/GetMigrationsPaginationTraits.h>
#include <aws/lex-models/model/GetSlotTypesPaginationTraits.h>
#include <aws/lex-models/model/GetBuiltinIntentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LexModelBuildingServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LexModelBuildingServicePaginationCompilationTest, LexModelBuildingServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
