/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceStatus.h>
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
      namespace SpaceStatusMapper
      {

        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t InService_HASH = ConstExprHashingUtils::HashString("InService");
        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Update_Failed_HASH = ConstExprHashingUtils::HashString("Update_Failed");
        static constexpr uint32_t Delete_Failed_HASH = ConstExprHashingUtils::HashString("Delete_Failed");


        SpaceStatus GetSpaceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deleting_HASH)
          {
            return SpaceStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return SpaceStatus::Failed;
          }
          else if (hashCode == InService_HASH)
          {
            return SpaceStatus::InService;
          }
          else if (hashCode == Pending_HASH)
          {
            return SpaceStatus::Pending;
          }
          else if (hashCode == Updating_HASH)
          {
            return SpaceStatus::Updating;
          }
          else if (hashCode == Update_Failed_HASH)
          {
            return SpaceStatus::Update_Failed;
          }
          else if (hashCode == Delete_Failed_HASH)
          {
            return SpaceStatus::Delete_Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpaceStatus>(hashCode);
          }

          return SpaceStatus::NOT_SET;
        }

        Aws::String GetNameForSpaceStatus(SpaceStatus enumValue)
        {
          switch(enumValue)
          {
          case SpaceStatus::NOT_SET:
            return {};
          case SpaceStatus::Deleting:
            return "Deleting";
          case SpaceStatus::Failed:
            return "Failed";
          case SpaceStatus::InService:
            return "InService";
          case SpaceStatus::Pending:
            return "Pending";
          case SpaceStatus::Updating:
            return "Updating";
          case SpaceStatus::Update_Failed:
            return "Update_Failed";
          case SpaceStatus::Delete_Failed:
            return "Delete_Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpaceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
