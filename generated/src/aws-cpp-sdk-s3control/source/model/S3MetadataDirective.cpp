/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3MetadataDirective.h>
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
      namespace S3MetadataDirectiveMapper
      {

        static constexpr uint32_t COPY_HASH = ConstExprHashingUtils::HashString("COPY");
        static constexpr uint32_t REPLACE_HASH = ConstExprHashingUtils::HashString("REPLACE");


        S3MetadataDirective GetS3MetadataDirectiveForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COPY_HASH)
          {
            return S3MetadataDirective::COPY;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return S3MetadataDirective::REPLACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3MetadataDirective>(hashCode);
          }

          return S3MetadataDirective::NOT_SET;
        }

        Aws::String GetNameForS3MetadataDirective(S3MetadataDirective enumValue)
        {
          switch(enumValue)
          {
          case S3MetadataDirective::NOT_SET:
            return {};
          case S3MetadataDirective::COPY:
            return "COPY";
          case S3MetadataDirective::REPLACE:
            return "REPLACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3MetadataDirectiveMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
