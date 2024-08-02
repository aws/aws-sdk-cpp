/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourcesGroupingRecGenStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ResourcesGroupingRecGenStatusTypeMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Success_HASH = HashingUtils::HashString("Success");


        ResourcesGroupingRecGenStatusType GetResourcesGroupingRecGenStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ResourcesGroupingRecGenStatusType::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ResourcesGroupingRecGenStatusType::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return ResourcesGroupingRecGenStatusType::Failed;
          }
          else if (hashCode == Success_HASH)
          {
            return ResourcesGroupingRecGenStatusType::Success;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourcesGroupingRecGenStatusType>(hashCode);
          }

          return ResourcesGroupingRecGenStatusType::NOT_SET;
        }

        Aws::String GetNameForResourcesGroupingRecGenStatusType(ResourcesGroupingRecGenStatusType enumValue)
        {
          switch(enumValue)
          {
          case ResourcesGroupingRecGenStatusType::NOT_SET:
            return {};
          case ResourcesGroupingRecGenStatusType::Pending:
            return "Pending";
          case ResourcesGroupingRecGenStatusType::InProgress:
            return "InProgress";
          case ResourcesGroupingRecGenStatusType::Failed:
            return "Failed";
          case ResourcesGroupingRecGenStatusType::Success:
            return "Success";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourcesGroupingRecGenStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
