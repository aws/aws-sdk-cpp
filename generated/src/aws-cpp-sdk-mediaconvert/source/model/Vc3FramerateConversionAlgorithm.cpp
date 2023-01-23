/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3FramerateConversionAlgorithm.h>
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
      namespace Vc3FramerateConversionAlgorithmMapper
      {

        static const int DUPLICATE_DROP_HASH = HashingUtils::HashString("DUPLICATE_DROP");
        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");
        static const int FRAMEFORMER_HASH = HashingUtils::HashString("FRAMEFORMER");


        Vc3FramerateConversionAlgorithm GetVc3FramerateConversionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return Vc3FramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return Vc3FramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return Vc3FramerateConversionAlgorithm::FRAMEFORMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vc3FramerateConversionAlgorithm>(hashCode);
          }

          return Vc3FramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForVc3FramerateConversionAlgorithm(Vc3FramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case Vc3FramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case Vc3FramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case Vc3FramerateConversionAlgorithm::FRAMEFORMER:
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

      } // namespace Vc3FramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
