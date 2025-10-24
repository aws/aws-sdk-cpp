/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/ActionConnectorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace ActionConnectorTypeMapper {

static const int GENERIC_HTTP_HASH = HashingUtils::HashString("GENERIC_HTTP");
static const int SERVICENOW_NOW_PLATFORM_HASH = HashingUtils::HashString("SERVICENOW_NOW_PLATFORM");
static const int SALESFORCE_CRM_HASH = HashingUtils::HashString("SALESFORCE_CRM");
static const int MICROSOFT_OUTLOOK_HASH = HashingUtils::HashString("MICROSOFT_OUTLOOK");
static const int PAGERDUTY_ADVANCE_HASH = HashingUtils::HashString("PAGERDUTY_ADVANCE");
static const int JIRA_CLOUD_HASH = HashingUtils::HashString("JIRA_CLOUD");
static const int ATLASSIAN_CONFLUENCE_HASH = HashingUtils::HashString("ATLASSIAN_CONFLUENCE");
static const int AMAZON_S3_HASH = HashingUtils::HashString("AMAZON_S3");
static const int AMAZON_BEDROCK_AGENT_RUNTIME_HASH = HashingUtils::HashString("AMAZON_BEDROCK_AGENT_RUNTIME");
static const int AMAZON_BEDROCK_RUNTIME_HASH = HashingUtils::HashString("AMAZON_BEDROCK_RUNTIME");
static const int AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME_HASH = HashingUtils::HashString("AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME");
static const int AMAZON_TEXTRACT_HASH = HashingUtils::HashString("AMAZON_TEXTRACT");
static const int AMAZON_COMPREHEND_HASH = HashingUtils::HashString("AMAZON_COMPREHEND");
static const int AMAZON_COMPREHEND_MEDICAL_HASH = HashingUtils::HashString("AMAZON_COMPREHEND_MEDICAL");
static const int MICROSOFT_ONEDRIVE_HASH = HashingUtils::HashString("MICROSOFT_ONEDRIVE");
static const int MICROSOFT_SHAREPOINT_HASH = HashingUtils::HashString("MICROSOFT_SHAREPOINT");
static const int MICROSOFT_TEAMS_HASH = HashingUtils::HashString("MICROSOFT_TEAMS");
static const int SAP_BUSINESSPARTNER_HASH = HashingUtils::HashString("SAP_BUSINESSPARTNER");
static const int SAP_PRODUCTMASTERDATA_HASH = HashingUtils::HashString("SAP_PRODUCTMASTERDATA");
static const int SAP_PHYSICALINVENTORY_HASH = HashingUtils::HashString("SAP_PHYSICALINVENTORY");
static const int SAP_BILLOFMATERIALS_HASH = HashingUtils::HashString("SAP_BILLOFMATERIALS");
static const int SAP_MATERIALSTOCK_HASH = HashingUtils::HashString("SAP_MATERIALSTOCK");
static const int ZENDESK_SUITE_HASH = HashingUtils::HashString("ZENDESK_SUITE");
static const int SMARTSHEET_HASH = HashingUtils::HashString("SMARTSHEET");
static const int SLACK_HASH = HashingUtils::HashString("SLACK");
static const int ASANA_HASH = HashingUtils::HashString("ASANA");
static const int BAMBOO_HR_HASH = HashingUtils::HashString("BAMBOO_HR");

ActionConnectorType GetActionConnectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERIC_HTTP_HASH) {
    return ActionConnectorType::GENERIC_HTTP;
  } else if (hashCode == SERVICENOW_NOW_PLATFORM_HASH) {
    return ActionConnectorType::SERVICENOW_NOW_PLATFORM;
  } else if (hashCode == SALESFORCE_CRM_HASH) {
    return ActionConnectorType::SALESFORCE_CRM;
  } else if (hashCode == MICROSOFT_OUTLOOK_HASH) {
    return ActionConnectorType::MICROSOFT_OUTLOOK;
  } else if (hashCode == PAGERDUTY_ADVANCE_HASH) {
    return ActionConnectorType::PAGERDUTY_ADVANCE;
  } else if (hashCode == JIRA_CLOUD_HASH) {
    return ActionConnectorType::JIRA_CLOUD;
  } else if (hashCode == ATLASSIAN_CONFLUENCE_HASH) {
    return ActionConnectorType::ATLASSIAN_CONFLUENCE;
  } else if (hashCode == AMAZON_S3_HASH) {
    return ActionConnectorType::AMAZON_S3;
  } else if (hashCode == AMAZON_BEDROCK_AGENT_RUNTIME_HASH) {
    return ActionConnectorType::AMAZON_BEDROCK_AGENT_RUNTIME;
  } else if (hashCode == AMAZON_BEDROCK_RUNTIME_HASH) {
    return ActionConnectorType::AMAZON_BEDROCK_RUNTIME;
  } else if (hashCode == AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME_HASH) {
    return ActionConnectorType::AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME;
  } else if (hashCode == AMAZON_TEXTRACT_HASH) {
    return ActionConnectorType::AMAZON_TEXTRACT;
  } else if (hashCode == AMAZON_COMPREHEND_HASH) {
    return ActionConnectorType::AMAZON_COMPREHEND;
  } else if (hashCode == AMAZON_COMPREHEND_MEDICAL_HASH) {
    return ActionConnectorType::AMAZON_COMPREHEND_MEDICAL;
  } else if (hashCode == MICROSOFT_ONEDRIVE_HASH) {
    return ActionConnectorType::MICROSOFT_ONEDRIVE;
  } else if (hashCode == MICROSOFT_SHAREPOINT_HASH) {
    return ActionConnectorType::MICROSOFT_SHAREPOINT;
  } else if (hashCode == MICROSOFT_TEAMS_HASH) {
    return ActionConnectorType::MICROSOFT_TEAMS;
  } else if (hashCode == SAP_BUSINESSPARTNER_HASH) {
    return ActionConnectorType::SAP_BUSINESSPARTNER;
  } else if (hashCode == SAP_PRODUCTMASTERDATA_HASH) {
    return ActionConnectorType::SAP_PRODUCTMASTERDATA;
  } else if (hashCode == SAP_PHYSICALINVENTORY_HASH) {
    return ActionConnectorType::SAP_PHYSICALINVENTORY;
  } else if (hashCode == SAP_BILLOFMATERIALS_HASH) {
    return ActionConnectorType::SAP_BILLOFMATERIALS;
  } else if (hashCode == SAP_MATERIALSTOCK_HASH) {
    return ActionConnectorType::SAP_MATERIALSTOCK;
  } else if (hashCode == ZENDESK_SUITE_HASH) {
    return ActionConnectorType::ZENDESK_SUITE;
  } else if (hashCode == SMARTSHEET_HASH) {
    return ActionConnectorType::SMARTSHEET;
  } else if (hashCode == SLACK_HASH) {
    return ActionConnectorType::SLACK;
  } else if (hashCode == ASANA_HASH) {
    return ActionConnectorType::ASANA;
  } else if (hashCode == BAMBOO_HR_HASH) {
    return ActionConnectorType::BAMBOO_HR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActionConnectorType>(hashCode);
  }

  return ActionConnectorType::NOT_SET;
}

Aws::String GetNameForActionConnectorType(ActionConnectorType enumValue) {
  switch (enumValue) {
    case ActionConnectorType::NOT_SET:
      return {};
    case ActionConnectorType::GENERIC_HTTP:
      return "GENERIC_HTTP";
    case ActionConnectorType::SERVICENOW_NOW_PLATFORM:
      return "SERVICENOW_NOW_PLATFORM";
    case ActionConnectorType::SALESFORCE_CRM:
      return "SALESFORCE_CRM";
    case ActionConnectorType::MICROSOFT_OUTLOOK:
      return "MICROSOFT_OUTLOOK";
    case ActionConnectorType::PAGERDUTY_ADVANCE:
      return "PAGERDUTY_ADVANCE";
    case ActionConnectorType::JIRA_CLOUD:
      return "JIRA_CLOUD";
    case ActionConnectorType::ATLASSIAN_CONFLUENCE:
      return "ATLASSIAN_CONFLUENCE";
    case ActionConnectorType::AMAZON_S3:
      return "AMAZON_S3";
    case ActionConnectorType::AMAZON_BEDROCK_AGENT_RUNTIME:
      return "AMAZON_BEDROCK_AGENT_RUNTIME";
    case ActionConnectorType::AMAZON_BEDROCK_RUNTIME:
      return "AMAZON_BEDROCK_RUNTIME";
    case ActionConnectorType::AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME:
      return "AMAZON_BEDROCK_DATA_AUTOMATION_RUNTIME";
    case ActionConnectorType::AMAZON_TEXTRACT:
      return "AMAZON_TEXTRACT";
    case ActionConnectorType::AMAZON_COMPREHEND:
      return "AMAZON_COMPREHEND";
    case ActionConnectorType::AMAZON_COMPREHEND_MEDICAL:
      return "AMAZON_COMPREHEND_MEDICAL";
    case ActionConnectorType::MICROSOFT_ONEDRIVE:
      return "MICROSOFT_ONEDRIVE";
    case ActionConnectorType::MICROSOFT_SHAREPOINT:
      return "MICROSOFT_SHAREPOINT";
    case ActionConnectorType::MICROSOFT_TEAMS:
      return "MICROSOFT_TEAMS";
    case ActionConnectorType::SAP_BUSINESSPARTNER:
      return "SAP_BUSINESSPARTNER";
    case ActionConnectorType::SAP_PRODUCTMASTERDATA:
      return "SAP_PRODUCTMASTERDATA";
    case ActionConnectorType::SAP_PHYSICALINVENTORY:
      return "SAP_PHYSICALINVENTORY";
    case ActionConnectorType::SAP_BILLOFMATERIALS:
      return "SAP_BILLOFMATERIALS";
    case ActionConnectorType::SAP_MATERIALSTOCK:
      return "SAP_MATERIALSTOCK";
    case ActionConnectorType::ZENDESK_SUITE:
      return "ZENDESK_SUITE";
    case ActionConnectorType::SMARTSHEET:
      return "SMARTSHEET";
    case ActionConnectorType::SLACK:
      return "SLACK";
    case ActionConnectorType::ASANA:
      return "ASANA";
    case ActionConnectorType::BAMBOO_HR:
      return "BAMBOO_HR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActionConnectorTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
