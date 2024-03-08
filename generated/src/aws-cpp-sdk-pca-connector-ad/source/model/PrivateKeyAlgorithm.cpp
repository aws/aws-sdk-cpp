/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/PrivateKeyAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace PrivateKeyAlgorithmMapper
      {

        static const int RSA_HASH = HashingUtils::HashString("RSA");
        static const int ECDH_P256_HASH = HashingUtils::HashString("ECDH_P256");
        static const int ECDH_P384_HASH = HashingUtils::HashString("ECDH_P384");
        static const int ECDH_P521_HASH = HashingUtils::HashString("ECDH_P521");


        PrivateKeyAlgorithm GetPrivateKeyAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_HASH)
          {
            return PrivateKeyAlgorithm::RSA;
          }
          else if (hashCode == ECDH_P256_HASH)
          {
            return PrivateKeyAlgorithm::ECDH_P256;
          }
          else if (hashCode == ECDH_P384_HASH)
          {
            return PrivateKeyAlgorithm::ECDH_P384;
          }
          else if (hashCode == ECDH_P521_HASH)
          {
            return PrivateKeyAlgorithm::ECDH_P521;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrivateKeyAlgorithm>(hashCode);
          }

          return PrivateKeyAlgorithm::NOT_SET;
        }

        Aws::String GetNameForPrivateKeyAlgorithm(PrivateKeyAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case PrivateKeyAlgorithm::NOT_SET:
            return {};
          case PrivateKeyAlgorithm::RSA:
            return "RSA";
          case PrivateKeyAlgorithm::ECDH_P256:
            return "ECDH_P256";
          case PrivateKeyAlgorithm::ECDH_P384:
            return "ECDH_P384";
          case PrivateKeyAlgorithm::ECDH_P521:
            return "ECDH_P521";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivateKeyAlgorithmMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
