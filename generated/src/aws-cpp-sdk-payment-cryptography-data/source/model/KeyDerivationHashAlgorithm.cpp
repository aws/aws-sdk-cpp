/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/KeyDerivationHashAlgorithm.h>
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
      namespace KeyDerivationHashAlgorithmMapper
      {

        static const int SHA_256_HASH = HashingUtils::HashString("SHA_256");
        static const int SHA_384_HASH = HashingUtils::HashString("SHA_384");
        static const int SHA_512_HASH = HashingUtils::HashString("SHA_512");


        KeyDerivationHashAlgorithm GetKeyDerivationHashAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA_256_HASH)
          {
            return KeyDerivationHashAlgorithm::SHA_256;
          }
          else if (hashCode == SHA_384_HASH)
          {
            return KeyDerivationHashAlgorithm::SHA_384;
          }
          else if (hashCode == SHA_512_HASH)
          {
            return KeyDerivationHashAlgorithm::SHA_512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyDerivationHashAlgorithm>(hashCode);
          }

          return KeyDerivationHashAlgorithm::NOT_SET;
        }

        Aws::String GetNameForKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case KeyDerivationHashAlgorithm::NOT_SET:
            return {};
          case KeyDerivationHashAlgorithm::SHA_256:
            return "SHA_256";
          case KeyDerivationHashAlgorithm::SHA_384:
            return "SHA_384";
          case KeyDerivationHashAlgorithm::SHA_512:
            return "SHA_512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyDerivationHashAlgorithmMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
