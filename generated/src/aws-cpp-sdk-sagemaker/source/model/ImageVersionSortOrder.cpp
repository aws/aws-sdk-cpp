/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageVersionSortOrder.h>
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
      namespace ImageVersionSortOrderMapper
      {

        static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
        static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");


        ImageVersionSortOrder GetImageVersionSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASCENDING_HASH)
          {
            return ImageVersionSortOrder::ASCENDING;
          }
          else if (hashCode == DESCENDING_HASH)
          {
            return ImageVersionSortOrder::DESCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageVersionSortOrder>(hashCode);
          }

          return ImageVersionSortOrder::NOT_SET;
        }

        Aws::String GetNameForImageVersionSortOrder(ImageVersionSortOrder enumValue)
        {
          switch(enumValue)
          {
          case ImageVersionSortOrder::ASCENDING:
            return "ASCENDING";
          case ImageVersionSortOrder::DESCENDING:
            return "DESCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageVersionSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
