/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ScanBy.h>
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
      namespace ScanByMapper
      {

        static constexpr uint32_t TimestampDescending_HASH = ConstExprHashingUtils::HashString("TimestampDescending");
        static constexpr uint32_t TimestampAscending_HASH = ConstExprHashingUtils::HashString("TimestampAscending");


        ScanBy GetScanByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimestampDescending_HASH)
          {
            return ScanBy::TimestampDescending;
          }
          else if (hashCode == TimestampAscending_HASH)
          {
            return ScanBy::TimestampAscending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanBy>(hashCode);
          }

          return ScanBy::NOT_SET;
        }

        Aws::String GetNameForScanBy(ScanBy enumValue)
        {
          switch(enumValue)
          {
          case ScanBy::NOT_SET:
            return {};
          case ScanBy::TimestampDescending:
            return "TimestampDescending";
          case ScanBy::TimestampAscending:
            return "TimestampAscending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanByMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
