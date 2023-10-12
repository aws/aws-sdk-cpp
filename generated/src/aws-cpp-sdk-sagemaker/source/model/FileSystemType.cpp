/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FileSystemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace FileSystemTypeMapper
      {

        static constexpr uint32_t EFS_HASH = ConstExprHashingUtils::HashString("EFS");
        static constexpr uint32_t FSxLustre_HASH = ConstExprHashingUtils::HashString("FSxLustre");


        FileSystemType GetFileSystemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EFS_HASH)
          {
            return FileSystemType::EFS;
          }
          else if (hashCode == FSxLustre_HASH)
          {
            return FileSystemType::FSxLustre;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FileSystemType>(hashCode);
          }

          return FileSystemType::NOT_SET;
        }

        Aws::String GetNameForFileSystemType(FileSystemType enumValue)
        {
          switch(enumValue)
          {
          case FileSystemType::NOT_SET:
            return {};
          case FileSystemType::EFS:
            return "EFS";
          case FileSystemType::FSxLustre:
            return "FSxLustre";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FileSystemTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
