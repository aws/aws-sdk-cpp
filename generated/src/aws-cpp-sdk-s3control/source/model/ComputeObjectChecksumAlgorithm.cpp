/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ComputeObjectChecksumAlgorithm.h>
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
      namespace ComputeObjectChecksumAlgorithmMapper
      {

        static const int CRC32_HASH = HashingUtils::HashString("CRC32");
        static const int CRC32C_HASH = HashingUtils::HashString("CRC32C");
        static const int CRC64NVME_HASH = HashingUtils::HashString("CRC64NVME");
        static const int MD5_HASH = HashingUtils::HashString("MD5");
        static const int SHA1_HASH = HashingUtils::HashString("SHA1");
        static const int SHA256_HASH = HashingUtils::HashString("SHA256");


        ComputeObjectChecksumAlgorithm GetComputeObjectChecksumAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRC32_HASH)
          {
            return ComputeObjectChecksumAlgorithm::CRC32;
          }
          else if (hashCode == CRC32C_HASH)
          {
            return ComputeObjectChecksumAlgorithm::CRC32C;
          }
          else if (hashCode == CRC64NVME_HASH)
          {
            return ComputeObjectChecksumAlgorithm::CRC64NVME;
          }
          else if (hashCode == MD5_HASH)
          {
            return ComputeObjectChecksumAlgorithm::MD5;
          }
          else if (hashCode == SHA1_HASH)
          {
            return ComputeObjectChecksumAlgorithm::SHA1;
          }
          else if (hashCode == SHA256_HASH)
          {
            return ComputeObjectChecksumAlgorithm::SHA256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeObjectChecksumAlgorithm>(hashCode);
          }

          return ComputeObjectChecksumAlgorithm::NOT_SET;
        }

        Aws::String GetNameForComputeObjectChecksumAlgorithm(ComputeObjectChecksumAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case ComputeObjectChecksumAlgorithm::NOT_SET:
            return {};
          case ComputeObjectChecksumAlgorithm::CRC32:
            return "CRC32";
          case ComputeObjectChecksumAlgorithm::CRC32C:
            return "CRC32C";
          case ComputeObjectChecksumAlgorithm::CRC64NVME:
            return "CRC64NVME";
          case ComputeObjectChecksumAlgorithm::MD5:
            return "MD5";
          case ComputeObjectChecksumAlgorithm::SHA1:
            return "SHA1";
          case ComputeObjectChecksumAlgorithm::SHA256:
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

      } // namespace ComputeObjectChecksumAlgorithmMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
