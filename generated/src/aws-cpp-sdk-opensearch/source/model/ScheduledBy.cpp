/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ScheduledBy.h>
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
      namespace ScheduledByMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");


        ScheduledBy GetScheduledByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return ScheduledBy::CUSTOMER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return ScheduledBy::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledBy>(hashCode);
          }

          return ScheduledBy::NOT_SET;
        }

        Aws::String GetNameForScheduledBy(ScheduledBy enumValue)
        {
          switch(enumValue)
          {
          case ScheduledBy::NOT_SET:
            return {};
          case ScheduledBy::CUSTOMER:
            return "CUSTOMER";
          case ScheduledBy::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledByMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
