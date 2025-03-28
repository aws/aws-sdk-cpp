/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/DeriveKeyUsage.h>
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
      namespace DeriveKeyUsageMapper
      {

        static const int TR31_B0_BASE_DERIVATION_KEY_HASH = HashingUtils::HashString("TR31_B0_BASE_DERIVATION_KEY");
        static const int TR31_C0_CARD_VERIFICATION_KEY_HASH = HashingUtils::HashString("TR31_C0_CARD_VERIFICATION_KEY");
        static const int TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY_HASH = HashingUtils::HashString("TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY");
        static const int TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS_HASH = HashingUtils::HashString("TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS");
        static const int TR31_E1_EMV_MKEY_CONFIDENTIALITY_HASH = HashingUtils::HashString("TR31_E1_EMV_MKEY_CONFIDENTIALITY");
        static const int TR31_E2_EMV_MKEY_INTEGRITY_HASH = HashingUtils::HashString("TR31_E2_EMV_MKEY_INTEGRITY");
        static const int TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS_HASH = HashingUtils::HashString("TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS");
        static const int TR31_E5_EMV_MKEY_CARD_PERSONALIZATION_HASH = HashingUtils::HashString("TR31_E5_EMV_MKEY_CARD_PERSONALIZATION");
        static const int TR31_E6_EMV_MKEY_OTHER_HASH = HashingUtils::HashString("TR31_E6_EMV_MKEY_OTHER");
        static const int TR31_K0_KEY_ENCRYPTION_KEY_HASH = HashingUtils::HashString("TR31_K0_KEY_ENCRYPTION_KEY");
        static const int TR31_K1_KEY_BLOCK_PROTECTION_KEY_HASH = HashingUtils::HashString("TR31_K1_KEY_BLOCK_PROTECTION_KEY");
        static const int TR31_M3_ISO_9797_3_MAC_KEY_HASH = HashingUtils::HashString("TR31_M3_ISO_9797_3_MAC_KEY");
        static const int TR31_M1_ISO_9797_1_MAC_KEY_HASH = HashingUtils::HashString("TR31_M1_ISO_9797_1_MAC_KEY");
        static const int TR31_M6_ISO_9797_5_CMAC_KEY_HASH = HashingUtils::HashString("TR31_M6_ISO_9797_5_CMAC_KEY");
        static const int TR31_M7_HMAC_KEY_HASH = HashingUtils::HashString("TR31_M7_HMAC_KEY");
        static const int TR31_P0_PIN_ENCRYPTION_KEY_HASH = HashingUtils::HashString("TR31_P0_PIN_ENCRYPTION_KEY");
        static const int TR31_P1_PIN_GENERATION_KEY_HASH = HashingUtils::HashString("TR31_P1_PIN_GENERATION_KEY");
        static const int TR31_V1_IBM3624_PIN_VERIFICATION_KEY_HASH = HashingUtils::HashString("TR31_V1_IBM3624_PIN_VERIFICATION_KEY");
        static const int TR31_V2_VISA_PIN_VERIFICATION_KEY_HASH = HashingUtils::HashString("TR31_V2_VISA_PIN_VERIFICATION_KEY");


        DeriveKeyUsage GetDeriveKeyUsageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TR31_B0_BASE_DERIVATION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_B0_BASE_DERIVATION_KEY;
          }
          else if (hashCode == TR31_C0_CARD_VERIFICATION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_C0_CARD_VERIFICATION_KEY;
          }
          else if (hashCode == TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY;
          }
          else if (hashCode == TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS_HASH)
          {
            return DeriveKeyUsage::TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS;
          }
          else if (hashCode == TR31_E1_EMV_MKEY_CONFIDENTIALITY_HASH)
          {
            return DeriveKeyUsage::TR31_E1_EMV_MKEY_CONFIDENTIALITY;
          }
          else if (hashCode == TR31_E2_EMV_MKEY_INTEGRITY_HASH)
          {
            return DeriveKeyUsage::TR31_E2_EMV_MKEY_INTEGRITY;
          }
          else if (hashCode == TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS_HASH)
          {
            return DeriveKeyUsage::TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS;
          }
          else if (hashCode == TR31_E5_EMV_MKEY_CARD_PERSONALIZATION_HASH)
          {
            return DeriveKeyUsage::TR31_E5_EMV_MKEY_CARD_PERSONALIZATION;
          }
          else if (hashCode == TR31_E6_EMV_MKEY_OTHER_HASH)
          {
            return DeriveKeyUsage::TR31_E6_EMV_MKEY_OTHER;
          }
          else if (hashCode == TR31_K0_KEY_ENCRYPTION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_K0_KEY_ENCRYPTION_KEY;
          }
          else if (hashCode == TR31_K1_KEY_BLOCK_PROTECTION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_K1_KEY_BLOCK_PROTECTION_KEY;
          }
          else if (hashCode == TR31_M3_ISO_9797_3_MAC_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_M3_ISO_9797_3_MAC_KEY;
          }
          else if (hashCode == TR31_M1_ISO_9797_1_MAC_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_M1_ISO_9797_1_MAC_KEY;
          }
          else if (hashCode == TR31_M6_ISO_9797_5_CMAC_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_M6_ISO_9797_5_CMAC_KEY;
          }
          else if (hashCode == TR31_M7_HMAC_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_M7_HMAC_KEY;
          }
          else if (hashCode == TR31_P0_PIN_ENCRYPTION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_P0_PIN_ENCRYPTION_KEY;
          }
          else if (hashCode == TR31_P1_PIN_GENERATION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_P1_PIN_GENERATION_KEY;
          }
          else if (hashCode == TR31_V1_IBM3624_PIN_VERIFICATION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_V1_IBM3624_PIN_VERIFICATION_KEY;
          }
          else if (hashCode == TR31_V2_VISA_PIN_VERIFICATION_KEY_HASH)
          {
            return DeriveKeyUsage::TR31_V2_VISA_PIN_VERIFICATION_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeriveKeyUsage>(hashCode);
          }

          return DeriveKeyUsage::NOT_SET;
        }

        Aws::String GetNameForDeriveKeyUsage(DeriveKeyUsage enumValue)
        {
          switch(enumValue)
          {
          case DeriveKeyUsage::NOT_SET:
            return {};
          case DeriveKeyUsage::TR31_B0_BASE_DERIVATION_KEY:
            return "TR31_B0_BASE_DERIVATION_KEY";
          case DeriveKeyUsage::TR31_C0_CARD_VERIFICATION_KEY:
            return "TR31_C0_CARD_VERIFICATION_KEY";
          case DeriveKeyUsage::TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY:
            return "TR31_D0_SYMMETRIC_DATA_ENCRYPTION_KEY";
          case DeriveKeyUsage::TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS:
            return "TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS";
          case DeriveKeyUsage::TR31_E1_EMV_MKEY_CONFIDENTIALITY:
            return "TR31_E1_EMV_MKEY_CONFIDENTIALITY";
          case DeriveKeyUsage::TR31_E2_EMV_MKEY_INTEGRITY:
            return "TR31_E2_EMV_MKEY_INTEGRITY";
          case DeriveKeyUsage::TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS:
            return "TR31_E4_EMV_MKEY_DYNAMIC_NUMBERS";
          case DeriveKeyUsage::TR31_E5_EMV_MKEY_CARD_PERSONALIZATION:
            return "TR31_E5_EMV_MKEY_CARD_PERSONALIZATION";
          case DeriveKeyUsage::TR31_E6_EMV_MKEY_OTHER:
            return "TR31_E6_EMV_MKEY_OTHER";
          case DeriveKeyUsage::TR31_K0_KEY_ENCRYPTION_KEY:
            return "TR31_K0_KEY_ENCRYPTION_KEY";
          case DeriveKeyUsage::TR31_K1_KEY_BLOCK_PROTECTION_KEY:
            return "TR31_K1_KEY_BLOCK_PROTECTION_KEY";
          case DeriveKeyUsage::TR31_M3_ISO_9797_3_MAC_KEY:
            return "TR31_M3_ISO_9797_3_MAC_KEY";
          case DeriveKeyUsage::TR31_M1_ISO_9797_1_MAC_KEY:
            return "TR31_M1_ISO_9797_1_MAC_KEY";
          case DeriveKeyUsage::TR31_M6_ISO_9797_5_CMAC_KEY:
            return "TR31_M6_ISO_9797_5_CMAC_KEY";
          case DeriveKeyUsage::TR31_M7_HMAC_KEY:
            return "TR31_M7_HMAC_KEY";
          case DeriveKeyUsage::TR31_P0_PIN_ENCRYPTION_KEY:
            return "TR31_P0_PIN_ENCRYPTION_KEY";
          case DeriveKeyUsage::TR31_P1_PIN_GENERATION_KEY:
            return "TR31_P1_PIN_GENERATION_KEY";
          case DeriveKeyUsage::TR31_V1_IBM3624_PIN_VERIFICATION_KEY:
            return "TR31_V1_IBM3624_PIN_VERIFICATION_KEY";
          case DeriveKeyUsage::TR31_V2_VISA_PIN_VERIFICATION_KEY:
            return "TR31_V2_VISA_PIN_VERIFICATION_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeriveKeyUsageMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
