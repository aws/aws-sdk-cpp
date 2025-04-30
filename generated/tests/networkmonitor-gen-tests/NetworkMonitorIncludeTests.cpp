/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/networkmonitor/NetworkMonitorClient.h>
#include <aws/networkmonitor/NetworkMonitorEndpointProvider.h>
#include <aws/networkmonitor/NetworkMonitorEndpointRules.h>
#include <aws/networkmonitor/NetworkMonitorErrorMarshaller.h>
#include <aws/networkmonitor/NetworkMonitorErrors.h>
#include <aws/networkmonitor/NetworkMonitorRequest.h>
#include <aws/networkmonitor/NetworkMonitorServiceClientModel.h>
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/networkmonitor/model/AddressFamily.h>
#include <aws/networkmonitor/model/CreateMonitorProbeInput.h>
#include <aws/networkmonitor/model/CreateMonitorRequest.h>
#include <aws/networkmonitor/model/CreateMonitorResult.h>
#include <aws/networkmonitor/model/CreateProbeRequest.h>
#include <aws/networkmonitor/model/CreateProbeResult.h>
#include <aws/networkmonitor/model/DeleteMonitorRequest.h>
#include <aws/networkmonitor/model/DeleteMonitorResult.h>
#include <aws/networkmonitor/model/DeleteProbeRequest.h>
#include <aws/networkmonitor/model/DeleteProbeResult.h>
#include <aws/networkmonitor/model/GetMonitorRequest.h>
#include <aws/networkmonitor/model/GetMonitorResult.h>
#include <aws/networkmonitor/model/GetProbeRequest.h>
#include <aws/networkmonitor/model/GetProbeResult.h>
#include <aws/networkmonitor/model/ListMonitorsRequest.h>
#include <aws/networkmonitor/model/ListMonitorsResult.h>
#include <aws/networkmonitor/model/ListTagsForResourceRequest.h>
#include <aws/networkmonitor/model/ListTagsForResourceResult.h>
#include <aws/networkmonitor/model/MonitorState.h>
#include <aws/networkmonitor/model/MonitorSummary.h>
#include <aws/networkmonitor/model/Probe.h>
#include <aws/networkmonitor/model/ProbeInput.h>
#include <aws/networkmonitor/model/ProbeState.h>
#include <aws/networkmonitor/model/Protocol.h>
#include <aws/networkmonitor/model/TagResourceRequest.h>
#include <aws/networkmonitor/model/TagResourceResult.h>
#include <aws/networkmonitor/model/UntagResourceRequest.h>
#include <aws/networkmonitor/model/UntagResourceResult.h>
#include <aws/networkmonitor/model/UpdateMonitorRequest.h>
#include <aws/networkmonitor/model/UpdateMonitorResult.h>
#include <aws/networkmonitor/model/UpdateProbeRequest.h>
#include <aws/networkmonitor/model/UpdateProbeResult.h>

using NetworkMonitorIncludeTest = ::testing::Test;

TEST_F(NetworkMonitorIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::NetworkMonitor::NetworkMonitorClient>("NetworkMonitorIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
