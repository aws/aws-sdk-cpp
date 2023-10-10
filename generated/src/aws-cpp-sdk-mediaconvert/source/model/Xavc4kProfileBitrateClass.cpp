/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kProfileBitrateClass.h>
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
      namespace Xavc4kProfileBitrateClassMapper
      {

        static const int BITRATE_CLASS_100_HASH = HashingUtils::HashString("BITRATE_CLASS_100");
        static const int BITRATE_CLASS_140_HASH = HashingUtils::HashString("BITRATE_CLASS_140");
        static const int BITRATE_CLASS_200_HASH = HashingUtils::HashString("BITRATE_CLASS_200");


        Xavc4kProfileBitrateClass GetXavc4kProfileBitrateClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BITRATE_CLASS_100_HASH)
          {
            return Xavc4kProfileBitrateClass::BITRATE_CLASS_100;
          }
          else if (hashCode == BITRATE_CLASS_140_HASH)
          {
            return Xavc4kProfileBitrateClass::BITRATE_CLASS_140;
          }
          else if (hashCode == BITRATE_CLASS_200_HASH)
          {
            return Xavc4kProfileBitrateClass::BITRATE_CLASS_200;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Xavc4kProfileBitrateClass>(hashCode);
          }

          return Xavc4kProfileBitrateClass::NOT_SET;
        }

        Aws::String GetNameForXavc4kProfileBitrateClass(Xavc4kProfileBitrateClass enumValue)
        {
          switch(enumValue)
          {
          case Xavc4kProfileBitrateClass::NOT_SET:
            return {};
          case Xavc4kProfileBitrateClass::BITRATE_CLASS_100:
            return "BITRATE_CLASS_100";
          case Xavc4kProfileBitrateClass::BITRATE_CLASS_140:
            return "BITRATE_CLASS_140";
          case Xavc4kProfileBitrateClass::BITRATE_CLASS_200:
            return "BITRATE_CLASS_200";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Xavc4kProfileBitrateClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
