/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace PackageStatusMapper
      {

        static constexpr uint32_t COPYING_HASH = ConstExprHashingUtils::HashString("COPYING");
        static constexpr uint32_t COPY_FAILED_HASH = ConstExprHashingUtils::HashString("COPY_FAILED");
        static constexpr uint32_t VALIDATING_HASH = ConstExprHashingUtils::HashString("VALIDATING");
        static constexpr uint32_t VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("VALIDATION_FAILED");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        PackageStatus GetPackageStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COPYING_HASH)
          {
            return PackageStatus::COPYING;
          }
          else if (hashCode == COPY_FAILED_HASH)
          {
            return PackageStatus::COPY_FAILED;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return PackageStatus::VALIDATING;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return PackageStatus::VALIDATION_FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return PackageStatus::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PackageStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return PackageStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return PackageStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageStatus>(hashCode);
          }

          return PackageStatus::NOT_SET;
        }

        Aws::String GetNameForPackageStatus(PackageStatus enumValue)
        {
          switch(enumValue)
          {
          case PackageStatus::NOT_SET:
            return {};
          case PackageStatus::COPYING:
            return "COPYING";
          case PackageStatus::COPY_FAILED:
            return "COPY_FAILED";
          case PackageStatus::VALIDATING:
            return "VALIDATING";
          case PackageStatus::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          case PackageStatus::AVAILABLE:
            return "AVAILABLE";
          case PackageStatus::DELETING:
            return "DELETING";
          case PackageStatus::DELETED:
            return "DELETED";
          case PackageStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
