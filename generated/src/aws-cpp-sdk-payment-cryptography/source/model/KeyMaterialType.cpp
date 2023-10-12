/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyMaterialType.h>
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
      namespace KeyMaterialTypeMapper
      {

        static constexpr uint32_t TR34_KEY_BLOCK_HASH = ConstExprHashingUtils::HashString("TR34_KEY_BLOCK");
        static constexpr uint32_t TR31_KEY_BLOCK_HASH = ConstExprHashingUtils::HashString("TR31_KEY_BLOCK");
        static constexpr uint32_t ROOT_PUBLIC_KEY_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("ROOT_PUBLIC_KEY_CERTIFICATE");
        static constexpr uint32_t TRUSTED_PUBLIC_KEY_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("TRUSTED_PUBLIC_KEY_CERTIFICATE");


        KeyMaterialType GetKeyMaterialTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TR34_KEY_BLOCK_HASH)
          {
            return KeyMaterialType::TR34_KEY_BLOCK;
          }
          else if (hashCode == TR31_KEY_BLOCK_HASH)
          {
            return KeyMaterialType::TR31_KEY_BLOCK;
          }
          else if (hashCode == ROOT_PUBLIC_KEY_CERTIFICATE_HASH)
          {
            return KeyMaterialType::ROOT_PUBLIC_KEY_CERTIFICATE;
          }
          else if (hashCode == TRUSTED_PUBLIC_KEY_CERTIFICATE_HASH)
          {
            return KeyMaterialType::TRUSTED_PUBLIC_KEY_CERTIFICATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyMaterialType>(hashCode);
          }

          return KeyMaterialType::NOT_SET;
        }

        Aws::String GetNameForKeyMaterialType(KeyMaterialType enumValue)
        {
          switch(enumValue)
          {
          case KeyMaterialType::NOT_SET:
            return {};
          case KeyMaterialType::TR34_KEY_BLOCK:
            return "TR34_KEY_BLOCK";
          case KeyMaterialType::TR31_KEY_BLOCK:
            return "TR31_KEY_BLOCK";
          case KeyMaterialType::ROOT_PUBLIC_KEY_CERTIFICATE:
            return "ROOT_PUBLIC_KEY_CERTIFICATE";
          case KeyMaterialType::TRUSTED_PUBLIC_KEY_CERTIFICATE:
            return "TRUSTED_PUBLIC_KEY_CERTIFICATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyMaterialTypeMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
