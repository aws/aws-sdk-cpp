/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/observabilityadmin/ObservabilityAdminClient.h>
#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <aws/observabilityadmin/ObservabilityAdminEndpointRules.h>
#include <aws/observabilityadmin/ObservabilityAdminErrorMarshaller.h>
#include <aws/observabilityadmin/ObservabilityAdminErrors.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AccessDeniedException.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationResult.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusResult.h>
#include <aws/observabilityadmin/model/InternalServerException.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationResult.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryResult.h>
#include <aws/observabilityadmin/model/ResourceType.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/Status.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/TelemetryConfiguration.h>
#include <aws/observabilityadmin/model/TelemetryState.h>
#include <aws/observabilityadmin/model/TelemetryType.h>

using ObservabilityAdminIncludeTest = ::testing::Test;

TEST_F(ObservabilityAdminIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  auto pClient = Aws::MakeUnique<Aws::ObservabilityAdmin::ObservabilityAdminClient>("ObservabilityAdminIncludeTest", config);
  ASSERT_TRUE(pClient.get());
}
