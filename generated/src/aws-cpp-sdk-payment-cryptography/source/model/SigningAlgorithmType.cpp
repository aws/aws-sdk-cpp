/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/SigningAlgorithmType.h>
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
      namespace SigningAlgorithmTypeMapper
      {

        static const int SHA224_HASH = HashingUtils::HashString("SHA224");
        static const int SHA256_HASH = HashingUtils::HashString("SHA256");
        static const int SHA384_HASH = HashingUtils::HashString("SHA384");
        static const int SHA512_HASH = HashingUtils::HashString("SHA512");


        SigningAlgorithmType GetSigningAlgorithmTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA224_HASH)
          {
            return SigningAlgorithmType::SHA224;
          }
          else if (hashCode == SHA256_HASH)
          {
            return SigningAlgorithmType::SHA256;
          }
          else if (hashCode == SHA384_HASH)
          {
            return SigningAlgorithmType::SHA384;
          }
          else if (hashCode == SHA512_HASH)
          {
            return SigningAlgorithmType::SHA512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SigningAlgorithmType>(hashCode);
          }

          return SigningAlgorithmType::NOT_SET;
        }

        Aws::String GetNameForSigningAlgorithmType(SigningAlgorithmType enumValue)
        {
          switch(enumValue)
          {
          case SigningAlgorithmType::NOT_SET:
            return {};
          case SigningAlgorithmType::SHA224:
            return "SHA224";
          case SigningAlgorithmType::SHA256:
            return "SHA256";
          case SigningAlgorithmType::SHA384:
            return "SHA384";
          case SigningAlgorithmType::SHA512:
            return "SHA512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SigningAlgorithmTypeMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
