/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubContentStatus.h>
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
      namespace HubContentStatusMapper
      {

        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Importing_HASH = ConstExprHashingUtils::HashString("Importing");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t ImportFailed_HASH = ConstExprHashingUtils::HashString("ImportFailed");
        static constexpr uint32_t DeleteFailed_HASH = ConstExprHashingUtils::HashString("DeleteFailed");


        HubContentStatus GetHubContentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Available_HASH)
          {
            return HubContentStatus::Available;
          }
          else if (hashCode == Importing_HASH)
          {
            return HubContentStatus::Importing;
          }
          else if (hashCode == Deleting_HASH)
          {
            return HubContentStatus::Deleting;
          }
          else if (hashCode == ImportFailed_HASH)
          {
            return HubContentStatus::ImportFailed;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return HubContentStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HubContentStatus>(hashCode);
          }

          return HubContentStatus::NOT_SET;
        }

        Aws::String GetNameForHubContentStatus(HubContentStatus enumValue)
        {
          switch(enumValue)
          {
          case HubContentStatus::NOT_SET:
            return {};
          case HubContentStatus::Available:
            return "Available";
          case HubContentStatus::Importing:
            return "Importing";
          case HubContentStatus::Deleting:
            return "Deleting";
          case HubContentStatus::ImportFailed:
            return "ImportFailed";
          case HubContentStatus::DeleteFailed:
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

      } // namespace HubContentStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
