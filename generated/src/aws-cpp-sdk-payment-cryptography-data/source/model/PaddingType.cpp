/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/PaddingType.h>
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
      namespace PaddingTypeMapper
      {

        static constexpr uint32_t PKCS1_HASH = ConstExprHashingUtils::HashString("PKCS1");
        static constexpr uint32_t OAEP_SHA1_HASH = ConstExprHashingUtils::HashString("OAEP_SHA1");
        static constexpr uint32_t OAEP_SHA256_HASH = ConstExprHashingUtils::HashString("OAEP_SHA256");
        static constexpr uint32_t OAEP_SHA512_HASH = ConstExprHashingUtils::HashString("OAEP_SHA512");


        PaddingType GetPaddingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PKCS1_HASH)
          {
            return PaddingType::PKCS1;
          }
          else if (hashCode == OAEP_SHA1_HASH)
          {
            return PaddingType::OAEP_SHA1;
          }
          else if (hashCode == OAEP_SHA256_HASH)
          {
            return PaddingType::OAEP_SHA256;
          }
          else if (hashCode == OAEP_SHA512_HASH)
          {
            return PaddingType::OAEP_SHA512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaddingType>(hashCode);
          }

          return PaddingType::NOT_SET;
        }

        Aws::String GetNameForPaddingType(PaddingType enumValue)
        {
          switch(enumValue)
          {
          case PaddingType::NOT_SET:
            return {};
          case PaddingType::PKCS1:
            return "PKCS1";
          case PaddingType::OAEP_SHA1:
            return "OAEP_SHA1";
          case PaddingType::OAEP_SHA256:
            return "OAEP_SHA256";
          case PaddingType::OAEP_SHA512:
            return "OAEP_SHA512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaddingTypeMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
