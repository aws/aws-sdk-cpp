/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EmbeddedScte20Detection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace EmbeddedScte20DetectionMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        EmbeddedScte20Detection GetEmbeddedScte20DetectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return EmbeddedScte20Detection::AUTO;
          }
          else if (hashCode == OFF_HASH)
          {
            return EmbeddedScte20Detection::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmbeddedScte20Detection>(hashCode);
          }

          return EmbeddedScte20Detection::NOT_SET;
        }

        Aws::String GetNameForEmbeddedScte20Detection(EmbeddedScte20Detection enumValue)
        {
          switch(enumValue)
          {
          case EmbeddedScte20Detection::AUTO:
            return "AUTO";
          case EmbeddedScte20Detection::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmbeddedScte20DetectionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
