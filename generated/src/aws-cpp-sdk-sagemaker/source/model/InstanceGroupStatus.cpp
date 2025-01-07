/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InstanceGroupStatus.h>
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
      namespace InstanceGroupStatusMapper
      {

        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Degraded_HASH = HashingUtils::HashString("Degraded");
        static const int SystemUpdating_HASH = HashingUtils::HashString("SystemUpdating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        InstanceGroupStatus GetInstanceGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InService_HASH)
          {
            return InstanceGroupStatus::InService;
          }
          else if (hashCode == Creating_HASH)
          {
            return InstanceGroupStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return InstanceGroupStatus::Updating;
          }
          else if (hashCode == Failed_HASH)
          {
            return InstanceGroupStatus::Failed;
          }
          else if (hashCode == Degraded_HASH)
          {
            return InstanceGroupStatus::Degraded;
          }
          else if (hashCode == SystemUpdating_HASH)
          {
            return InstanceGroupStatus::SystemUpdating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return InstanceGroupStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceGroupStatus>(hashCode);
          }

          return InstanceGroupStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceGroupStatus(InstanceGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceGroupStatus::NOT_SET:
            return {};
          case InstanceGroupStatus::InService:
            return "InService";
          case InstanceGroupStatus::Creating:
            return "Creating";
          case InstanceGroupStatus::Updating:
            return "Updating";
          case InstanceGroupStatus::Failed:
            return "Failed";
          case InstanceGroupStatus::Degraded:
            return "Degraded";
          case InstanceGroupStatus::SystemUpdating:
            return "SystemUpdating";
          case InstanceGroupStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceGroupStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
