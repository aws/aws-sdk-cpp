/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ValidationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VerifiedPermissions
  {
    namespace Model
    {
      namespace ValidationModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int STRICT_HASH = HashingUtils::HashString("STRICT");


        ValidationMode GetValidationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return ValidationMode::OFF;
          }
          else if (hashCode == STRICT_HASH)
          {
            return ValidationMode::STRICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationMode>(hashCode);
          }

          return ValidationMode::NOT_SET;
        }

        Aws::String GetNameForValidationMode(ValidationMode enumValue)
        {
          switch(enumValue)
          {
          case ValidationMode::NOT_SET:
            return {};
          case ValidationMode::OFF:
            return "OFF";
          case ValidationMode::STRICT:
            return "STRICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationModeMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
