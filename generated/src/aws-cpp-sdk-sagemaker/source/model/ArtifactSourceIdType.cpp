/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ArtifactSourceIdType.h>
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
      namespace ArtifactSourceIdTypeMapper
      {

        static const int MD5Hash_HASH = HashingUtils::HashString("MD5Hash");
        static const int S3ETag_HASH = HashingUtils::HashString("S3ETag");
        static const int S3Version_HASH = HashingUtils::HashString("S3Version");
        static const int Custom_HASH = HashingUtils::HashString("Custom");


        ArtifactSourceIdType GetArtifactSourceIdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MD5Hash_HASH)
          {
            return ArtifactSourceIdType::MD5Hash;
          }
          else if (hashCode == S3ETag_HASH)
          {
            return ArtifactSourceIdType::S3ETag;
          }
          else if (hashCode == S3Version_HASH)
          {
            return ArtifactSourceIdType::S3Version;
          }
          else if (hashCode == Custom_HASH)
          {
            return ArtifactSourceIdType::Custom;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArtifactSourceIdType>(hashCode);
          }

          return ArtifactSourceIdType::NOT_SET;
        }

        Aws::String GetNameForArtifactSourceIdType(ArtifactSourceIdType enumValue)
        {
          switch(enumValue)
          {
          case ArtifactSourceIdType::NOT_SET:
            return {};
          case ArtifactSourceIdType::MD5Hash:
            return "MD5Hash";
          case ArtifactSourceIdType::S3ETag:
            return "S3ETag";
          case ArtifactSourceIdType::S3Version:
            return "S3Version";
          case ArtifactSourceIdType::Custom:
            return "Custom";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArtifactSourceIdTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
