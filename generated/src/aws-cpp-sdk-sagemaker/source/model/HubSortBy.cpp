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

        static const int HubName_HASH = HashingUtils::HashString("HubName");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int HubStatus_HASH = HashingUtils::HashString("HubStatus");
        static const int AccountIdOwner_HASH = HashingUtils::HashString("AccountIdOwner");


        HubSortBy GetHubSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
