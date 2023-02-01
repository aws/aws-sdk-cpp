/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GroupBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace GroupByMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int YEARLY_HASH = HashingUtils::HashString("YEARLY");


        GroupBy GetGroupByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return GroupBy::ALL;
          }
          else if (hashCode == YEARLY_HASH)
          {
            return GroupBy::YEARLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupBy>(hashCode);
          }

          return GroupBy::NOT_SET;
        }

        Aws::String GetNameForGroupBy(GroupBy enumValue)
        {
          switch(enumValue)
          {
          case GroupBy::ALL:
            return "ALL";
          case GroupBy::YEARLY:
            return "YEARLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
