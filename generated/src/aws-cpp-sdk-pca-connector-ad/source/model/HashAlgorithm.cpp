/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/HashAlgorithm.h>
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
      namespace HashAlgorithmMapper
      {

        static constexpr uint32_t SHA256_HASH = ConstExprHashingUtils::HashString("SHA256");
        static constexpr uint32_t SHA384_HASH = ConstExprHashingUtils::HashString("SHA384");
        static constexpr uint32_t SHA512_HASH = ConstExprHashingUtils::HashString("SHA512");


        HashAlgorithm GetHashAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA256_HASH)
          {
            return HashAlgorithm::SHA256;
          }
          else if (hashCode == SHA384_HASH)
          {
            return HashAlgorithm::SHA384;
          }
          else if (hashCode == SHA512_HASH)
          {
            return HashAlgorithm::SHA512;
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
          case HashAlgorithm::SHA256:
            return "SHA256";
          case HashAlgorithm::SHA384:
            return "SHA384";
          case HashAlgorithm::SHA512:
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

      } // namespace HashAlgorithmMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
