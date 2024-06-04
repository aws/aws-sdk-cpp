/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/ValidationExceptionErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TaxSettings
  {
    namespace Model
    {
      namespace ValidationExceptionErrorCodeMapper
      {

        static const int MalformedToken_HASH = HashingUtils::HashString("MalformedToken");
        static const int ExpiredToken_HASH = HashingUtils::HashString("ExpiredToken");
        static const int InvalidToken_HASH = HashingUtils::HashString("InvalidToken");
        static const int FieldValidationFailed_HASH = HashingUtils::HashString("FieldValidationFailed");
        static const int MissingInput_HASH = HashingUtils::HashString("MissingInput");


        ValidationExceptionErrorCode GetValidationExceptionErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MalformedToken_HASH)
          {
            return ValidationExceptionErrorCode::MalformedToken;
          }
          else if (hashCode == ExpiredToken_HASH)
          {
            return ValidationExceptionErrorCode::ExpiredToken;
          }
          else if (hashCode == InvalidToken_HASH)
          {
            return ValidationExceptionErrorCode::InvalidToken;
          }
          else if (hashCode == FieldValidationFailed_HASH)
          {
            return ValidationExceptionErrorCode::FieldValidationFailed;
          }
          else if (hashCode == MissingInput_HASH)
          {
            return ValidationExceptionErrorCode::MissingInput;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionErrorCode>(hashCode);
          }

          return ValidationExceptionErrorCode::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionErrorCode(ValidationExceptionErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionErrorCode::NOT_SET:
            return {};
          case ValidationExceptionErrorCode::MalformedToken:
            return "MalformedToken";
          case ValidationExceptionErrorCode::ExpiredToken:
            return "ExpiredToken";
          case ValidationExceptionErrorCode::InvalidToken:
            return "InvalidToken";
          case ValidationExceptionErrorCode::FieldValidationFailed:
            return "FieldValidationFailed";
          case ValidationExceptionErrorCode::MissingInput:
            return "MissingInput";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionErrorCodeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
