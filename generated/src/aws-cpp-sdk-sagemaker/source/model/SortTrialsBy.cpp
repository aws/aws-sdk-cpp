/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortTrialsBy.h>
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
      namespace SortTrialsByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortTrialsBy GetSortTrialsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return SortTrialsBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return SortTrialsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortTrialsBy>(hashCode);
          }

          return SortTrialsBy::NOT_SET;
        }

        Aws::String GetNameForSortTrialsBy(SortTrialsBy enumValue)
        {
          switch(enumValue)
          {
          case SortTrialsBy::Name:
            return "Name";
          case SortTrialsBy::CreationTime:
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

      } // namespace SortTrialsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
