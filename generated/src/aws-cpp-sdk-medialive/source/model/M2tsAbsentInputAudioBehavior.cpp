/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsAbsentInputAudioBehavior.h>
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
      namespace M2tsAbsentInputAudioBehaviorMapper
      {

        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int ENCODE_SILENCE_HASH = HashingUtils::HashString("ENCODE_SILENCE");


        M2tsAbsentInputAudioBehavior GetM2tsAbsentInputAudioBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DROP_HASH)
          {
            return M2tsAbsentInputAudioBehavior::DROP;
          }
          else if (hashCode == ENCODE_SILENCE_HASH)
          {
            return M2tsAbsentInputAudioBehavior::ENCODE_SILENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAbsentInputAudioBehavior>(hashCode);
          }

          return M2tsAbsentInputAudioBehavior::NOT_SET;
        }

        Aws::String GetNameForM2tsAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior enumValue)
        {
          switch(enumValue)
          {
          case M2tsAbsentInputAudioBehavior::DROP:
            return "DROP";
          case M2tsAbsentInputAudioBehavior::ENCODE_SILENCE:
            return "ENCODE_SILENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsAbsentInputAudioBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
