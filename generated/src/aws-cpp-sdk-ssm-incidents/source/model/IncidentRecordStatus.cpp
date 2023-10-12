/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/IncidentRecordStatus.h>
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
      namespace IncidentRecordStatusMapper
      {

        static constexpr uint32_t OPEN_HASH = ConstExprHashingUtils::HashString("OPEN");
        static constexpr uint32_t RESOLVED_HASH = ConstExprHashingUtils::HashString("RESOLVED");


        IncidentRecordStatus GetIncidentRecordStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return IncidentRecordStatus::OPEN;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return IncidentRecordStatus::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncidentRecordStatus>(hashCode);
          }

          return IncidentRecordStatus::NOT_SET;
        }

        Aws::String GetNameForIncidentRecordStatus(IncidentRecordStatus enumValue)
        {
          switch(enumValue)
          {
          case IncidentRecordStatus::NOT_SET:
            return {};
          case IncidentRecordStatus::OPEN:
            return "OPEN";
          case IncidentRecordStatus::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncidentRecordStatusMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
