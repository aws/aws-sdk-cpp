/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte20Convert608To708.h>
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
      namespace Scte20Convert608To708Mapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t UPCONVERT_HASH = ConstExprHashingUtils::HashString("UPCONVERT");


        Scte20Convert608To708 GetScte20Convert608To708ForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return Scte20Convert608To708::DISABLED;
          }
          else if (hashCode == UPCONVERT_HASH)
          {
            return Scte20Convert608To708::UPCONVERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte20Convert608To708>(hashCode);
          }

          return Scte20Convert608To708::NOT_SET;
        }

        Aws::String GetNameForScte20Convert608To708(Scte20Convert608To708 enumValue)
        {
          switch(enumValue)
          {
          case Scte20Convert608To708::NOT_SET:
            return {};
          case Scte20Convert608To708::DISABLED:
            return "DISABLED";
          case Scte20Convert608To708::UPCONVERT:
            return "UPCONVERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte20Convert608To708Mapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
