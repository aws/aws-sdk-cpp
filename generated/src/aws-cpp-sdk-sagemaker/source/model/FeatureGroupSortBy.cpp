/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureGroupSortBy.h>
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
      namespace FeatureGroupSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int FeatureGroupStatus_HASH = HashingUtils::HashString("FeatureGroupStatus");
        static const int OfflineStoreStatus_HASH = HashingUtils::HashString("OfflineStoreStatus");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        FeatureGroupSortBy GetFeatureGroupSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return FeatureGroupSortBy::Name;
          }
          else if (hashCode == FeatureGroupStatus_HASH)
          {
            return FeatureGroupSortBy::FeatureGroupStatus;
          }
          else if (hashCode == OfflineStoreStatus_HASH)
          {
            return FeatureGroupSortBy::OfflineStoreStatus;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return FeatureGroupSortBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureGroupSortBy>(hashCode);
          }

          return FeatureGroupSortBy::NOT_SET;
        }

        Aws::String GetNameForFeatureGroupSortBy(FeatureGroupSortBy enumValue)
        {
          switch(enumValue)
          {
          case FeatureGroupSortBy::NOT_SET:
            return {};
          case FeatureGroupSortBy::Name:
            return "Name";
          case FeatureGroupSortBy::FeatureGroupStatus:
            return "FeatureGroupStatus";
          case FeatureGroupSortBy::OfflineStoreStatus:
            return "OfflineStoreStatus";
          case FeatureGroupSortBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureGroupSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
