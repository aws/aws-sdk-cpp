/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3ChecksumAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace S3ChecksumAlgorithmMapper
      {

        static const int CRC32_HASH = HashingUtils::HashString("CRC32");
        static const int CRC32C_HASH = HashingUtils::HashString("CRC32C");
        static const int SHA1_HASH = HashingUtils::HashString("SHA1");
        static const int SHA256_HASH = HashingUtils::HashString("SHA256");


        S3ChecksumAlgorithm GetS3ChecksumAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRC32_HASH)
          {
            return S3ChecksumAlgorithm::CRC32;
          }
          else if (hashCode == CRC32C_HASH)
          {
            return S3ChecksumAlgorithm::CRC32C;
          }
          else if (hashCode == SHA1_HASH)
          {
            return S3ChecksumAlgorithm::SHA1;
          }
          else if (hashCode == SHA256_HASH)
          {
            return S3ChecksumAlgorithm::SHA256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ChecksumAlgorithm>(hashCode);
          }

          return S3ChecksumAlgorithm::NOT_SET;
        }

        Aws::String GetNameForS3ChecksumAlgorithm(S3ChecksumAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case S3ChecksumAlgorithm::NOT_SET:
            return {};
          case S3ChecksumAlgorithm::CRC32:
            return "CRC32";
          case S3ChecksumAlgorithm::CRC32C:
            return "CRC32C";
          case S3ChecksumAlgorithm::SHA1:
            return "SHA1";
          case S3ChecksumAlgorithm::SHA256:
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

      } // namespace S3ChecksumAlgorithmMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
