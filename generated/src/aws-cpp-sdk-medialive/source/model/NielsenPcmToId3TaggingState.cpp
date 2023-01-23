/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenPcmToId3TaggingState.h>
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
      namespace NielsenPcmToId3TaggingStateMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        NielsenPcmToId3TaggingState GetNielsenPcmToId3TaggingStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return NielsenPcmToId3TaggingState::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return NielsenPcmToId3TaggingState::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenPcmToId3TaggingState>(hashCode);
          }

          return NielsenPcmToId3TaggingState::NOT_SET;
        }

        Aws::String GetNameForNielsenPcmToId3TaggingState(NielsenPcmToId3TaggingState enumValue)
        {
          switch(enumValue)
          {
          case NielsenPcmToId3TaggingState::DISABLED:
            return "DISABLED";
          case NielsenPcmToId3TaggingState::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenPcmToId3TaggingStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
