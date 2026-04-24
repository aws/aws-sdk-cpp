/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTWireless pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iotwireless/IoTWirelessClientPagination.h>
#include <aws/iotwireless/IoTWirelessPaginationBase.h>
#include <aws/iotwireless/model/ListDestinationsPaginationTraits.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskPaginationTraits.h>
#include <aws/iotwireless/model/ListNetworkAnalyzerConfigurationsPaginationTraits.h>
#include <aws/iotwireless/model/ListMulticastGroupsPaginationTraits.h>
#include <aws/iotwireless/model/ListWirelessGatewaysPaginationTraits.h>
#include <aws/iotwireless/model/ListServiceProfilesPaginationTraits.h>
#include <aws/iotwireless/model/ListQueuedMessagesPaginationTraits.h>
#include <aws/iotwireless/model/ListWirelessDevicesPaginationTraits.h>
#include <aws/iotwireless/model/ListDeviceProfilesPaginationTraits.h>
#include <aws/iotwireless/model/ListFuotaTasksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTWirelessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTWirelessPaginationCompilationTest, IoTWirelessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
