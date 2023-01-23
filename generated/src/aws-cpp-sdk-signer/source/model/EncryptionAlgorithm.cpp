/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/EncryptionAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace EncryptionAlgorithmMapper
      {

        static const int RSA_HASH = HashingUtils::HashString("RSA");
        static const int ECDSA_HASH = HashingUtils::HashString("ECDSA");


        EncryptionAlgorithm GetEncryptionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSA_HASH)
          {
            return EncryptionAlgorithm::RSA;
          }
          else if (hashCode == ECDSA_HASH)
          {
            return EncryptionAlgorithm::ECDSA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionAlgorithm>(hashCode);
          }

          return EncryptionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForEncryptionAlgorithm(EncryptionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case EncryptionAlgorithm::RSA:
            return "RSA";
          case EncryptionAlgorithm::ECDSA:
            return "ECDSA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionAlgorithmMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
