/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class ActionConnectorType {
  NOT_SET,
  GENERIC_HTTP,
  SERVICENOW_NOW_PLATFORM,
  SALESFORCE_CRM,
  MICROSOFT_OUTLOOK,
  PAGERDUTY_ADVANCE,
  JIRA_CLOUD,
  ATLASSIAN_CONFLUENCE,
  AMAZON_S3,
  AMAZON_BEDROCK_AGENT_RUNTIME,
  AMAZON_BEDROCK_RUNTIME,
  AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME,
  AMAZON_TEXTRACT,
  AMAZON_COMPREHEND,
  AMAZON_COMPREHEND_MEDICAL,
  MICROSOFT_ONEDRIVE,
  MICROSOFT_SHAREPOINT,
  MICROSOFT_TEAMS,
  SAP_BUSINESSPARTNER,
  SAP_PRODUCTMASTERDATA,
  SAP_PHYSICALINVENTORY,
  SAP_BILLOFMATERIALS,
  SAP_MATERIALSTOCK,
  ZENDESK_SUITE,
  SMARTSHEET,
  SLACK,
  ASANA,
  BAMBOO_HR
};

namespace ActionConnectorTypeMapper {
AWS_QUICKSIGHT_API ActionConnectorType GetActionConnectorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForActionConnectorType(ActionConnectorType value);
}  // namespace ActionConnectorTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
