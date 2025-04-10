/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafTimedMetadataId3Frame.h>
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
      namespace CmafTimedMetadataId3FrameMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PRIV_HASH = HashingUtils::HashString("PRIV");
        static const int TDRL_HASH = HashingUtils::HashString("TDRL");


        CmafTimedMetadataId3Frame GetCmafTimedMetadataId3FrameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return CmafTimedMetadataId3Frame::NONE;
          }
          else if (hashCode == PRIV_HASH)
          {
            return CmafTimedMetadataId3Frame::PRIV;
          }
          else if (hashCode == TDRL_HASH)
          {
            return CmafTimedMetadataId3Frame::TDRL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafTimedMetadataId3Frame>(hashCode);
          }

          return CmafTimedMetadataId3Frame::NOT_SET;
        }

        Aws::String GetNameForCmafTimedMetadataId3Frame(CmafTimedMetadataId3Frame enumValue)
        {
          switch(enumValue)
          {
          case CmafTimedMetadataId3Frame::NOT_SET:
            return {};
          case CmafTimedMetadataId3Frame::NONE:
            return "NONE";
          case CmafTimedMetadataId3Frame::PRIV:
            return "PRIV";
          case CmafTimedMetadataId3Frame::TDRL:
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

      } // namespace CmafTimedMetadataId3FrameMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
