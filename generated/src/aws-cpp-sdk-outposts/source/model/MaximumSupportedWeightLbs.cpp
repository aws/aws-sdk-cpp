/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/MaximumSupportedWeightLbs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace MaximumSupportedWeightLbsMapper
      {

        static constexpr uint32_t NO_LIMIT_HASH = ConstExprHashingUtils::HashString("NO_LIMIT");
        static constexpr uint32_t MAX_1400_LBS_HASH = ConstExprHashingUtils::HashString("MAX_1400_LBS");
        static constexpr uint32_t MAX_1600_LBS_HASH = ConstExprHashingUtils::HashString("MAX_1600_LBS");
        static constexpr uint32_t MAX_1800_LBS_HASH = ConstExprHashingUtils::HashString("MAX_1800_LBS");
        static constexpr uint32_t MAX_2000_LBS_HASH = ConstExprHashingUtils::HashString("MAX_2000_LBS");


        MaximumSupportedWeightLbs GetMaximumSupportedWeightLbsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_LIMIT_HASH)
          {
            return MaximumSupportedWeightLbs::NO_LIMIT;
          }
          else if (hashCode == MAX_1400_LBS_HASH)
          {
            return MaximumSupportedWeightLbs::MAX_1400_LBS;
          }
          else if (hashCode == MAX_1600_LBS_HASH)
          {
            return MaximumSupportedWeightLbs::MAX_1600_LBS;
          }
          else if (hashCode == MAX_1800_LBS_HASH)
          {
            return MaximumSupportedWeightLbs::MAX_1800_LBS;
          }
          else if (hashCode == MAX_2000_LBS_HASH)
          {
            return MaximumSupportedWeightLbs::MAX_2000_LBS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaximumSupportedWeightLbs>(hashCode);
          }

          return MaximumSupportedWeightLbs::NOT_SET;
        }

        Aws::String GetNameForMaximumSupportedWeightLbs(MaximumSupportedWeightLbs enumValue)
        {
          switch(enumValue)
          {
          case MaximumSupportedWeightLbs::NOT_SET:
            return {};
          case MaximumSupportedWeightLbs::NO_LIMIT:
            return "NO_LIMIT";
          case MaximumSupportedWeightLbs::MAX_1400_LBS:
            return "MAX_1400_LBS";
          case MaximumSupportedWeightLbs::MAX_1600_LBS:
            return "MAX_1600_LBS";
          case MaximumSupportedWeightLbs::MAX_1800_LBS:
            return "MAX_1800_LBS";
          case MaximumSupportedWeightLbs::MAX_2000_LBS:
            return "MAX_2000_LBS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaximumSupportedWeightLbsMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
