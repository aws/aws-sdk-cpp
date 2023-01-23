/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemFilterKeyMapper
      {

        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int CreatedBy_HASH = HashingUtils::HashString("CreatedBy");
        static const int Source_HASH = HashingUtils::HashString("Source");
        static const int Priority_HASH = HashingUtils::HashString("Priority");
        static const int Title_HASH = HashingUtils::HashString("Title");
        static const int OpsItemId_HASH = HashingUtils::HashString("OpsItemId");
        static const int CreatedTime_HASH = HashingUtils::HashString("CreatedTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");
        static const int ActualStartTime_HASH = HashingUtils::HashString("ActualStartTime");
        static const int ActualEndTime_HASH = HashingUtils::HashString("ActualEndTime");
        static const int PlannedStartTime_HASH = HashingUtils::HashString("PlannedStartTime");
        static const int PlannedEndTime_HASH = HashingUtils::HashString("PlannedEndTime");
        static const int OperationalData_HASH = HashingUtils::HashString("OperationalData");
        static const int OperationalDataKey_HASH = HashingUtils::HashString("OperationalDataKey");
        static const int OperationalDataValue_HASH = HashingUtils::HashString("OperationalDataValue");
        static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
        static const int AutomationId_HASH = HashingUtils::HashString("AutomationId");
        static const int Category_HASH = HashingUtils::HashString("Category");
        static const int Severity_HASH = HashingUtils::HashString("Severity");
        static const int OpsItemType_HASH = HashingUtils::HashString("OpsItemType");
        static const int ChangeRequestByRequesterArn_HASH = HashingUtils::HashString("ChangeRequestByRequesterArn");
        static const int ChangeRequestByRequesterName_HASH = HashingUtils::HashString("ChangeRequestByRequesterName");
        static const int ChangeRequestByApproverArn_HASH = HashingUtils::HashString("ChangeRequestByApproverArn");
        static const int ChangeRequestByApproverName_HASH = HashingUtils::HashString("ChangeRequestByApproverName");
        static const int ChangeRequestByTemplate_HASH = HashingUtils::HashString("ChangeRequestByTemplate");
        static const int ChangeRequestByTargetsResourceGroup_HASH = HashingUtils::HashString("ChangeRequestByTargetsResourceGroup");
        static const int InsightByType_HASH = HashingUtils::HashString("InsightByType");
        static const int AccountId_HASH = HashingUtils::HashString("AccountId");


        OpsItemFilterKey GetOpsItemFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Status_HASH)
          {
            return OpsItemFilterKey::Status;
          }
          else if (hashCode == CreatedBy_HASH)
          {
            return OpsItemFilterKey::CreatedBy;
          }
          else if (hashCode == Source_HASH)
          {
            return OpsItemFilterKey::Source;
          }
          else if (hashCode == Priority_HASH)
          {
            return OpsItemFilterKey::Priority;
          }
          else if (hashCode == Title_HASH)
          {
            return OpsItemFilterKey::Title;
          }
          else if (hashCode == OpsItemId_HASH)
          {
            return OpsItemFilterKey::OpsItemId;
          }
          else if (hashCode == CreatedTime_HASH)
          {
            return OpsItemFilterKey::CreatedTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return OpsItemFilterKey::LastModifiedTime;
          }
          else if (hashCode == ActualStartTime_HASH)
          {
            return OpsItemFilterKey::ActualStartTime;
          }
          else if (hashCode == ActualEndTime_HASH)
          {
            return OpsItemFilterKey::ActualEndTime;
          }
          else if (hashCode == PlannedStartTime_HASH)
          {
            return OpsItemFilterKey::PlannedStartTime;
          }
          else if (hashCode == PlannedEndTime_HASH)
          {
            return OpsItemFilterKey::PlannedEndTime;
          }
          else if (hashCode == OperationalData_HASH)
          {
            return OpsItemFilterKey::OperationalData;
          }
          else if (hashCode == OperationalDataKey_HASH)
          {
            return OpsItemFilterKey::OperationalDataKey;
          }
          else if (hashCode == OperationalDataValue_HASH)
          {
            return OpsItemFilterKey::OperationalDataValue;
          }
          else if (hashCode == ResourceId_HASH)
          {
            return OpsItemFilterKey::ResourceId;
          }
          else if (hashCode == AutomationId_HASH)
          {
            return OpsItemFilterKey::AutomationId;
          }
          else if (hashCode == Category_HASH)
          {
            return OpsItemFilterKey::Category;
          }
          else if (hashCode == Severity_HASH)
          {
            return OpsItemFilterKey::Severity;
          }
          else if (hashCode == OpsItemType_HASH)
          {
            return OpsItemFilterKey::OpsItemType;
          }
          else if (hashCode == ChangeRequestByRequesterArn_HASH)
          {
            return OpsItemFilterKey::ChangeRequestByRequesterArn;
          }
          else if (hashCode == ChangeRequestByRequesterName_HASH)
          {
            return OpsItemFilterKey::ChangeRequestByRequesterName;
          }
          else if (hashCode == ChangeRequestByApproverArn_HASH)
          {
            return OpsItemFilterKey::ChangeRequestByApproverArn;
          }
          else if (hashCode == ChangeRequestByApproverName_HASH)
          {
            return OpsItemFilterKey::ChangeRequestByApproverName;
          }
          else if (hashCode == ChangeRequestByTemplate_HASH)
          {
            return OpsItemFilterKey::ChangeRequestByTemplate;
          }
          else if (hashCode == ChangeRequestByTargetsResourceGroup_HASH)
          {
            return OpsItemFilterKey::ChangeRequestByTargetsResourceGroup;
          }
          else if (hashCode == InsightByType_HASH)
          {
            return OpsItemFilterKey::InsightByType;
          }
          else if (hashCode == AccountId_HASH)
          {
            return OpsItemFilterKey::AccountId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemFilterKey>(hashCode);
          }

          return OpsItemFilterKey::NOT_SET;
        }

        Aws::String GetNameForOpsItemFilterKey(OpsItemFilterKey enumValue)
        {
          switch(enumValue)
          {
          case OpsItemFilterKey::Status:
            return "Status";
          case OpsItemFilterKey::CreatedBy:
            return "CreatedBy";
          case OpsItemFilterKey::Source:
            return "Source";
          case OpsItemFilterKey::Priority:
            return "Priority";
          case OpsItemFilterKey::Title:
            return "Title";
          case OpsItemFilterKey::OpsItemId:
            return "OpsItemId";
          case OpsItemFilterKey::CreatedTime:
            return "CreatedTime";
          case OpsItemFilterKey::LastModifiedTime:
            return "LastModifiedTime";
          case OpsItemFilterKey::ActualStartTime:
            return "ActualStartTime";
          case OpsItemFilterKey::ActualEndTime:
            return "ActualEndTime";
          case OpsItemFilterKey::PlannedStartTime:
            return "PlannedStartTime";
          case OpsItemFilterKey::PlannedEndTime:
            return "PlannedEndTime";
          case OpsItemFilterKey::OperationalData:
            return "OperationalData";
          case OpsItemFilterKey::OperationalDataKey:
            return "OperationalDataKey";
          case OpsItemFilterKey::OperationalDataValue:
            return "OperationalDataValue";
          case OpsItemFilterKey::ResourceId:
            return "ResourceId";
          case OpsItemFilterKey::AutomationId:
            return "AutomationId";
          case OpsItemFilterKey::Category:
            return "Category";
          case OpsItemFilterKey::Severity:
            return "Severity";
          case OpsItemFilterKey::OpsItemType:
            return "OpsItemType";
          case OpsItemFilterKey::ChangeRequestByRequesterArn:
            return "ChangeRequestByRequesterArn";
          case OpsItemFilterKey::ChangeRequestByRequesterName:
            return "ChangeRequestByRequesterName";
          case OpsItemFilterKey::ChangeRequestByApproverArn:
            return "ChangeRequestByApproverArn";
          case OpsItemFilterKey::ChangeRequestByApproverName:
            return "ChangeRequestByApproverName";
          case OpsItemFilterKey::ChangeRequestByTemplate:
            return "ChangeRequestByTemplate";
          case OpsItemFilterKey::ChangeRequestByTargetsResourceGroup:
            return "ChangeRequestByTargetsResourceGroup";
          case OpsItemFilterKey::InsightByType:
            return "InsightByType";
          case OpsItemFilterKey::AccountId:
            return "AccountId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
