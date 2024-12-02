/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkResourceAssociationStatus.h>
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
      namespace ServiceNetworkResourceAssociationStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ServiceNetworkResourceAssociationStatus GetServiceNetworkResourceAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkResourceAssociationStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ServiceNetworkResourceAssociationStatus::ACTIVE;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return ServiceNetworkResourceAssociationStatus::PARTIAL;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkResourceAssociationStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ServiceNetworkResourceAssociationStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ServiceNetworkResourceAssociationStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNetworkResourceAssociationStatus>(hashCode);
          }

          return ServiceNetworkResourceAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForServiceNetworkResourceAssociationStatus(ServiceNetworkResourceAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceNetworkResourceAssociationStatus::NOT_SET:
            return {};
          case ServiceNetworkResourceAssociationStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ServiceNetworkResourceAssociationStatus::ACTIVE:
            return "ACTIVE";
          case ServiceNetworkResourceAssociationStatus::PARTIAL:
            return "PARTIAL";
          case ServiceNetworkResourceAssociationStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ServiceNetworkResourceAssociationStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ServiceNetworkResourceAssociationStatus::DELETE_FAILED:
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

      } // namespace ServiceNetworkResourceAssociationStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
