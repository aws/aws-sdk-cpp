/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ResourceType.h>
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
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t RESPONSE_PLAN_HASH = ConstExprHashingUtils::HashString("RESPONSE_PLAN");
        static constexpr uint32_t INCIDENT_RECORD_HASH = ConstExprHashingUtils::HashString("INCIDENT_RECORD");
        static constexpr uint32_t TIMELINE_EVENT_HASH = ConstExprHashingUtils::HashString("TIMELINE_EVENT");
        static constexpr uint32_t REPLICATION_SET_HASH = ConstExprHashingUtils::HashString("REPLICATION_SET");
        static constexpr uint32_t RESOURCE_POLICY_HASH = ConstExprHashingUtils::HashString("RESOURCE_POLICY");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESPONSE_PLAN_HASH)
          {
            return ResourceType::RESPONSE_PLAN;
          }
          else if (hashCode == INCIDENT_RECORD_HASH)
          {
            return ResourceType::INCIDENT_RECORD;
          }
          else if (hashCode == TIMELINE_EVENT_HASH)
          {
            return ResourceType::TIMELINE_EVENT;
          }
          else if (hashCode == REPLICATION_SET_HASH)
          {
            return ResourceType::REPLICATION_SET;
          }
          else if (hashCode == RESOURCE_POLICY_HASH)
          {
            return ResourceType::RESOURCE_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::RESPONSE_PLAN:
            return "RESPONSE_PLAN";
          case ResourceType::INCIDENT_RECORD:
            return "INCIDENT_RECORD";
          case ResourceType::TIMELINE_EVENT:
            return "TIMELINE_EVENT";
          case ResourceType::REPLICATION_SET:
            return "REPLICATION_SET";
          case ResourceType::RESOURCE_POLICY:
            return "RESOURCE_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
