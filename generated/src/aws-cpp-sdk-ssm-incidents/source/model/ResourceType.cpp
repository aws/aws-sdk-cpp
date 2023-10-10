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

        static const int RESPONSE_PLAN_HASH = HashingUtils::HashString("RESPONSE_PLAN");
        static const int INCIDENT_RECORD_HASH = HashingUtils::HashString("INCIDENT_RECORD");
        static const int TIMELINE_EVENT_HASH = HashingUtils::HashString("TIMELINE_EVENT");
        static const int REPLICATION_SET_HASH = HashingUtils::HashString("REPLICATION_SET");
        static const int RESOURCE_POLICY_HASH = HashingUtils::HashString("RESOURCE_POLICY");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
