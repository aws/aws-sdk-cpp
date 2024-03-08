/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListEdgePackagingJobsSortBy.h>
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
      namespace ListEdgePackagingJobsSortByMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int MODEL_NAME_HASH = HashingUtils::HashString("MODEL_NAME");
        static const int CREATION_TIME_HASH = HashingUtils::HashString("CREATION_TIME");
        static const int LAST_MODIFIED_TIME_HASH = HashingUtils::HashString("LAST_MODIFIED_TIME");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        ListEdgePackagingJobsSortBy GetListEdgePackagingJobsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return ListEdgePackagingJobsSortBy::NAME;
          }
          else if (hashCode == MODEL_NAME_HASH)
          {
            return ListEdgePackagingJobsSortBy::MODEL_NAME;
          }
          else if (hashCode == CREATION_TIME_HASH)
          {
            return ListEdgePackagingJobsSortBy::CREATION_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ListEdgePackagingJobsSortBy::LAST_MODIFIED_TIME;
          }
          else if (hashCode == STATUS_HASH)
          {
            return ListEdgePackagingJobsSortBy::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListEdgePackagingJobsSortBy>(hashCode);
          }

          return ListEdgePackagingJobsSortBy::NOT_SET;
        }

        Aws::String GetNameForListEdgePackagingJobsSortBy(ListEdgePackagingJobsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListEdgePackagingJobsSortBy::NOT_SET:
            return {};
          case ListEdgePackagingJobsSortBy::NAME:
            return "NAME";
          case ListEdgePackagingJobsSortBy::MODEL_NAME:
            return "MODEL_NAME";
          case ListEdgePackagingJobsSortBy::CREATION_TIME:
            return "CREATION_TIME";
          case ListEdgePackagingJobsSortBy::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          case ListEdgePackagingJobsSortBy::STATUS:
            return "STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListEdgePackagingJobsSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
