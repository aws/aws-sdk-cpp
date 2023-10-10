/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/VersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace VersionStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        VersionStatus GetVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return VersionStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return VersionStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VersionStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return VersionStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VersionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VersionStatus>(hashCode);
          }

          return VersionStatus::NOT_SET;
        }

        Aws::String GetNameForVersionStatus(VersionStatus enumValue)
        {
          switch(enumValue)
          {
          case VersionStatus::NOT_SET:
            return {};
          case VersionStatus::CREATING:
            return "CREATING";
          case VersionStatus::UPDATING:
            return "UPDATING";
          case VersionStatus::DELETING:
            return "DELETING";
          case VersionStatus::ACTIVE:
            return "ACTIVE";
          case VersionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VersionStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
