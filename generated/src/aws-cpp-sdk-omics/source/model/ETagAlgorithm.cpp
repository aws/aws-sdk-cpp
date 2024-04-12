/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ETagAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ETagAlgorithmMapper
      {

        static const int FASTQ_MD5up_HASH = HashingUtils::HashString("FASTQ_MD5up");
        static const int BAM_MD5up_HASH = HashingUtils::HashString("BAM_MD5up");
        static const int CRAM_MD5up_HASH = HashingUtils::HashString("CRAM_MD5up");
        static const int FASTQ_SHA256up_HASH = HashingUtils::HashString("FASTQ_SHA256up");
        static const int BAM_SHA256up_HASH = HashingUtils::HashString("BAM_SHA256up");
        static const int CRAM_SHA256up_HASH = HashingUtils::HashString("CRAM_SHA256up");
        static const int FASTQ_SHA512up_HASH = HashingUtils::HashString("FASTQ_SHA512up");
        static const int BAM_SHA512up_HASH = HashingUtils::HashString("BAM_SHA512up");
        static const int CRAM_SHA512up_HASH = HashingUtils::HashString("CRAM_SHA512up");


        ETagAlgorithm GetETagAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FASTQ_MD5up_HASH)
          {
            return ETagAlgorithm::FASTQ_MD5up;
          }
          else if (hashCode == BAM_MD5up_HASH)
          {
            return ETagAlgorithm::BAM_MD5up;
          }
          else if (hashCode == CRAM_MD5up_HASH)
          {
            return ETagAlgorithm::CRAM_MD5up;
          }
          else if (hashCode == FASTQ_SHA256up_HASH)
          {
            return ETagAlgorithm::FASTQ_SHA256up;
          }
          else if (hashCode == BAM_SHA256up_HASH)
          {
            return ETagAlgorithm::BAM_SHA256up;
          }
          else if (hashCode == CRAM_SHA256up_HASH)
          {
            return ETagAlgorithm::CRAM_SHA256up;
          }
          else if (hashCode == FASTQ_SHA512up_HASH)
          {
            return ETagAlgorithm::FASTQ_SHA512up;
          }
          else if (hashCode == BAM_SHA512up_HASH)
          {
            return ETagAlgorithm::BAM_SHA512up;
          }
          else if (hashCode == CRAM_SHA512up_HASH)
          {
            return ETagAlgorithm::CRAM_SHA512up;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ETagAlgorithm>(hashCode);
          }

          return ETagAlgorithm::NOT_SET;
        }

        Aws::String GetNameForETagAlgorithm(ETagAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case ETagAlgorithm::NOT_SET:
            return {};
          case ETagAlgorithm::FASTQ_MD5up:
            return "FASTQ_MD5up";
          case ETagAlgorithm::BAM_MD5up:
            return "BAM_MD5up";
          case ETagAlgorithm::CRAM_MD5up:
            return "CRAM_MD5up";
          case ETagAlgorithm::FASTQ_SHA256up:
            return "FASTQ_SHA256up";
          case ETagAlgorithm::BAM_SHA256up:
            return "BAM_SHA256up";
          case ETagAlgorithm::CRAM_SHA256up:
            return "CRAM_SHA256up";
          case ETagAlgorithm::FASTQ_SHA512up:
            return "FASTQ_SHA512up";
          case ETagAlgorithm::BAM_SHA512up:
            return "BAM_SHA512up";
          case ETagAlgorithm::CRAM_SHA512up:
            return "CRAM_SHA512up";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ETagAlgorithmMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
