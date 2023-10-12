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

        static constexpr uint32_t OutOfService_HASH = ConstExprHashingUtils::HashString("OutOfService");
        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t SystemUpdating_HASH = ConstExprHashingUtils::HashString("SystemUpdating");
        static constexpr uint32_t RollingBack_HASH = ConstExprHashingUtils::HashString("RollingBack");
        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t UpdateRollbackFailed_HASH = ConstExprHashingUtils::HashString("UpdateRollbackFailed");


        EndpointStatus GetEndpointStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == UpdateRollbackFailed_HASH)
          {
            return EndpointStatus::UpdateRollbackFailed;
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
          case EndpointStatus::NOT_SET:
            return {};
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
          case EndpointStatus::UpdateRollbackFailed:
            return "UpdateRollbackFailed";
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
