/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace ChecksumAlgorithmMapper
      {

        static constexpr uint32_t CRC32_HASH = ConstExprHashingUtils::HashString("CRC32");
        static constexpr uint32_t CRC32C_HASH = ConstExprHashingUtils::HashString("CRC32C");
        static constexpr uint32_t SHA1_HASH = ConstExprHashingUtils::HashString("SHA1");
        static constexpr uint32_t SHA256_HASH = ConstExprHashingUtils::HashString("SHA256");


        ChecksumAlgorithm GetChecksumAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRC32_HASH)
          {
            return ChecksumAlgorithm::CRC32;
          }
          else if (hashCode == CRC32C_HASH)
          {
            return ChecksumAlgorithm::CRC32C;
          }
          else if (hashCode == SHA1_HASH)
          {
            return ChecksumAlgorithm::SHA1;
          }
          else if (hashCode == SHA256_HASH)
          {
            return ChecksumAlgorithm::SHA256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChecksumAlgorithm>(hashCode);
          }

          return ChecksumAlgorithm::NOT_SET;
        }

        Aws::String GetNameForChecksumAlgorithm(ChecksumAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case ChecksumAlgorithm::NOT_SET:
            return {};
          case ChecksumAlgorithm::CRC32:
            return "CRC32";
          case ChecksumAlgorithm::CRC32C:
            return "CRC32C";
          case ChecksumAlgorithm::SHA1:
            return "SHA1";
          case ChecksumAlgorithm::SHA256:
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

      } // namespace ChecksumAlgorithmMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
