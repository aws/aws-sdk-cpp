/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyUsage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptography
  {
    namespace Model
    {
      namespace KeyUsageMapper
      {

        static const int TR31_B0_BASE_DERIVATION_KEY_HASH = HashingUtils::HashString("TR31_B0_BASE_DERIVATION_KEY");
        static const int TR31_C0_CARD_VERIFICATION_KEY_HASH = HashingUtils::HashString("TR31_C0_CARD_VERIFICATION_KEY");
        static const int TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY_HASH = HashingUtils::HashString("TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY");
        static const int TR31_D1_ASYMMETRIC_KEY_FOR_DATA_ENCRYPTION_HASH = HashingUtils::HashString("TR31_D1_ASYMMETRIC_KEY_FOR_DATA_ENCRYPTION");
        static const int TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS_HASH = HashingUtils::HashString("TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS");
        static const int TR31_E1_EMV_MKEY_CONFIDENTIALITY_HASH = HashingUtils::HashString("TR31_E1_EMV_MKEY_CONFIDENTIALITY");
        static const int TR31_E2_EMV_MKEY_INTEGRITY_HASH = HashingUtils::HashString("TR31_E2_EMV_MKEY_INTEGRITY");
        static const int TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS_HASH = HashingUtils::HashString("TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS");
        static const int TR31_E5_EMV_MKEY_CARD_PERSONALIZATION_HASH = HashingUtils::HashString("TR31_E5_EMV_MKEY_CARD_PERSONALIZATION");
        static const int TR31_E6_EMV_MKEY_OTHER_HASH = HashingUtils::HashString("TR31_E6_EMV_MKEY_OTHER");
        static const int TR31_K0_KEY_ENCRYPTION_KEY_HASH = HashingUtils::HashString("TR31_K0_KEY_ENCRYPTION_KEY");
        static const int TR31_K1_KEY_BLOCK_PROTECTION_KEY_HASH = HashingUtils::HashString("TR31_K1_KEY_BLOCK_PROTECTION_KEY");
        static const int TR31_K3_ASYMMETRIC_KEY_FOR_KEY_AGREEMENT_HASH = HashingUtils::HashString("TR31_K3_ASYMMETRIC_KEY_FOR_KEY_AGREEMENT");
        static const int TR31_M3_ISO_9797_3_MAC_KEY_HASH = HashingUtils::HashString("TR31_M3_ISO_9797_3_MAC_KEY");
        static const int TR31_M1_ISO_9797_1_MAC_KEY_HASH = HashingUtils::HashString("TR31_M1_ISO_9797_1_MAC_KEY");
        static const int TR31_M6_ISO_9797_5_CMAC_KEY_HASH = HashingUtils::HashString("TR31_M6_ISO_9797_5_CMAC_KEY");
        static const int TR31_M7_HMAC_KEY_HASH = HashingUtils::HashString("TR31_M7_HMAC_KEY");
        static const int TR31_P0_PIN_ENCRYPTION_KEY_HASH = HashingUtils::HashString("TR31_P0_PIN_ENCRYPTION_KEY");
        static const int TR31_P1_PIN_GENERATION_KEY_HASH = HashingUtils::HashString("TR31_P1_PIN_GENERATION_KEY");
        static const int TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE_HASH = HashingUtils::HashString("TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE");
        static const int TR31_V1_IBM3624_PIN_VERIFICATION_KEY_HASH = HashingUtils::HashString("TR31_V1_IBM3624_PIN_VERIFICATION_KEY");
        static const int TR31_V2_VISA_PIN_VERIFICATION_KEY_HASH = HashingUtils::HashString("TR31_V2_VISA_PIN_VERIFICATION_KEY");
        static const int TR31_K2_TR34_ASYMMETRIC_KEY_HASH = HashingUtils::HashString("TR31_K2_TR34_ASYMMETRIC_KEY");


        KeyUsage GetKeyUsageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TR31_B0_BASE_DERIVATION_KEY_HASH)
          {
            return KeyUsage::TR31_B0_BASE_DERIVATION_KEY;
          }
          else if (hashCode == TR31_C0_CARD_VERIFICATION_KEY_HASH)
          {
            return KeyUsage::TR31_C0_CARD_VERIFICATION_KEY;
          }
          else if (hashCode == TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY_HASH)
          {
            return KeyUsage::TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY;
          }
          else if (hashCode == TR31_D1_ASYMMETRIC_KEY_FOR_DATA_ENCRYPTION_HASH)
          {
            return KeyUsage::TR31_D1_ASYMMETRIC_KEY_FOR_DATA_ENCRYPTION;
          }
          else if (hashCode == TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS_HASH)
          {
            return KeyUsage::TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS;
          }
          else if (hashCode == TR31_E1_EMV_MKEY_CONFIDENTIALITY_HASH)
          {
            return KeyUsage::TR31_E1_EMV_MKEY_CONFIDENTIALITY;
          }
          else if (hashCode == TR31_E2_EMV_MKEY_INTEGRITY_HASH)
          {
            return KeyUsage::TR31_E2_EMV_MKEY_INTEGRITY;
          }
          else if (hashCode == TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS_HASH)
          {
            return KeyUsage::TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS;
          }
          else if (hashCode == TR31_E5_EMV_MKEY_CARD_PERSONALIZATION_HASH)
          {
            return KeyUsage::TR31_E5_EMV_MKEY_CARD_PERSONALIZATION;
          }
          else if (hashCode == TR31_E6_EMV_MKEY_OTHER_HASH)
          {
            return KeyUsage::TR31_E6_EMV_MKEY_OTHER;
          }
          else if (hashCode == TR31_K0_KEY_ENCRYPTION_KEY_HASH)
          {
            return KeyUsage::TR31_K0_KEY_ENCRYPTION_KEY;
          }
          else if (hashCode == TR31_K1_KEY_BLOCK_PROTECTION_KEY_HASH)
          {
            return KeyUsage::TR31_K1_KEY_BLOCK_PROTECTION_KEY;
          }
          else if (hashCode == TR31_K3_ASYMMETRIC_KEY_FOR_KEY_AGREEMENT_HASH)
          {
            return KeyUsage::TR31_K3_ASYMMETRIC_KEY_FOR_KEY_AGREEMENT;
          }
          else if (hashCode == TR31_M3_ISO_9797_3_MAC_KEY_HASH)
          {
            return KeyUsage::TR31_M3_ISO_9797_3_MAC_KEY;
          }
          else if (hashCode == TR31_M1_ISO_9797_1_MAC_KEY_HASH)
          {
            return KeyUsage::TR31_M1_ISO_9797_1_MAC_KEY;
          }
          else if (hashCode == TR31_M6_ISO_9797_5_CMAC_KEY_HASH)
          {
            return KeyUsage::TR31_M6_ISO_9797_5_CMAC_KEY;
          }
          else if (hashCode == TR31_M7_HMAC_KEY_HASH)
          {
            return KeyUsage::TR31_M7_HMAC_KEY;
          }
          else if (hashCode == TR31_P0_PIN_ENCRYPTION_KEY_HASH)
          {
            return KeyUsage::TR31_P0_PIN_ENCRYPTION_KEY;
          }
          else if (hashCode == TR31_P1_PIN_GENERATION_KEY_HASH)
          {
            return KeyUsage::TR31_P1_PIN_GENERATION_KEY;
          }
          else if (hashCode == TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE_HASH)
          {
            return KeyUsage::TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE;
          }
          else if (hashCode == TR31_V1_IBM3624_PIN_VERIFICATION_KEY_HASH)
          {
            return KeyUsage::TR31_V1_IBM3624_PIN_VERIFICATION_KEY;
          }
          else if (hashCode == TR31_V2_VISA_PIN_VERIFICATION_KEY_HASH)
          {
            return KeyUsage::TR31_V2_VISA_PIN_VERIFICATION_KEY;
          }
          else if (hashCode == TR31_K2_TR34_ASYMMETRIC_KEY_HASH)
          {
            return KeyUsage::TR31_K2_TR34_ASYMMETRIC_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyUsage>(hashCode);
          }

          return KeyUsage::NOT_SET;
        }

        Aws::String GetNameForKeyUsage(KeyUsage enumValue)
        {
          switch(enumValue)
          {
          case KeyUsage::NOT_SET:
            return {};
          case KeyUsage::TR31_B0_BASE_DERIVATION_KEY:
            return "TR31_B0_BASE_DERIVATION_KEY";
          case KeyUsage::TR31_C0_CARD_VERIFICATION_KEY:
            return "TR31_C0_CARD_VERIFICATION_KEY";
          case KeyUsage::TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY:
            return "TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY";
          case KeyUsage::TR31_D1_ASYMMETRIC_KEY_FOR_DATA_ENCRYPTION:
            return "TR31_D1_ASYMMETRIC_KEY_FOR_DATA_ENCRYPTION";
          case KeyUsage::TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS:
            return "TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS";
          case KeyUsage::TR31_E1_EMV_MKEY_CONFIDENTIALITY:
            return "TR31_E1_EMV_MKEY_CONFIDENTIALITY";
          case KeyUsage::TR31_E2_EMV_MKEY_INTEGRITY:
            return "TR31_E2_EMV_MKEY_INTEGRITY";
          case KeyUsage::TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS:
            return "TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS";
          case KeyUsage::TR31_E5_EMV_MKEY_CARD_PERSONALIZATION:
            return "TR31_E5_EMV_MKEY_CARD_PERSONALIZATION";
          case KeyUsage::TR31_E6_EMV_MKEY_OTHER:
            return "TR31_E6_EMV_MKEY_OTHER";
          case KeyUsage::TR31_K0_KEY_ENCRYPTION_KEY:
            return "TR31_K0_KEY_ENCRYPTION_KEY";
          case KeyUsage::TR31_K1_KEY_BLOCK_PROTECTION_KEY:
            return "TR31_K1_KEY_BLOCK_PROTECTION_KEY";
          case KeyUsage::TR31_K3_ASYMMETRIC_KEY_FOR_KEY_AGREEMENT:
            return "TR31_K3_ASYMMETRIC_KEY_FOR_KEY_AGREEMENT";
          case KeyUsage::TR31_M3_ISO_9797_3_MAC_KEY:
            return "TR31_M3_ISO_9797_3_MAC_KEY";
          case KeyUsage::TR31_M1_ISO_9797_1_MAC_KEY:
            return "TR31_M1_ISO_9797_1_MAC_KEY";
          case KeyUsage::TR31_M6_ISO_9797_5_CMAC_KEY:
            return "TR31_M6_ISO_9797_5_CMAC_KEY";
          case KeyUsage::TR31_M7_HMAC_KEY:
            return "TR31_M7_HMAC_KEY";
          case KeyUsage::TR31_P0_PIN_ENCRYPTION_KEY:
            return "TR31_P0_PIN_ENCRYPTION_KEY";
          case KeyUsage::TR31_P1_PIN_GENERATION_KEY:
            return "TR31_P1_PIN_GENERATION_KEY";
          case KeyUsage::TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE:
            return "TR31_S0_ASYMMETRIC_KEY_FOR_DIGITAL_SIGNATURE";
          case KeyUsage::TR31_V1_IBM3624_PIN_VERIFICATION_KEY:
            return "TR31_V1_IBM3624_PIN_VERIFICATION_KEY";
          case KeyUsage::TR31_V2_VISA_PIN_VERIFICATION_KEY:
            return "TR31_V2_VISA_PIN_VERIFICATION_KEY";
          case KeyUsage::TR31_K2_TR34_ASYMMETRIC_KEY:
            return "TR31_K2_TR34_ASYMMETRIC_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyUsageMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
