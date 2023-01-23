/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace EndpointStatusMapper
      {

        static const int OutOfService_HASH = HashingUtils::HashString("OutOfService");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int SystemUpdating_HASH = HashingUtils::HashString("SystemUpdating");
        static const int RollingBack_HASH = HashingUtils::HashString("RollingBack");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        EndpointStatus GetEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OutOfService_HASH)
          {
            return EndpointStatus::OutOfService;
          }
          else if (hashCode == Creating_HASH)
          {
            return EndpointStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return EndpointStatus::Updating;
          }
          else if (hashCode == SystemUpdating_HASH)
          {
            return EndpointStatus::SystemUpdating;
          }
          else if (hashCode == RollingBack_HASH)
          {
            return EndpointStatus::RollingBack;
          }
          else if (hashCode == InService_HASH)
          {
            return EndpointStatus::InService;
          }
          else if (hashCode == Deleting_HASH)
          {
            return EndpointStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return EndpointStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointStatus>(hashCode);
          }

          return EndpointStatus::NOT_SET;
        }

        Aws::String GetNameForEndpointStatus(EndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case EndpointStatus::OutOfService:
            return "OutOfService";
          case EndpointStatus::Creating:
            return "Creating";
          case EndpointStatus::Updating:
            return "Updating";
          case EndpointStatus::SystemUpdating:
            return "SystemUpdating";
          case EndpointStatus::RollingBack:
            return "RollingBack";
          case EndpointStatus::InService:
            return "InService";
          case EndpointStatus::Deleting:
            return "Deleting";
          case EndpointStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
