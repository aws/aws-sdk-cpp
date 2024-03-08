/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/SessionKeyDerivationMode.h>
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
      namespace SessionKeyDerivationModeMapper
      {

        static const int EMV_COMMON_SESSION_KEY_HASH = HashingUtils::HashString("EMV_COMMON_SESSION_KEY");
        static const int EMV2000_HASH = HashingUtils::HashString("EMV2000");
        static const int AMEX_HASH = HashingUtils::HashString("AMEX");
        static const int MASTERCARD_SESSION_KEY_HASH = HashingUtils::HashString("MASTERCARD_SESSION_KEY");
        static const int VISA_HASH = HashingUtils::HashString("VISA");


        SessionKeyDerivationMode GetSessionKeyDerivationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMV_COMMON_SESSION_KEY_HASH)
          {
            return SessionKeyDerivationMode::EMV_COMMON_SESSION_KEY;
          }
          else if (hashCode == EMV2000_HASH)
          {
            return SessionKeyDerivationMode::EMV2000;
          }
          else if (hashCode == AMEX_HASH)
          {
            return SessionKeyDerivationMode::AMEX;
          }
          else if (hashCode == MASTERCARD_SESSION_KEY_HASH)
          {
            return SessionKeyDerivationMode::MASTERCARD_SESSION_KEY;
          }
          else if (hashCode == VISA_HASH)
          {
            return SessionKeyDerivationMode::VISA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionKeyDerivationMode>(hashCode);
          }

          return SessionKeyDerivationMode::NOT_SET;
        }

        Aws::String GetNameForSessionKeyDerivationMode(SessionKeyDerivationMode enumValue)
        {
          switch(enumValue)
          {
          case SessionKeyDerivationMode::NOT_SET:
            return {};
          case SessionKeyDerivationMode::EMV_COMMON_SESSION_KEY:
            return "EMV_COMMON_SESSION_KEY";
          case SessionKeyDerivationMode::EMV2000:
            return "EMV2000";
          case SessionKeyDerivationMode::AMEX:
            return "AMEX";
          case SessionKeyDerivationMode::MASTERCARD_SESSION_KEY:
            return "MASTERCARD_SESSION_KEY";
          case SessionKeyDerivationMode::VISA:
            return "VISA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionKeyDerivationModeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
