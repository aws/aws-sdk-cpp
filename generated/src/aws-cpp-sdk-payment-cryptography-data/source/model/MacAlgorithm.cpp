/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/MacAlgorithm.h>
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
      namespace MacAlgorithmMapper
      {

        static const int ISO9797_ALGORITHM1_HASH = HashingUtils::HashString("ISO9797_ALGORITHM1");
        static const int ISO9797_ALGORITHM3_HASH = HashingUtils::HashString("ISO9797_ALGORITHM3");
        static const int CMAC_HASH = HashingUtils::HashString("CMAC");
        static const int HMAC_SHA224_HASH = HashingUtils::HashString("HMAC_SHA224");
        static const int HMAC_SHA256_HASH = HashingUtils::HashString("HMAC_SHA256");
        static const int HMAC_SHA384_HASH = HashingUtils::HashString("HMAC_SHA384");
        static const int HMAC_SHA512_HASH = HashingUtils::HashString("HMAC_SHA512");


        MacAlgorithm GetMacAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ISO9797_ALGORITHM1_HASH)
          {
            return MacAlgorithm::ISO9797_ALGORITHM1;
          }
          else if (hashCode == ISO9797_ALGORITHM3_HASH)
          {
            return MacAlgorithm::ISO9797_ALGORITHM3;
          }
          else if (hashCode == CMAC_HASH)
          {
            return MacAlgorithm::CMAC;
          }
          else if (hashCode == HMAC_SHA224_HASH)
          {
            return MacAlgorithm::HMAC_SHA224;
          }
          else if (hashCode == HMAC_SHA256_HASH)
          {
            return MacAlgorithm::HMAC_SHA256;
          }
          else if (hashCode == HMAC_SHA384_HASH)
          {
            return MacAlgorithm::HMAC_SHA384;
          }
          else if (hashCode == HMAC_SHA512_HASH)
          {
            return MacAlgorithm::HMAC_SHA512;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MacAlgorithm>(hashCode);
          }

          return MacAlgorithm::NOT_SET;
        }

        Aws::String GetNameForMacAlgorithm(MacAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case MacAlgorithm::NOT_SET:
            return {};
          case MacAlgorithm::ISO9797_ALGORITHM1:
            return "ISO9797_ALGORITHM1";
          case MacAlgorithm::ISO9797_ALGORITHM3:
            return "ISO9797_ALGORITHM3";
          case MacAlgorithm::CMAC:
            return "CMAC";
          case MacAlgorithm::HMAC_SHA224:
            return "HMAC_SHA224";
          case MacAlgorithm::HMAC_SHA256:
            return "HMAC_SHA256";
          case MacAlgorithm::HMAC_SHA384:
            return "HMAC_SHA384";
          case MacAlgorithm::HMAC_SHA512:
            return "HMAC_SHA512";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MacAlgorithmMapper
    } // namespace Model
  } // namespace PaymentCryptographyData
} // namespace Aws
