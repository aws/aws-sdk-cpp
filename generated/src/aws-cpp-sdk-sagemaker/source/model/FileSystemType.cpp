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

        static const int EFS_HASH = HashingUtils::HashString("EFS");
        static const int FSxLustre_HASH = HashingUtils::HashString("FSxLustre");


        FileSystemType GetFileSystemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
