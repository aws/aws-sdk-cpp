/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceRecommendationsJobsSortBy.h>
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
      namespace ListInferenceRecommendationsJobsSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        ListInferenceRecommendationsJobsSortBy GetListInferenceRecommendationsJobsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ListInferenceRecommendationsJobsSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ListInferenceRecommendationsJobsSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return ListInferenceRecommendationsJobsSortBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListInferenceRecommendationsJobsSortBy>(hashCode);
          }

          return ListInferenceRecommendationsJobsSortBy::NOT_SET;
        }

        Aws::String GetNameForListInferenceRecommendationsJobsSortBy(ListInferenceRecommendationsJobsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListInferenceRecommendationsJobsSortBy::NOT_SET:
            return {};
          case ListInferenceRecommendationsJobsSortBy::Name:
            return "Name";
          case ListInferenceRecommendationsJobsSortBy::CreationTime:
            return "CreationTime";
          case ListInferenceRecommendationsJobsSortBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListInferenceRecommendationsJobsSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
