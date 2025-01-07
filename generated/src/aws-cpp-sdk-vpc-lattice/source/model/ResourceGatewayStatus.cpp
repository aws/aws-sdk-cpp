/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceGatewayStatus.h>
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
      namespace ResourceGatewayStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ResourceGatewayStatus GetResourceGatewayStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ResourceGatewayStatus::ACTIVE;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ResourceGatewayStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ResourceGatewayStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ResourceGatewayStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ResourceGatewayStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ResourceGatewayStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ResourceGatewayStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceGatewayStatus>(hashCode);
          }

          return ResourceGatewayStatus::NOT_SET;
        }

        Aws::String GetNameForResourceGatewayStatus(ResourceGatewayStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceGatewayStatus::NOT_SET:
            return {};
          case ResourceGatewayStatus::ACTIVE:
            return "ACTIVE";
          case ResourceGatewayStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ResourceGatewayStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ResourceGatewayStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ResourceGatewayStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ResourceGatewayStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ResourceGatewayStatus::DELETE_FAILED:
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

      } // namespace ResourceGatewayStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
