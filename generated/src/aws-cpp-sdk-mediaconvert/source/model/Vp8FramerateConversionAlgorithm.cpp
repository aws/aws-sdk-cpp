﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp8FramerateConversionAlgorithm.h>
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
      namespace Vp8FramerateConversionAlgorithmMapper
      {

        static const int DUPLICATE_DROP_HASH = HashingUtils::HashString("DUPLICATE_DROP");
        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");
        static const int FRAMEFORMER_HASH = HashingUtils::HashString("FRAMEFORMER");
        static const int MAINTAIN_FRAME_COUNT_HASH = HashingUtils::HashString("MAINTAIN_FRAME_COUNT");


        Vp8FramerateConversionAlgorithm GetVp8FramerateConversionAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_DROP_HASH)
          {
            return Vp8FramerateConversionAlgorithm::DUPLICATE_DROP;
          }
          else if (hashCode == INTERPOLATE_HASH)
          {
            return Vp8FramerateConversionAlgorithm::INTERPOLATE;
          }
          else if (hashCode == FRAMEFORMER_HASH)
          {
            return Vp8FramerateConversionAlgorithm::FRAMEFORMER;
          }
          else if (hashCode == MAINTAIN_FRAME_COUNT_HASH)
          {
            return Vp8FramerateConversionAlgorithm::MAINTAIN_FRAME_COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp8FramerateConversionAlgorithm>(hashCode);
          }

          return Vp8FramerateConversionAlgorithm::NOT_SET;
        }

        Aws::String GetNameForVp8FramerateConversionAlgorithm(Vp8FramerateConversionAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case Vp8FramerateConversionAlgorithm::NOT_SET:
            return {};
          case Vp8FramerateConversionAlgorithm::DUPLICATE_DROP:
            return "DUPLICATE_DROP";
          case Vp8FramerateConversionAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case Vp8FramerateConversionAlgorithm::FRAMEFORMER:
            return "FRAMEFORMER";
          case Vp8FramerateConversionAlgorithm::MAINTAIN_FRAME_COUNT:
            return "MAINTAIN_FRAME_COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Vp8FramerateConversionAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
