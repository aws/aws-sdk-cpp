/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcFramerateConversionAlgorithm.h>
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
      namespace XavcFramerateConversionAlgorithmMapper
      {

        static const int DUPLICATE_DROP_HASH = HashingUtils::HashString("DUPLICATE_DROP");
        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");
        static const int FRAMEFORMER_HASH = HashingUtils::HashString("FRAMEFORMER");


        XavcFramerateConversionAlgorithm GetXavcFramerateConversionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return XavcFramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return XavcFramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return XavcFramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcFramerateConversionAlgorithm>(hashCode);
          }

          return XavcFramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForXavcFramerateConversionAlgorithm(XavcFramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case XavcFramerateConversionAlgorithm::NOT_SET:
            return {};
          case XavcFramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case XavcFramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case XavcFramerateConversionAlgorithm::FRAMEFORMER:
            return "FRAMEFORMER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XavcFramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
