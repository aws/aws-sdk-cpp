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

        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");
        static const int WHEN_POSSIBLE_HASH = HashingUtils::HashString("WHEN_POSSIBLE");


        Eac3PassthroughControl GetEac3PassthroughControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
