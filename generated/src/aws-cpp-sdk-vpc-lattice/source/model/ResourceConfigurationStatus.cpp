/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace ResourceConfigurationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ResourceConfigurationStatus GetResourceConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ResourceConfigurationStatus::ACTIVE;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ResourceConfigurationStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ResourceConfigurationStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ResourceConfigurationStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ResourceConfigurationStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceConfigurationStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ResourceConfigurationStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceConfigurationStatus>(hashCode);
          }

          return ResourceConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForResourceConfigurationStatus(ResourceConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceConfigurationStatus::NOT_SET:
            return {};
          case ResourceConfigurationStatus::ACTIVE:
            return "ACTIVE";
          case ResourceConfigurationStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ResourceConfigurationStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ResourceConfigurationStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ResourceConfigurationStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ResourceConfigurationStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ResourceConfigurationStatus::DELETE_FAILED:
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

      } // namespace ResourceConfigurationStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
