/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/RecentlyActive.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace RecentlyActiveMapper
      {

        static const int PT3H_HASH = HashingUtils::HashString("PT3H");


        RecentlyActive GetRecentlyActiveForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PT3H_HASH)
          {
            return RecentlyActive::PT3H;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecentlyActive>(hashCode);
          }

          return RecentlyActive::NOT_SET;
        }

        Aws::String GetNameForRecentlyActive(RecentlyActive enumValue)
        {
          switch(enumValue)
          {
          case RecentlyActive::PT3H:
            return "PT3H";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecentlyActiveMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
