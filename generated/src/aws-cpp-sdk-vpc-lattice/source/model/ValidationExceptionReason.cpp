/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static constexpr uint32_t unknownOperation_HASH = ConstExprHashingUtils::HashString("unknownOperation");
        static constexpr uint32_t cannotParse_HASH = ConstExprHashingUtils::HashString("cannotParse");
        static constexpr uint32_t fieldValidationFailed_HASH = ConstExprHashingUtils::HashString("fieldValidationFailed");
        static constexpr uint32_t other_HASH = ConstExprHashingUtils::HashString("other");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unknownOperation_HASH)
          {
            return ValidationExceptionReason::unknownOperation;
          }
          else if (hashCode == cannotParse_HASH)
          {
            return ValidationExceptionReason::cannotParse;
          }
          else if (hashCode == fieldValidationFailed_HASH)
          {
            return ValidationExceptionReason::fieldValidationFailed;
          }
          else if (hashCode == other_HASH)
          {
            return ValidationExceptionReason::other;
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
          case ValidationExceptionReason::unknownOperation:
            return "unknownOperation";
          case ValidationExceptionReason::cannotParse:
            return "cannotParse";
          case ValidationExceptionReason::fieldValidationFailed:
            return "fieldValidationFailed";
          case ValidationExceptionReason::other:
            return "other";
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
  } // namespace VPCLattice
} // namespace Aws
