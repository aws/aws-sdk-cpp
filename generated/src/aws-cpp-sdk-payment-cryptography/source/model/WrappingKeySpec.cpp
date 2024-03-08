/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/WrappingKeySpec.h>
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
      namespace WrappingKeySpecMapper
      {

        static const int RSA_OAEP_SHA_256_HASH = HashingUtils::HashString("RSA_OAEP_SHA_256");
        static const int RSA_OAEP_SHA_512_HASH = HashingUtils::HashString("RSA_OAEP_SHA_512");


        WrappingKeySpec GetWrappingKeySpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_OAEP_SHA_256_HASH)
          {
            return WrappingKeySpec::RSA_OAEP_SHA_256;
          }
          else if (hashCode == RSA_OAEP_SHA_512_HASH)
          {
            return WrappingKeySpec::RSA_OAEP_SHA_512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WrappingKeySpec>(hashCode);
          }

          return WrappingKeySpec::NOT_SET;
        }

        Aws::String GetNameForWrappingKeySpec(WrappingKeySpec enumValue)
        {
          switch(enumValue)
          {
          case WrappingKeySpec::NOT_SET:
            return {};
          case WrappingKeySpec::RSA_OAEP_SHA_256:
            return "RSA_OAEP_SHA_256";
          case WrappingKeySpec::RSA_OAEP_SHA_512:
            return "RSA_OAEP_SHA_512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WrappingKeySpecMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
