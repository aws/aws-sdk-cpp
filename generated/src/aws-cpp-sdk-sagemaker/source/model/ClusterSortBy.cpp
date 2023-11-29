/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterSortBy.h>
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
      namespace ClusterSortByMapper
      {

        static const int CREATION_TIME_HASH = HashingUtils::HashString("CREATION_TIME");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        ClusterSortBy GetClusterSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_TIME_HASH)
          {
            return ClusterSortBy::CREATION_TIME;
          }
          else if (hashCode == NAME_HASH)
          {
            return ClusterSortBy::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterSortBy>(hashCode);
          }

          return ClusterSortBy::NOT_SET;
        }

        Aws::String GetNameForClusterSortBy(ClusterSortBy enumValue)
        {
          switch(enumValue)
          {
          case ClusterSortBy::NOT_SET:
            return {};
          case ClusterSortBy::CREATION_TIME:
            return "CREATION_TIME";
          case ClusterSortBy::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
