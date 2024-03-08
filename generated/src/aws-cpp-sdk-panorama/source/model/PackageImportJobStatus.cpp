/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageImportJobStatus.h>
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
      namespace PackageImportJobStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PackageImportJobStatus GetPackageImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return PackageImportJobStatus::PENDING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return PackageImportJobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PackageImportJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageImportJobStatus>(hashCode);
          }

          return PackageImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForPackageImportJobStatus(PackageImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case PackageImportJobStatus::NOT_SET:
            return {};
          case PackageImportJobStatus::PENDING:
            return "PENDING";
          case PackageImportJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case PackageImportJobStatus::FAILED:
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

      } // namespace PackageImportJobStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
