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

        static const int TR34_KEY_BLOCK_HASH = HashingUtils::HashString("TR34_KEY_BLOCK");
        static const int TR31_KEY_BLOCK_HASH = HashingUtils::HashString("TR31_KEY_BLOCK");
        static const int ROOT_PUBLIC_KEY_CERTIFICATE_HASH = HashingUtils::HashString("ROOT_PUBLIC_KEY_CERTIFICATE");
        static const int TRUSTED_PUBLIC_KEY_CERTIFICATE_HASH = HashingUtils::HashString("TRUSTED_PUBLIC_KEY_CERTIFICATE");
        static const int KEY_CRYPTOGRAM_HASH = HashingUtils::HashString("KEY_CRYPTOGRAM");


        KeyMaterialType GetKeyMaterialTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == KEY_CRYPTOGRAM_HASH)
          {
            return KeyMaterialType::KEY_CRYPTOGRAM;
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
          case KeyMaterialType::KEY_CRYPTOGRAM:
            return "KEY_CRYPTOGRAM";
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
