/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/WrappedKeyMaterialFormat.h>
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
      namespace WrappedKeyMaterialFormatMapper
      {

        static const int KEY_CRYPTOGRAM_HASH = HashingUtils::HashString("KEY_CRYPTOGRAM");
        static const int TR31_KEY_BLOCK_HASH = HashingUtils::HashString("TR31_KEY_BLOCK");
        static const int TR34_KEY_BLOCK_HASH = HashingUtils::HashString("TR34_KEY_BLOCK");


        WrappedKeyMaterialFormat GetWrappedKeyMaterialFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEY_CRYPTOGRAM_HASH)
          {
            return WrappedKeyMaterialFormat::KEY_CRYPTOGRAM;
          }
          else if (hashCode == TR31_KEY_BLOCK_HASH)
          {
            return WrappedKeyMaterialFormat::TR31_KEY_BLOCK;
          }
          else if (hashCode == TR34_KEY_BLOCK_HASH)
          {
            return WrappedKeyMaterialFormat::TR34_KEY_BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WrappedKeyMaterialFormat>(hashCode);
          }

          return WrappedKeyMaterialFormat::NOT_SET;
        }

        Aws::String GetNameForWrappedKeyMaterialFormat(WrappedKeyMaterialFormat enumValue)
        {
          switch(enumValue)
          {
          case WrappedKeyMaterialFormat::NOT_SET:
            return {};
          case WrappedKeyMaterialFormat::KEY_CRYPTOGRAM:
            return "KEY_CRYPTOGRAM";
          case WrappedKeyMaterialFormat::TR31_KEY_BLOCK:
            return "TR31_KEY_BLOCK";
          case WrappedKeyMaterialFormat::TR34_KEY_BLOCK:
            return "TR34_KEY_BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WrappedKeyMaterialFormatMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
