/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/MultiRegionAccessPointStatus.h>
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
      namespace MultiRegionAccessPointStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int INCONSISTENT_ACROSS_REGIONS_HASH = HashingUtils::HashString("INCONSISTENT_ACROSS_REGIONS");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int PARTIALLY_CREATED_HASH = HashingUtils::HashString("PARTIALLY_CREATED");
        static const int PARTIALLY_DELETED_HASH = HashingUtils::HashString("PARTIALLY_DELETED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        MultiRegionAccessPointStatus GetMultiRegionAccessPointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return MultiRegionAccessPointStatus::READY;
          }
          else if (hashCode == INCONSISTENT_ACROSS_REGIONS_HASH)
          {
            return MultiRegionAccessPointStatus::INCONSISTENT_ACROSS_REGIONS;
          }
          else if (hashCode == CREATING_HASH)
          {
            return MultiRegionAccessPointStatus::CREATING;
          }
          else if (hashCode == PARTIALLY_CREATED_HASH)
          {
            return MultiRegionAccessPointStatus::PARTIALLY_CREATED;
          }
          else if (hashCode == PARTIALLY_DELETED_HASH)
          {
            return MultiRegionAccessPointStatus::PARTIALLY_DELETED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MultiRegionAccessPointStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultiRegionAccessPointStatus>(hashCode);
          }

          return MultiRegionAccessPointStatus::NOT_SET;
        }

        Aws::String GetNameForMultiRegionAccessPointStatus(MultiRegionAccessPointStatus enumValue)
        {
          switch(enumValue)
          {
          case MultiRegionAccessPointStatus::NOT_SET:
            return {};
          case MultiRegionAccessPointStatus::READY:
            return "READY";
          case MultiRegionAccessPointStatus::INCONSISTENT_ACROSS_REGIONS:
            return "INCONSISTENT_ACROSS_REGIONS";
          case MultiRegionAccessPointStatus::CREATING:
            return "CREATING";
          case MultiRegionAccessPointStatus::PARTIALLY_CREATED:
            return "PARTIALLY_CREATED";
          case MultiRegionAccessPointStatus::PARTIALLY_DELETED:
            return "PARTIALLY_DELETED";
          case MultiRegionAccessPointStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MultiRegionAccessPointStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
