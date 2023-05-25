/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListRecommendationsFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ListRecommendationsFilterKeyMapper
      {

        static const int TYPE_HASH = HashingUtils::HashString("TYPE");
        static const int IMPACT_HASH = HashingUtils::HashString("IMPACT");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int RESOURCE_ARN_HASH = HashingUtils::HashString("RESOURCE_ARN");


        ListRecommendationsFilterKey GetListRecommendationsFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TYPE_HASH)
          {
            return ListRecommendationsFilterKey::TYPE;
          }
          else if (hashCode == IMPACT_HASH)
          {
            return ListRecommendationsFilterKey::IMPACT;
          }
          else if (hashCode == STATUS_HASH)
          {
            return ListRecommendationsFilterKey::STATUS;
          }
          else if (hashCode == RESOURCE_ARN_HASH)
          {
            return ListRecommendationsFilterKey::RESOURCE_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListRecommendationsFilterKey>(hashCode);
          }

          return ListRecommendationsFilterKey::NOT_SET;
        }

        Aws::String GetNameForListRecommendationsFilterKey(ListRecommendationsFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ListRecommendationsFilterKey::TYPE:
            return "TYPE";
          case ListRecommendationsFilterKey::IMPACT:
            return "IMPACT";
          case ListRecommendationsFilterKey::STATUS:
            return "STATUS";
          case ListRecommendationsFilterKey::RESOURCE_ARN:
            return "RESOURCE_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListRecommendationsFilterKeyMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
