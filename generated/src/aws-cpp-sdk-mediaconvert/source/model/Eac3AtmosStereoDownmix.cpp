/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosStereoDownmix.h>
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
      namespace Eac3AtmosStereoDownmixMapper
      {

        static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");
        static const int STEREO_HASH = HashingUtils::HashString("STEREO");
        static const int SURROUND_HASH = HashingUtils::HashString("SURROUND");
        static const int DPL2_HASH = HashingUtils::HashString("DPL2");


        Eac3AtmosStereoDownmix GetEac3AtmosStereoDownmixForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3AtmosStereoDownmix::NOT_INDICATED;
          }
          else if (hashCode == STEREO_HASH)
          {
            return Eac3AtmosStereoDownmix::STEREO;
          }
          else if (hashCode == SURROUND_HASH)
          {
            return Eac3AtmosStereoDownmix::SURROUND;
          }
          else if (hashCode == DPL2_HASH)
          {
            return Eac3AtmosStereoDownmix::DPL2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosStereoDownmix>(hashCode);
          }

          return Eac3AtmosStereoDownmix::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosStereoDownmix(Eac3AtmosStereoDownmix enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosStereoDownmix::NOT_INDICATED:
            return "NOT_INDICATED";
          case Eac3AtmosStereoDownmix::STEREO:
            return "STEREO";
          case Eac3AtmosStereoDownmix::SURROUND:
            return "SURROUND";
          case Eac3AtmosStereoDownmix::DPL2:
            return "DPL2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosStereoDownmixMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
