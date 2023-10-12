/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UdpTimedMetadataId3Frame.h>
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
      namespace UdpTimedMetadataId3FrameMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t PRIV_HASH = ConstExprHashingUtils::HashString("PRIV");
        static constexpr uint32_t TDRL_HASH = ConstExprHashingUtils::HashString("TDRL");


        UdpTimedMetadataId3Frame GetUdpTimedMetadataId3FrameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return UdpTimedMetadataId3Frame::NONE;
          }
          else if (hashCode == PRIV_HASH)
          {
            return UdpTimedMetadataId3Frame::PRIV;
          }
          else if (hashCode == TDRL_HASH)
          {
            return UdpTimedMetadataId3Frame::TDRL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UdpTimedMetadataId3Frame>(hashCode);
          }

          return UdpTimedMetadataId3Frame::NOT_SET;
        }

        Aws::String GetNameForUdpTimedMetadataId3Frame(UdpTimedMetadataId3Frame enumValue)
        {
          switch(enumValue)
          {
          case UdpTimedMetadataId3Frame::NOT_SET:
            return {};
          case UdpTimedMetadataId3Frame::NONE:
            return "NONE";
          case UdpTimedMetadataId3Frame::PRIV:
            return "PRIV";
          case UdpTimedMetadataId3Frame::TDRL:
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

      } // namespace UdpTimedMetadataId3FrameMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
