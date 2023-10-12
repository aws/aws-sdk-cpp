/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubSortBy.h>
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
      namespace HubSortByMapper
      {

        static constexpr uint32_t HubName_HASH = ConstExprHashingUtils::HashString("HubName");
        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");
        static constexpr uint32_t HubStatus_HASH = ConstExprHashingUtils::HashString("HubStatus");
        static constexpr uint32_t AccountIdOwner_HASH = ConstExprHashingUtils::HashString("AccountIdOwner");


        HubSortBy GetHubSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HubName_HASH)
          {
            return HubSortBy::HubName;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return HubSortBy::CreationTime;
          }
          else if (hashCode == HubStatus_HASH)
          {
            return HubSortBy::HubStatus;
          }
          else if (hashCode == AccountIdOwner_HASH)
          {
            return HubSortBy::AccountIdOwner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HubSortBy>(hashCode);
          }

          return HubSortBy::NOT_SET;
        }

        Aws::String GetNameForHubSortBy(HubSortBy enumValue)
        {
          switch(enumValue)
          {
          case HubSortBy::NOT_SET:
            return {};
          case HubSortBy::HubName:
            return "HubName";
          case HubSortBy::CreationTime:
            return "CreationTime";
          case HubSortBy::HubStatus:
            return "HubStatus";
          case HubSortBy::AccountIdOwner:
            return "AccountIdOwner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HubSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
