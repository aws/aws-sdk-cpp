/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UsageLimitLimitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace UsageLimitLimitTypeMapper
      {

        static constexpr uint32_t time_HASH = ConstExprHashingUtils::HashString("time");
        static constexpr uint32_t data_scanned_HASH = ConstExprHashingUtils::HashString("data-scanned");


        UsageLimitLimitType GetUsageLimitLimitTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == time_HASH)
          {
            return UsageLimitLimitType::time;
          }
          else if (hashCode == data_scanned_HASH)
          {
            return UsageLimitLimitType::data_scanned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitLimitType>(hashCode);
          }

          return UsageLimitLimitType::NOT_SET;
        }

        Aws::String GetNameForUsageLimitLimitType(UsageLimitLimitType enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitLimitType::NOT_SET:
            return {};
          case UsageLimitLimitType::time:
            return "time";
          case UsageLimitLimitType::data_scanned:
            return "data-scanned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageLimitLimitTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
