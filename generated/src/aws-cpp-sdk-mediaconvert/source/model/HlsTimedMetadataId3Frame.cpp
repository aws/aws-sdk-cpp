/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsTimedMetadataId3Frame.h>
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
      namespace HlsTimedMetadataId3FrameMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t PRIV_HASH = ConstExprHashingUtils::HashString("PRIV");
        static constexpr uint32_t TDRL_HASH = ConstExprHashingUtils::HashString("TDRL");


        HlsTimedMetadataId3Frame GetHlsTimedMetadataId3FrameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return HlsTimedMetadataId3Frame::NONE;
          }
          else if (hashCode == PRIV_HASH)
          {
            return HlsTimedMetadataId3Frame::PRIV;
          }
          else if (hashCode == TDRL_HASH)
          {
            return HlsTimedMetadataId3Frame::TDRL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsTimedMetadataId3Frame>(hashCode);
          }

          return HlsTimedMetadataId3Frame::NOT_SET;
        }

        Aws::String GetNameForHlsTimedMetadataId3Frame(HlsTimedMetadataId3Frame enumValue)
        {
          switch(enumValue)
          {
          case HlsTimedMetadataId3Frame::NOT_SET:
            return {};
          case HlsTimedMetadataId3Frame::NONE:
            return "NONE";
          case HlsTimedMetadataId3Frame::PRIV:
            return "PRIV";
          case HlsTimedMetadataId3Frame::TDRL:
            return "TDRL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsTimedMetadataId3FrameMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
