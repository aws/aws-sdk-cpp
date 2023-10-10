/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kProfileCodecProfile.h>
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
      namespace Xavc4kProfileCodecProfileMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int HIGH_422_HASH = HashingUtils::HashString("HIGH_422");


        Xavc4kProfileCodecProfile GetXavc4kProfileCodecProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return Xavc4kProfileCodecProfile::HIGH;
          }
          else if (hashCode == HIGH_422_HASH)
          {
            return Xavc4kProfileCodecProfile::HIGH_422;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Xavc4kProfileCodecProfile>(hashCode);
          }

          return Xavc4kProfileCodecProfile::NOT_SET;
        }

        Aws::String GetNameForXavc4kProfileCodecProfile(Xavc4kProfileCodecProfile enumValue)
        {
          switch(enumValue)
          {
          case Xavc4kProfileCodecProfile::NOT_SET:
            return {};
          case Xavc4kProfileCodecProfile::HIGH:
            return "HIGH";
          case Xavc4kProfileCodecProfile::HIGH_422:
            return "HIGH_422";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Xavc4kProfileCodecProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
