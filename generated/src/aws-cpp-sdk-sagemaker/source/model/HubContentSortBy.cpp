/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubContentSortBy.h>
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
      namespace HubContentSortByMapper
      {

        static const int HubContentName_HASH = HashingUtils::HashString("HubContentName");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int HubContentStatus_HASH = HashingUtils::HashString("HubContentStatus");


        HubContentSortBy GetHubContentSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HubContentName_HASH)
          {
            return HubContentSortBy::HubContentName;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return HubContentSortBy::CreationTime;
          }
          else if (hashCode == HubContentStatus_HASH)
          {
            return HubContentSortBy::HubContentStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HubContentSortBy>(hashCode);
          }

          return HubContentSortBy::NOT_SET;
        }

        Aws::String GetNameForHubContentSortBy(HubContentSortBy enumValue)
        {
          switch(enumValue)
          {
          case HubContentSortBy::HubContentName:
            return "HubContentName";
          case HubContentSortBy::CreationTime:
            return "CreationTime";
          case HubContentSortBy::HubContentStatus:
            return "HubContentStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HubContentSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
