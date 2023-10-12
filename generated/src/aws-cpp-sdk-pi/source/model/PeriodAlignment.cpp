/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/PeriodAlignment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace PeriodAlignmentMapper
      {

        static constexpr uint32_t END_TIME_HASH = ConstExprHashingUtils::HashString("END_TIME");
        static constexpr uint32_t START_TIME_HASH = ConstExprHashingUtils::HashString("START_TIME");


        PeriodAlignment GetPeriodAlignmentForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == END_TIME_HASH)
          {
            return PeriodAlignment::END_TIME;
          }
          else if (hashCode == START_TIME_HASH)
          {
            return PeriodAlignment::START_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeriodAlignment>(hashCode);
          }

          return PeriodAlignment::NOT_SET;
        }

        Aws::String GetNameForPeriodAlignment(PeriodAlignment enumValue)
        {
          switch(enumValue)
          {
          case PeriodAlignment::NOT_SET:
            return {};
          case PeriodAlignment::END_TIME:
            return "END_TIME";
          case PeriodAlignment::START_TIME:
            return "START_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodAlignmentMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
