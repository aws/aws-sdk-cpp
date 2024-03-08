/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/SnapshotStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace SnapshotStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COPYING_HASH = HashingUtils::HashString("COPYING");


        SnapshotStatus GetSnapshotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return SnapshotStatus::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return SnapshotStatus::CREATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return SnapshotStatus::DELETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return SnapshotStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SnapshotStatus::FAILED;
          }
          else if (hashCode == COPYING_HASH)
          {
            return SnapshotStatus::COPYING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotStatus>(hashCode);
          }

          return SnapshotStatus::NOT_SET;
        }

        Aws::String GetNameForSnapshotStatus(SnapshotStatus enumValue)
        {
          switch(enumValue)
          {
          case SnapshotStatus::NOT_SET:
            return {};
          case SnapshotStatus::AVAILABLE:
            return "AVAILABLE";
          case SnapshotStatus::CREATING:
            return "CREATING";
          case SnapshotStatus::DELETED:
            return "DELETED";
          case SnapshotStatus::CANCELLED:
            return "CANCELLED";
          case SnapshotStatus::FAILED:
            return "FAILED";
          case SnapshotStatus::COPYING:
            return "COPYING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotStatusMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
