/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static constexpr uint32_t INVALID_PAGE_TOKEN_HASH = ConstExprHashingUtils::HashString("INVALID_PAGE_TOKEN");
        static constexpr uint32_t INVALID_PARAMETER_VALUE_HASH = ConstExprHashingUtils::HashString("INVALID_PARAMETER_VALUE");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_PAGE_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_PAGE_TOKEN;
          }
          else if (hashCode == INVALID_PARAMETER_VALUE_HASH)
          {
            return ValidationExceptionReason::INVALID_PARAMETER_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::INVALID_PAGE_TOKEN:
            return "INVALID_PAGE_TOKEN";
          case ValidationExceptionReason::INVALID_PARAMETER_VALUE:
            return "INVALID_PARAMETER_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws
