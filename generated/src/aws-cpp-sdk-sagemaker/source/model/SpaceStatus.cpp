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

        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Update_Failed_HASH = HashingUtils::HashString("Update_Failed");
        static const int Delete_Failed_HASH = HashingUtils::HashString("Delete_Failed");


        SpaceStatus GetSpaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
