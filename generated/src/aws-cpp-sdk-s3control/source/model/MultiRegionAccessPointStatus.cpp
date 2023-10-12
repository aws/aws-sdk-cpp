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

        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t INCONSISTENT_ACROSS_REGIONS_HASH = ConstExprHashingUtils::HashString("INCONSISTENT_ACROSS_REGIONS");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t PARTIALLY_CREATED_HASH = ConstExprHashingUtils::HashString("PARTIALLY_CREATED");
        static constexpr uint32_t PARTIALLY_DELETED_HASH = ConstExprHashingUtils::HashString("PARTIALLY_DELETED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        MultiRegionAccessPointStatus GetMultiRegionAccessPointStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
