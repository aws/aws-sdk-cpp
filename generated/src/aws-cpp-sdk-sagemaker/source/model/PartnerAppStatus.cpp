/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PartnerAppStatus.h>
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
      namespace PartnerAppStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        PartnerAppStatus GetPartnerAppStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return PartnerAppStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return PartnerAppStatus::Updating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return PartnerAppStatus::Deleting;
          }
          else if (hashCode == Available_HASH)
          {
            return PartnerAppStatus::Available;
          }
          else if (hashCode == Failed_HASH)
          {
            return PartnerAppStatus::Failed;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return PartnerAppStatus::UpdateFailed;
          }
          else if (hashCode == Deleted_HASH)
          {
            return PartnerAppStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartnerAppStatus>(hashCode);
          }

          return PartnerAppStatus::NOT_SET;
        }

        Aws::String GetNameForPartnerAppStatus(PartnerAppStatus enumValue)
        {
          switch(enumValue)
          {
          case PartnerAppStatus::NOT_SET:
            return {};
          case PartnerAppStatus::Creating:
            return "Creating";
          case PartnerAppStatus::Updating:
            return "Updating";
          case PartnerAppStatus::Deleting:
            return "Deleting";
          case PartnerAppStatus::Available:
            return "Available";
          case PartnerAppStatus::Failed:
            return "Failed";
          case PartnerAppStatus::UpdateFailed:
            return "UpdateFailed";
          case PartnerAppStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartnerAppStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
