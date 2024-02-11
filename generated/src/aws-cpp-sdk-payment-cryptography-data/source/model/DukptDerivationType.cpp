/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/DukptDerivationType.h>
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
      namespace DukptDerivationTypeMapper
      {

        static const int TDES_2KEY_HASH = HashingUtils::HashString("TDES_2KEY");
        static const int TDES_3KEY_HASH = HashingUtils::HashString("TDES_3KEY");
        static const int AES_128_HASH = HashingUtils::HashString("AES_128");
        static const int AES_192_HASH = HashingUtils::HashString("AES_192");
        static const int AES_256_HASH = HashingUtils::HashString("AES_256");


        DukptDerivationType GetDukptDerivationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TDES_2KEY_HASH)
          {
            return DukptDerivationType::TDES_2KEY;
          }
          else if (hashCode == TDES_3KEY_HASH)
          {
            return DukptDerivationType::TDES_3KEY;
          }
          else if (hashCode == AES_128_HASH)
          {
            return DukptDerivationType::AES_128;
          }
          else if (hashCode == AES_192_HASH)
          {
            return DukptDerivationType::AES_192;
          }
          else if (hashCode == AES_256_HASH)
          {
            return DukptDerivationType::AES_256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DukptDerivationType>(hashCode);
          }

          return DukptDerivationType::NOT_SET;
        }

        Aws::String GetNameForDukptDerivationType(DukptDerivationType enumValue)
        {
          switch(enumValue)
          {
          case DukptDerivationType::NOT_SET:
            return {};
          case DukptDerivationType::TDES_2KEY:
            return "TDES_2KEY";
          case DukptDerivationType::TDES_3KEY:
            return "TDES_3KEY";
          case DukptDerivationType::AES_128:
            return "AES_128";
          case DukptDerivationType::AES_192:
            return "AES_192";
          case DukptDerivationType::AES_256:
            return "AES_256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DukptDerivationTypeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
