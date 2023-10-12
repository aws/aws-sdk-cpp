/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/HashAlgorithm.h>
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
      namespace HashAlgorithmMapper
      {

        static constexpr uint32_t SHA1_HASH = ConstExprHashingUtils::HashString("SHA1");
        static constexpr uint32_t SHA256_HASH = ConstExprHashingUtils::HashString("SHA256");


        HashAlgorithm GetHashAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA1_HASH)
          {
            return HashAlgorithm::SHA1;
          }
          else if (hashCode == SHA256_HASH)
          {
            return HashAlgorithm::SHA256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HashAlgorithm>(hashCode);
          }

          return HashAlgorithm::NOT_SET;
        }

        Aws::String GetNameForHashAlgorithm(HashAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case HashAlgorithm::NOT_SET:
            return {};
          case HashAlgorithm::SHA1:
            return "SHA1";
          case HashAlgorithm::SHA256:
            return "SHA256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HashAlgorithmMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
