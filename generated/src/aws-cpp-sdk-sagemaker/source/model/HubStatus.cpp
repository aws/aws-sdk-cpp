/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubStatus.h>
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
      namespace HubStatusMapper
      {

        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t CreateFailed_HASH = ConstExprHashingUtils::HashString("CreateFailed");
        static constexpr uint32_t UpdateFailed_HASH = ConstExprHashingUtils::HashString("UpdateFailed");
        static constexpr uint32_t DeleteFailed_HASH = ConstExprHashingUtils::HashString("DeleteFailed");


        HubStatus GetHubStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InService_HASH)
          {
            return HubStatus::InService;
          }
          else if (hashCode == Creating_HASH)
          {
            return HubStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return HubStatus::Updating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return HubStatus::Deleting;
          }
          else if (hashCode == CreateFailed_HASH)
          {
            return HubStatus::CreateFailed;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return HubStatus::UpdateFailed;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return HubStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HubStatus>(hashCode);
          }

          return HubStatus::NOT_SET;
        }

        Aws::String GetNameForHubStatus(HubStatus enumValue)
        {
          switch(enumValue)
          {
          case HubStatus::NOT_SET:
            return {};
          case HubStatus::InService:
            return "InService";
          case HubStatus::Creating:
            return "Creating";
          case HubStatus::Updating:
            return "Updating";
          case HubStatus::Deleting:
            return "Deleting";
          case HubStatus::CreateFailed:
            return "CreateFailed";
          case HubStatus::UpdateFailed:
            return "UpdateFailed";
          case HubStatus::DeleteFailed:
            return "DeleteFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HubStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
