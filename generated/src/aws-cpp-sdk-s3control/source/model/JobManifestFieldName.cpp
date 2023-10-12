/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobManifestFieldName.h>
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
      namespace JobManifestFieldNameMapper
      {

        static constexpr uint32_t Ignore_HASH = ConstExprHashingUtils::HashString("Ignore");
        static constexpr uint32_t Bucket_HASH = ConstExprHashingUtils::HashString("Bucket");
        static constexpr uint32_t Key_HASH = ConstExprHashingUtils::HashString("Key");
        static constexpr uint32_t VersionId_HASH = ConstExprHashingUtils::HashString("VersionId");


        JobManifestFieldName GetJobManifestFieldNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ignore_HASH)
          {
            return JobManifestFieldName::Ignore;
          }
          else if (hashCode == Bucket_HASH)
          {
            return JobManifestFieldName::Bucket;
          }
          else if (hashCode == Key_HASH)
          {
            return JobManifestFieldName::Key;
          }
          else if (hashCode == VersionId_HASH)
          {
            return JobManifestFieldName::VersionId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobManifestFieldName>(hashCode);
          }

          return JobManifestFieldName::NOT_SET;
        }

        Aws::String GetNameForJobManifestFieldName(JobManifestFieldName enumValue)
        {
          switch(enumValue)
          {
          case JobManifestFieldName::NOT_SET:
            return {};
          case JobManifestFieldName::Ignore:
            return "Ignore";
          case JobManifestFieldName::Bucket:
            return "Bucket";
          case JobManifestFieldName::Key:
            return "Key";
          case JobManifestFieldName::VersionId:
            return "VersionId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobManifestFieldNameMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
