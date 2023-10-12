/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FailureReason.h>
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
      namespace FailureReasonMapper
      {

        static constexpr uint32_t TOKEN_MISSING_HASH = ConstExprHashingUtils::HashString("TOKEN_MISSING");
        static constexpr uint32_t TOKEN_EXPIRED_HASH = ConstExprHashingUtils::HashString("TOKEN_EXPIRED");
        static constexpr uint32_t TOKEN_INVALID_HASH = ConstExprHashingUtils::HashString("TOKEN_INVALID");
        static constexpr uint32_t TOKEN_DOMAIN_MISMATCH_HASH = ConstExprHashingUtils::HashString("TOKEN_DOMAIN_MISMATCH");


        FailureReason GetFailureReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOKEN_MISSING_HASH)
          {
            return FailureReason::TOKEN_MISSING;
          }
          else if (hashCode == TOKEN_EXPIRED_HASH)
          {
            return FailureReason::TOKEN_EXPIRED;
          }
          else if (hashCode == TOKEN_INVALID_HASH)
          {
            return FailureReason::TOKEN_INVALID;
          }
          else if (hashCode == TOKEN_DOMAIN_MISMATCH_HASH)
          {
            return FailureReason::TOKEN_DOMAIN_MISMATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureReason>(hashCode);
          }

          return FailureReason::NOT_SET;
        }

        Aws::String GetNameForFailureReason(FailureReason enumValue)
        {
          switch(enumValue)
          {
          case FailureReason::NOT_SET:
            return {};
          case FailureReason::TOKEN_MISSING:
            return "TOKEN_MISSING";
          case FailureReason::TOKEN_EXPIRED:
            return "TOKEN_EXPIRED";
          case FailureReason::TOKEN_INVALID:
            return "TOKEN_INVALID";
          case FailureReason::TOKEN_DOMAIN_MISMATCH:
            return "TOKEN_DOMAIN_MISMATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureReasonMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
