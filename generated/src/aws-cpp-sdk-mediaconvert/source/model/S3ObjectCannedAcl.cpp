/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/S3ObjectCannedAcl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace S3ObjectCannedAclMapper
      {

        static const int PUBLIC_READ_HASH = HashingUtils::HashString("PUBLIC_READ");
        static const int AUTHENTICATED_READ_HASH = HashingUtils::HashString("AUTHENTICATED_READ");
        static const int BUCKET_OWNER_READ_HASH = HashingUtils::HashString("BUCKET_OWNER_READ");
        static const int BUCKET_OWNER_FULL_CONTROL_HASH = HashingUtils::HashString("BUCKET_OWNER_FULL_CONTROL");


        S3ObjectCannedAcl GetS3ObjectCannedAclForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC_READ_HASH)
          {
            return S3ObjectCannedAcl::PUBLIC_READ;
          }
          else if (hashCode == AUTHENTICATED_READ_HASH)
          {
            return S3ObjectCannedAcl::AUTHENTICATED_READ;
          }
          else if (hashCode == BUCKET_OWNER_READ_HASH)
          {
            return S3ObjectCannedAcl::BUCKET_OWNER_READ;
          }
          else if (hashCode == BUCKET_OWNER_FULL_CONTROL_HASH)
          {
            return S3ObjectCannedAcl::BUCKET_OWNER_FULL_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3ObjectCannedAcl>(hashCode);
          }

          return S3ObjectCannedAcl::NOT_SET;
        }

        Aws::String GetNameForS3ObjectCannedAcl(S3ObjectCannedAcl enumValue)
        {
          switch(enumValue)
          {
          case S3ObjectCannedAcl::PUBLIC_READ:
            return "PUBLIC_READ";
          case S3ObjectCannedAcl::AUTHENTICATED_READ:
            return "AUTHENTICATED_READ";
          case S3ObjectCannedAcl::BUCKET_OWNER_READ:
            return "BUCKET_OWNER_READ";
          case S3ObjectCannedAcl::BUCKET_OWNER_FULL_CONTROL:
            return "BUCKET_OWNER_FULL_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3ObjectCannedAclMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
