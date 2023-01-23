/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace ItemTypeMapper
      {

        static const int ANALYSIS_HASH = HashingUtils::HashString("ANALYSIS");
        static const int INCIDENT_HASH = HashingUtils::HashString("INCIDENT");
        static const int METRIC_HASH = HashingUtils::HashString("METRIC");
        static const int PARENT_HASH = HashingUtils::HashString("PARENT");
        static const int ATTACHMENT_HASH = HashingUtils::HashString("ATTACHMENT");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");
        static const int AUTOMATION_HASH = HashingUtils::HashString("AUTOMATION");
        static const int INVOLVED_RESOURCE_HASH = HashingUtils::HashString("INVOLVED_RESOURCE");
        static const int TASK_HASH = HashingUtils::HashString("TASK");


        ItemType GetItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANALYSIS_HASH)
          {
            return ItemType::ANALYSIS;
          }
          else if (hashCode == INCIDENT_HASH)
          {
            return ItemType::INCIDENT;
          }
          else if (hashCode == METRIC_HASH)
          {
            return ItemType::METRIC;
          }
          else if (hashCode == PARENT_HASH)
          {
            return ItemType::PARENT;
          }
          else if (hashCode == ATTACHMENT_HASH)
          {
            return ItemType::ATTACHMENT;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ItemType::OTHER;
          }
          else if (hashCode == AUTOMATION_HASH)
          {
            return ItemType::AUTOMATION;
          }
          else if (hashCode == INVOLVED_RESOURCE_HASH)
          {
            return ItemType::INVOLVED_RESOURCE;
          }
          else if (hashCode == TASK_HASH)
          {
            return ItemType::TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ItemType>(hashCode);
          }

          return ItemType::NOT_SET;
        }

        Aws::String GetNameForItemType(ItemType enumValue)
        {
          switch(enumValue)
          {
          case ItemType::ANALYSIS:
            return "ANALYSIS";
          case ItemType::INCIDENT:
            return "INCIDENT";
          case ItemType::METRIC:
            return "METRIC";
          case ItemType::PARENT:
            return "PARENT";
          case ItemType::ATTACHMENT:
            return "ATTACHMENT";
          case ItemType::OTHER:
            return "OTHER";
          case ItemType::AUTOMATION:
            return "AUTOMATION";
          case ItemType::INVOLVED_RESOURCE:
            return "INVOLVED_RESOURCE";
          case ItemType::TASK:
            return "TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ItemTypeMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
