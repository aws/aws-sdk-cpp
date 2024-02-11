/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/FileType.h>
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
      namespace FileTypeMapper
      {

        static const int FASTQ_HASH = HashingUtils::HashString("FASTQ");
        static const int BAM_HASH = HashingUtils::HashString("BAM");
        static const int CRAM_HASH = HashingUtils::HashString("CRAM");
        static const int UBAM_HASH = HashingUtils::HashString("UBAM");


        FileType GetFileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FASTQ_HASH)
          {
            return FileType::FASTQ;
          }
          else if (hashCode == BAM_HASH)
          {
            return FileType::BAM;
          }
          else if (hashCode == CRAM_HASH)
          {
            return FileType::CRAM;
          }
          else if (hashCode == UBAM_HASH)
          {
            return FileType::UBAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileType>(hashCode);
          }

          return FileType::NOT_SET;
        }

        Aws::String GetNameForFileType(FileType enumValue)
        {
          switch(enumValue)
          {
          case FileType::NOT_SET:
            return {};
          case FileType::FASTQ:
            return "FASTQ";
          case FileType::BAM:
            return "BAM";
          case FileType::CRAM:
            return "CRAM";
          case FileType::UBAM:
            return "UBAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
