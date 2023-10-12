/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLS3DataType.h>
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
      namespace AutoMLS3DataTypeMapper
      {

        static constexpr uint32_t ManifestFile_HASH = ConstExprHashingUtils::HashString("ManifestFile");
        static constexpr uint32_t S3Prefix_HASH = ConstExprHashingUtils::HashString("S3Prefix");
        static constexpr uint32_t AugmentedManifestFile_HASH = ConstExprHashingUtils::HashString("AugmentedManifestFile");


        AutoMLS3DataType GetAutoMLS3DataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ManifestFile_HASH)
          {
            return AutoMLS3DataType::ManifestFile;
          }
          else if (hashCode == S3Prefix_HASH)
          {
            return AutoMLS3DataType::S3Prefix;
          }
          else if (hashCode == AugmentedManifestFile_HASH)
          {
            return AutoMLS3DataType::AugmentedManifestFile;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLS3DataType>(hashCode);
          }

          return AutoMLS3DataType::NOT_SET;
        }

        Aws::String GetNameForAutoMLS3DataType(AutoMLS3DataType enumValue)
        {
          switch(enumValue)
          {
          case AutoMLS3DataType::NOT_SET:
            return {};
          case AutoMLS3DataType::ManifestFile:
            return "ManifestFile";
          case AutoMLS3DataType::S3Prefix:
            return "S3Prefix";
          case AutoMLS3DataType::AugmentedManifestFile:
            return "AugmentedManifestFile";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLS3DataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
