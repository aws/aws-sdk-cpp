/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GuardrailFilterStrength.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace GuardrailFilterStrengthMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        GuardrailFilterStrength GetGuardrailFilterStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return GuardrailFilterStrength::NONE;
          }
          else if (hashCode == LOW_HASH)
          {
            return GuardrailFilterStrength::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return GuardrailFilterStrength::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return GuardrailFilterStrength::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailFilterStrength>(hashCode);
          }

          return GuardrailFilterStrength::NOT_SET;
        }

        Aws::String GetNameForGuardrailFilterStrength(GuardrailFilterStrength enumValue)
        {
          switch(enumValue)
          {
          case GuardrailFilterStrength::NOT_SET:
            return {};
          case GuardrailFilterStrength::NONE:
            return "NONE";
          case GuardrailFilterStrength::LOW:
            return "LOW";
          case GuardrailFilterStrength::MEDIUM:
            return "MEDIUM";
          case GuardrailFilterStrength::HIGH:
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

      } // namespace GuardrailFilterStrengthMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
