/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ResourceSnapshotJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ResourceSnapshotJobStatusMapper
      {

        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        ResourceSnapshotJobStatus GetResourceSnapshotJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Running_HASH)
          {
            return ResourceSnapshotJobStatus::Running;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ResourceSnapshotJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSnapshotJobStatus>(hashCode);
          }

          return ResourceSnapshotJobStatus::NOT_SET;
        }

        Aws::String GetNameForResourceSnapshotJobStatus(ResourceSnapshotJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceSnapshotJobStatus::NOT_SET:
            return {};
          case ResourceSnapshotJobStatus::Running:
            return "Running";
          case ResourceSnapshotJobStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSnapshotJobStatusMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
