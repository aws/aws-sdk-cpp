/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTManagedIntegrations pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iot-managed-integrations/IoTManagedIntegrationsClientPagination.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsPaginationBase.h>
#include <aws/iot-managed-integrations/model/ListDestinationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListManagedThingAccountAssociationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListAccountAssociationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListManagedThingsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListDeviceDiscoveriesPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskConfigurationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListSchemaVersionsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskExecutionsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListConnectorDestinationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListDiscoveredDevicesPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListOtaTasksPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListCloudConnectorsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListCredentialLockersPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListManagedThingSchemasPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListNotificationConfigurationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTManagedIntegrationsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTManagedIntegrationsPaginationCompilationTest, IoTManagedIntegrationsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
