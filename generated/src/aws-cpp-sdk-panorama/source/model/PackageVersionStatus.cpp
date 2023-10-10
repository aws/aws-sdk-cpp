/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace PackageVersionStatusMapper
      {

        static const int REGISTER_PENDING_HASH = HashingUtils::HashString("REGISTER_PENDING");
        static const int REGISTER_COMPLETED_HASH = HashingUtils::HashString("REGISTER_COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        PackageVersionStatus GetPackageVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTER_PENDING_HASH)
          {
            return PackageVersionStatus::REGISTER_PENDING;
          }
          else if (hashCode == REGISTER_COMPLETED_HASH)
          {
            return PackageVersionStatus::REGISTER_COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PackageVersionStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PackageVersionStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageVersionStatus>(hashCode);
          }

          return PackageVersionStatus::NOT_SET;
        }

        Aws::String GetNameForPackageVersionStatus(PackageVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case PackageVersionStatus::NOT_SET:
            return {};
          case PackageVersionStatus::REGISTER_PENDING:
            return "REGISTER_PENDING";
          case PackageVersionStatus::REGISTER_COMPLETED:
            return "REGISTER_COMPLETED";
          case PackageVersionStatus::FAILED:
            return "FAILED";
          case PackageVersionStatus::DELETING:
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

      } // namespace PackageVersionStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
