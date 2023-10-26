/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ZoneStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ZoneStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int StandBy_HASH = HashingUtils::HashString("StandBy");
        static const int NotAvailable_HASH = HashingUtils::HashString("NotAvailable");


        ZoneStatus GetZoneStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return ZoneStatus::Active;
          }
          else if (hashCode == StandBy_HASH)
          {
            return ZoneStatus::StandBy;
          }
          else if (hashCode == NotAvailable_HASH)
          {
            return ZoneStatus::NotAvailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZoneStatus>(hashCode);
          }

          return ZoneStatus::NOT_SET;
        }

        Aws::String GetNameForZoneStatus(ZoneStatus enumValue)
        {
          switch(enumValue)
          {
          case ZoneStatus::NOT_SET:
            return {};
          case ZoneStatus::Active:
            return "Active";
          case ZoneStatus::StandBy:
            return "StandBy";
          case ZoneStatus::NotAvailable:
            return "NotAvailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ZoneStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
