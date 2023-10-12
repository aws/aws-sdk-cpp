/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ValidationStrategyMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ValidationStrategyModeMapper
      {

        static constexpr uint32_t STRICT_HASH = ConstExprHashingUtils::HashString("STRICT");
        static constexpr uint32_t LENIENT_HASH = ConstExprHashingUtils::HashString("LENIENT");


        ValidationStrategyMode GetValidationStrategyModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRICT_HASH)
          {
            return ValidationStrategyMode::STRICT;
          }
          else if (hashCode == LENIENT_HASH)
          {
            return ValidationStrategyMode::LENIENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationStrategyMode>(hashCode);
          }

          return ValidationStrategyMode::NOT_SET;
        }

        Aws::String GetNameForValidationStrategyMode(ValidationStrategyMode enumValue)
        {
          switch(enumValue)
          {
          case ValidationStrategyMode::NOT_SET:
            return {};
          case ValidationStrategyMode::STRICT:
            return "STRICT";
          case ValidationStrategyMode::LENIENT:
            return "LENIENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationStrategyModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
