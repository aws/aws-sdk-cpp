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

        static constexpr uint32_t ANALYSIS_HASH = ConstExprHashingUtils::HashString("ANALYSIS");
        static constexpr uint32_t INCIDENT_HASH = ConstExprHashingUtils::HashString("INCIDENT");
        static constexpr uint32_t METRIC_HASH = ConstExprHashingUtils::HashString("METRIC");
        static constexpr uint32_t PARENT_HASH = ConstExprHashingUtils::HashString("PARENT");
        static constexpr uint32_t ATTACHMENT_HASH = ConstExprHashingUtils::HashString("ATTACHMENT");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");
        static constexpr uint32_t AUTOMATION_HASH = ConstExprHashingUtils::HashString("AUTOMATION");
        static constexpr uint32_t INVOLVED_RESOURCE_HASH = ConstExprHashingUtils::HashString("INVOLVED_RESOURCE");
        static constexpr uint32_t TASK_HASH = ConstExprHashingUtils::HashString("TASK");


        ItemType GetItemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ItemType::NOT_SET:
            return {};
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
