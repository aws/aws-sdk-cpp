/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/SensitivityLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace SensitivityLevelMapper
      {

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");


        SensitivityLevel GetSensitivityLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return SensitivityLevel::LOW;
          }
          else if (hashCode == HIGH_HASH)
          {
            return SensitivityLevel::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SensitivityLevel>(hashCode);
          }

          return SensitivityLevel::NOT_SET;
        }

        Aws::String GetNameForSensitivityLevel(SensitivityLevel enumValue)
        {
          switch(enumValue)
          {
          case SensitivityLevel::NOT_SET:
            return {};
          case SensitivityLevel::LOW:
            return "LOW";
          case SensitivityLevel::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SensitivityLevelMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
