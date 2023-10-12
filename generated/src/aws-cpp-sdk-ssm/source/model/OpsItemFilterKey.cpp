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

        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t CreatedBy_HASH = ConstExprHashingUtils::HashString("CreatedBy");
        static constexpr uint32_t Source_HASH = ConstExprHashingUtils::HashString("Source");
        static constexpr uint32_t Priority_HASH = ConstExprHashingUtils::HashString("Priority");
        static constexpr uint32_t Title_HASH = ConstExprHashingUtils::HashString("Title");
        static constexpr uint32_t OpsItemId_HASH = ConstExprHashingUtils::HashString("OpsItemId");
        static constexpr uint32_t CreatedTime_HASH = ConstExprHashingUtils::HashString("CreatedTime");
        static constexpr uint32_t LastModifiedTime_HASH = ConstExprHashingUtils::HashString("LastModifiedTime");
        static constexpr uint32_t ActualStartTime_HASH = ConstExprHashingUtils::HashString("ActualStartTime");
        static constexpr uint32_t ActualEndTime_HASH = ConstExprHashingUtils::HashString("ActualEndTime");
        static constexpr uint32_t PlannedStartTime_HASH = ConstExprHashingUtils::HashString("PlannedStartTime");
        static constexpr uint32_t PlannedEndTime_HASH = ConstExprHashingUtils::HashString("PlannedEndTime");
        static constexpr uint32_t OperationalData_HASH = ConstExprHashingUtils::HashString("OperationalData");
        static constexpr uint32_t OperationalDataKey_HASH = ConstExprHashingUtils::HashString("OperationalDataKey");
        static constexpr uint32_t OperationalDataValue_HASH = ConstExprHashingUtils::HashString("OperationalDataValue");
        static constexpr uint32_t ResourceId_HASH = ConstExprHashingUtils::HashString("ResourceId");
        static constexpr uint32_t AutomationId_HASH = ConstExprHashingUtils::HashString("AutomationId");
        static constexpr uint32_t Category_HASH = ConstExprHashingUtils::HashString("Category");
        static constexpr uint32_t Severity_HASH = ConstExprHashingUtils::HashString("Severity");
        static constexpr uint32_t OpsItemType_HASH = ConstExprHashingUtils::HashString("OpsItemType");
        static constexpr uint32_t ChangeRequestByRequesterArn_HASH = ConstExprHashingUtils::HashString("ChangeRequestByRequesterArn");
        static constexpr uint32_t ChangeRequestByRequesterName_HASH = ConstExprHashingUtils::HashString("ChangeRequestByRequesterName");
        static constexpr uint32_t ChangeRequestByApproverArn_HASH = ConstExprHashingUtils::HashString("ChangeRequestByApproverArn");
        static constexpr uint32_t ChangeRequestByApproverName_HASH = ConstExprHashingUtils::HashString("ChangeRequestByApproverName");
        static constexpr uint32_t ChangeRequestByTemplate_HASH = ConstExprHashingUtils::HashString("ChangeRequestByTemplate");
        static constexpr uint32_t ChangeRequestByTargetsResourceGroup_HASH = ConstExprHashingUtils::HashString("ChangeRequestByTargetsResourceGroup");
        static constexpr uint32_t InsightByType_HASH = ConstExprHashingUtils::HashString("InsightByType");
        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");


        OpsItemFilterKey GetOpsItemFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case OpsItemFilterKey::NOT_SET:
            return {};
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
