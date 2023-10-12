/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ImpactLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ImpactLevelMapper
      {

        static constexpr uint32_t IL2_HASH = ConstExprHashingUtils::HashString("IL2");
        static constexpr uint32_t IL4_HASH = ConstExprHashingUtils::HashString("IL4");
        static constexpr uint32_t IL5_HASH = ConstExprHashingUtils::HashString("IL5");
        static constexpr uint32_t IL6_HASH = ConstExprHashingUtils::HashString("IL6");
        static constexpr uint32_t IL99_HASH = ConstExprHashingUtils::HashString("IL99");


        ImpactLevel GetImpactLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IL2_HASH)
          {
            return ImpactLevel::IL2;
          }
          else if (hashCode == IL4_HASH)
          {
            return ImpactLevel::IL4;
          }
          else if (hashCode == IL5_HASH)
          {
            return ImpactLevel::IL5;
          }
          else if (hashCode == IL6_HASH)
          {
            return ImpactLevel::IL6;
          }
          else if (hashCode == IL99_HASH)
          {
            return ImpactLevel::IL99;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImpactLevel>(hashCode);
          }

          return ImpactLevel::NOT_SET;
        }

        Aws::String GetNameForImpactLevel(ImpactLevel enumValue)
        {
          switch(enumValue)
          {
          case ImpactLevel::NOT_SET:
            return {};
          case ImpactLevel::IL2:
            return "IL2";
          case ImpactLevel::IL4:
            return "IL4";
          case ImpactLevel::IL5:
            return "IL5";
          case ImpactLevel::IL6:
            return "IL6";
          case ImpactLevel::IL99:
            return "IL99";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImpactLevelMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
