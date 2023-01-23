/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImageSortBy.h>
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
      namespace ImageSortByMapper
      {

        static const int CREATION_TIME_HASH = HashingUtils::HashString("CREATION_TIME");
        static const int LAST_MODIFIED_TIME_HASH = HashingUtils::HashString("LAST_MODIFIED_TIME");
        static const int IMAGE_NAME_HASH = HashingUtils::HashString("IMAGE_NAME");


        ImageSortBy GetImageSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_TIME_HASH)
          {
            return ImageSortBy::CREATION_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ImageSortBy::LAST_MODIFIED_TIME;
          }
          else if (hashCode == IMAGE_NAME_HASH)
          {
            return ImageSortBy::IMAGE_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageSortBy>(hashCode);
          }

          return ImageSortBy::NOT_SET;
        }

        Aws::String GetNameForImageSortBy(ImageSortBy enumValue)
        {
          switch(enumValue)
          {
          case ImageSortBy::CREATION_TIME:
            return "CREATION_TIME";
          case ImageSortBy::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          case ImageSortBy::IMAGE_NAME:
            return "IMAGE_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
