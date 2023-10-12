/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3PassthroughControl.h>
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
      namespace Eac3PassthroughControlMapper
      {

        static constexpr uint32_t NO_PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("NO_PASSTHROUGH");
        static constexpr uint32_t WHEN_POSSIBLE_HASH = ConstExprHashingUtils::HashString("WHEN_POSSIBLE");


        Eac3PassthroughControl GetEac3PassthroughControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return Eac3PassthroughControl::NO_PASSTHROUGH;
          }
          else if (hashCode == WHEN_POSSIBLE_HASH)
          {
            return Eac3PassthroughControl::WHEN_POSSIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3PassthroughControl>(hashCode);
          }

          return Eac3PassthroughControl::NOT_SET;
        }

        Aws::String GetNameForEac3PassthroughControl(Eac3PassthroughControl enumValue)
        {
          switch(enumValue)
          {
          case Eac3PassthroughControl::NOT_SET:
            return {};
          case Eac3PassthroughControl::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case Eac3PassthroughControl::WHEN_POSSIBLE:
            return "WHEN_POSSIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3PassthroughControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
