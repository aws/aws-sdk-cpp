/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ValidationExceptionErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ValidationExceptionErrorCodeMapper
      {

        static const int REQUIRED_FIELD_MISSING_HASH = HashingUtils::HashString("REQUIRED_FIELD_MISSING");
        static const int INVALID_ENUM_VALUE_HASH = HashingUtils::HashString("INVALID_ENUM_VALUE");
        static const int INVALID_STRING_FORMAT_HASH = HashingUtils::HashString("INVALID_STRING_FORMAT");
        static const int INVALID_VALUE_HASH = HashingUtils::HashString("INVALID_VALUE");
        static const int TOO_MANY_VALUES_HASH = HashingUtils::HashString("TOO_MANY_VALUES");
        static const int INVALID_RESOURCE_STATE_HASH = HashingUtils::HashString("INVALID_RESOURCE_STATE");
        static const int DUPLICATE_KEY_VALUE_HASH = HashingUtils::HashString("DUPLICATE_KEY_VALUE");
        static const int VALUE_OUT_OF_RANGE_HASH = HashingUtils::HashString("VALUE_OUT_OF_RANGE");
        static const int ACTION_NOT_PERMITTED_HASH = HashingUtils::HashString("ACTION_NOT_PERMITTED");


        ValidationExceptionErrorCode GetValidationExceptionErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRED_FIELD_MISSING_HASH)
          {
            return ValidationExceptionErrorCode::REQUIRED_FIELD_MISSING;
          }
          else if (hashCode == INVALID_ENUM_VALUE_HASH)
          {
            return ValidationExceptionErrorCode::INVALID_ENUM_VALUE;
          }
          else if (hashCode == INVALID_STRING_FORMAT_HASH)
          {
            return ValidationExceptionErrorCode::INVALID_STRING_FORMAT;
          }
          else if (hashCode == INVALID_VALUE_HASH)
          {
            return ValidationExceptionErrorCode::INVALID_VALUE;
          }
          else if (hashCode == TOO_MANY_VALUES_HASH)
          {
            return ValidationExceptionErrorCode::TOO_MANY_VALUES;
          }
          else if (hashCode == INVALID_RESOURCE_STATE_HASH)
          {
            return ValidationExceptionErrorCode::INVALID_RESOURCE_STATE;
          }
          else if (hashCode == DUPLICATE_KEY_VALUE_HASH)
          {
            return ValidationExceptionErrorCode::DUPLICATE_KEY_VALUE;
          }
          else if (hashCode == VALUE_OUT_OF_RANGE_HASH)
          {
            return ValidationExceptionErrorCode::VALUE_OUT_OF_RANGE;
          }
          else if (hashCode == ACTION_NOT_PERMITTED_HASH)
          {
            return ValidationExceptionErrorCode::ACTION_NOT_PERMITTED;
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
          case ValidationExceptionErrorCode::REQUIRED_FIELD_MISSING:
            return "REQUIRED_FIELD_MISSING";
          case ValidationExceptionErrorCode::INVALID_ENUM_VALUE:
            return "INVALID_ENUM_VALUE";
          case ValidationExceptionErrorCode::INVALID_STRING_FORMAT:
            return "INVALID_STRING_FORMAT";
          case ValidationExceptionErrorCode::INVALID_VALUE:
            return "INVALID_VALUE";
          case ValidationExceptionErrorCode::TOO_MANY_VALUES:
            return "TOO_MANY_VALUES";
          case ValidationExceptionErrorCode::INVALID_RESOURCE_STATE:
            return "INVALID_RESOURCE_STATE";
          case ValidationExceptionErrorCode::DUPLICATE_KEY_VALUE:
            return "DUPLICATE_KEY_VALUE";
          case ValidationExceptionErrorCode::VALUE_OUT_OF_RANGE:
            return "VALUE_OUT_OF_RANGE";
          case ValidationExceptionErrorCode::ACTION_NOT_PERMITTED:
            return "ACTION_NOT_PERMITTED";
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
  } // namespace PartnerCentralSelling
} // namespace Aws
