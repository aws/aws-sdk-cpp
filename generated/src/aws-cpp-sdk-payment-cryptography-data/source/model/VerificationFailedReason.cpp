/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerificationFailedReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptographyData
  {
    namespace Model
    {
      namespace VerificationFailedReasonMapper
      {

        static constexpr uint32_t INVALID_MAC_HASH = ConstExprHashingUtils::HashString("INVALID_MAC");
        static constexpr uint32_t INVALID_PIN_HASH = ConstExprHashingUtils::HashString("INVALID_PIN");
        static constexpr uint32_t INVALID_VALIDATION_DATA_HASH = ConstExprHashingUtils::HashString("INVALID_VALIDATION_DATA");
        static constexpr uint32_t INVALID_AUTH_REQUEST_CRYPTOGRAM_HASH = ConstExprHashingUtils::HashString("INVALID_AUTH_REQUEST_CRYPTOGRAM");


        VerificationFailedReason GetVerificationFailedReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_MAC_HASH)
          {
            return VerificationFailedReason::INVALID_MAC;
          }
          else if (hashCode == INVALID_PIN_HASH)
          {
            return VerificationFailedReason::INVALID_PIN;
          }
          else if (hashCode == INVALID_VALIDATION_DATA_HASH)
          {
            return VerificationFailedReason::INVALID_VALIDATION_DATA;
          }
          else if (hashCode == INVALID_AUTH_REQUEST_CRYPTOGRAM_HASH)
          {
            return VerificationFailedReason::INVALID_AUTH_REQUEST_CRYPTOGRAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerificationFailedReason>(hashCode);
          }

          return VerificationFailedReason::NOT_SET;
        }

        Aws::String GetNameForVerificationFailedReason(VerificationFailedReason enumValue)
        {
          switch(enumValue)
          {
          case VerificationFailedReason::NOT_SET:
            return {};
          case VerificationFailedReason::INVALID_MAC:
            return "INVALID_MAC";
          case VerificationFailedReason::INVALID_PIN:
            return "INVALID_PIN";
          case VerificationFailedReason::INVALID_VALIDATION_DATA:
            return "INVALID_VALIDATION_DATA";
          case VerificationFailedReason::INVALID_AUTH_REQUEST_CRYPTOGRAM:
            return "INVALID_AUTH_REQUEST_CRYPTOGRAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerificationFailedReasonMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
