/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MsSmoothAudioDeduplication.h>
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
      namespace MsSmoothAudioDeduplicationMapper
      {

        static constexpr uint32_t COMBINE_DUPLICATE_STREAMS_HASH = ConstExprHashingUtils::HashString("COMBINE_DUPLICATE_STREAMS");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        MsSmoothAudioDeduplication GetMsSmoothAudioDeduplicationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMBINE_DUPLICATE_STREAMS_HASH)
          {
            return MsSmoothAudioDeduplication::COMBINE_DUPLICATE_STREAMS;
          }
          else if (hashCode == NONE_HASH)
          {
            return MsSmoothAudioDeduplication::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MsSmoothAudioDeduplication>(hashCode);
          }

          return MsSmoothAudioDeduplication::NOT_SET;
        }

        Aws::String GetNameForMsSmoothAudioDeduplication(MsSmoothAudioDeduplication enumValue)
        {
          switch(enumValue)
          {
          case MsSmoothAudioDeduplication::NOT_SET:
            return {};
          case MsSmoothAudioDeduplication::COMBINE_DUPLICATE_STREAMS:
            return "COMBINE_DUPLICATE_STREAMS";
          case MsSmoothAudioDeduplication::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MsSmoothAudioDeduplicationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
