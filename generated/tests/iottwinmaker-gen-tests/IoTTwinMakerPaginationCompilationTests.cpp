/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTTwinMaker pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iottwinmaker/IoTTwinMakerClientPagination.h>
#include <aws/iottwinmaker/IoTTwinMakerPaginationBase.h>
#include <aws/iottwinmaker/model/ListEntitiesPaginationTraits.h>
#include <aws/iottwinmaker/model/GetPropertyValuePaginationTraits.h>
#include <aws/iottwinmaker/model/ListPropertiesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListComponentsPaginationTraits.h>
#include <aws/iottwinmaker/model/ListWorkspacesPaginationTraits.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryPaginationTraits.h>
#include <aws/iottwinmaker/model/ListSyncResourcesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListScenesPaginationTraits.h>
#include <aws/iottwinmaker/model/ListSyncJobsPaginationTraits.h>
#include <aws/iottwinmaker/model/ListMetadataTransferJobsPaginationTraits.h>
#include <aws/iottwinmaker/model/ExecuteQueryPaginationTraits.h>
#include <aws/iottwinmaker/model/ListComponentTypesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTTwinMakerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTTwinMakerPaginationCompilationTest, IoTTwinMakerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
