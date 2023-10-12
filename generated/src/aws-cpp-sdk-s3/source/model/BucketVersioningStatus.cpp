/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/BucketVersioningStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace BucketVersioningStatusMapper
      {

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Suspended_HASH = ConstExprHashingUtils::HashString("Suspended");


        BucketVersioningStatus GetBucketVersioningStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return BucketVersioningStatus::Enabled;
          }
          else if (hashCode == Suspended_HASH)
          {
            return BucketVersioningStatus::Suspended;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketVersioningStatus>(hashCode);
          }

          return BucketVersioningStatus::NOT_SET;
        }

        Aws::String GetNameForBucketVersioningStatus(BucketVersioningStatus enumValue)
        {
          switch(enumValue)
          {
          case BucketVersioningStatus::NOT_SET:
            return {};
          case BucketVersioningStatus::Enabled:
            return "Enabled";
          case BucketVersioningStatus::Suspended:
            return "Suspended";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketVersioningStatusMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
