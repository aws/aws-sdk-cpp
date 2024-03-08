/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkServiceAssociationStatus.h>
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
      namespace ServiceNetworkServiceAssociationStatusMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ServiceNetworkServiceAssociationStatus GetServiceNetworkServiceAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkServiceAssociationStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ServiceNetworkServiceAssociationStatus::ACTIVE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ServiceNetworkServiceAssociationStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ServiceNetworkServiceAssociationStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ServiceNetworkServiceAssociationStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNetworkServiceAssociationStatus>(hashCode);
          }

          return ServiceNetworkServiceAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForServiceNetworkServiceAssociationStatus(ServiceNetworkServiceAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceNetworkServiceAssociationStatus::NOT_SET:
            return {};
          case ServiceNetworkServiceAssociationStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ServiceNetworkServiceAssociationStatus::ACTIVE:
            return "ACTIVE";
          case ServiceNetworkServiceAssociationStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ServiceNetworkServiceAssociationStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ServiceNetworkServiceAssociationStatus::DELETE_FAILED:
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

      } // namespace ServiceNetworkServiceAssociationStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
