/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceStatus.h>
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
      namespace ServiceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ServiceStatus GetServiceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ServiceStatus::ACTIVE;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ServiceStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ServiceStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ServiceStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ServiceStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceStatus>(hashCode);
          }

          return ServiceStatus::NOT_SET;
        }

        Aws::String GetNameForServiceStatus(ServiceStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceStatus::NOT_SET:
            return {};
          case ServiceStatus::ACTIVE:
            return "ACTIVE";
          case ServiceStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ServiceStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ServiceStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ServiceStatus::DELETE_FAILED:
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

      } // namespace ServiceStatusMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
