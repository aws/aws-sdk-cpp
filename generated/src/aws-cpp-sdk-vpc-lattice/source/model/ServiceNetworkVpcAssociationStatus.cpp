/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkVpcAssociationStatus.h>
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
      namespace ServiceNetworkVpcAssociationStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ServiceNetworkVpcAssociationStatus GetServiceNetworkVpcAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::ACTIVE;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::DELETE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ServiceNetworkVpcAssociationStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNetworkVpcAssociationStatus>(hashCode);
          }

          return ServiceNetworkVpcAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForServiceNetworkVpcAssociationStatus(ServiceNetworkVpcAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceNetworkVpcAssociationStatus::NOT_SET:
            return {};
          case ServiceNetworkVpcAssociationStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ServiceNetworkVpcAssociationStatus::ACTIVE:
            return "ACTIVE";
          case ServiceNetworkVpcAssociationStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case ServiceNetworkVpcAssociationStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ServiceNetworkVpcAssociationStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ServiceNetworkVpcAssociationStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ServiceNetworkVpcAssociationStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNetworkVpcAssociationStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
