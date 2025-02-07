/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/GifFramerateConversionAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace GifFramerateConversionAlgorithmMapper
      {

        static const int DUPLICATE_DROP_HASH = HashingUtils::HashString("DUPLICATE_DROP");
        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");


        GifFramerateConversionAlgorithm GetGifFramerateConversionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return GifFramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return GifFramerateConversionAlgorithm::INTERPOLATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GifFramerateConversionAlgorithm>(hashCode);
          }

          return GifFramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForGifFramerateConversionAlgorithm(GifFramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case GifFramerateConversionAlgorithm::NOT_SET:
            return {};
          case GifFramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case GifFramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GifFramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
