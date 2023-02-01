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

        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");


        HubStatus GetHubStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
