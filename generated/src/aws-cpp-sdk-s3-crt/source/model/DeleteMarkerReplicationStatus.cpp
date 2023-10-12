/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/DeleteMarkerReplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace DeleteMarkerReplicationStatusMapper
      {

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        DeleteMarkerReplicationStatus GetDeleteMarkerReplicationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return DeleteMarkerReplicationStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return DeleteMarkerReplicationStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteMarkerReplicationStatus>(hashCode);
          }

          return DeleteMarkerReplicationStatus::NOT_SET;
        }

        Aws::String GetNameForDeleteMarkerReplicationStatus(DeleteMarkerReplicationStatus enumValue)
        {
          switch(enumValue)
          {
          case DeleteMarkerReplicationStatus::NOT_SET:
            return {};
          case DeleteMarkerReplicationStatus::Enabled:
            return "Enabled";
          case DeleteMarkerReplicationStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteMarkerReplicationStatusMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
