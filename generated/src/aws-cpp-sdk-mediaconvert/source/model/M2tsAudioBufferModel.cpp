/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsAudioBufferModel.h>
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
      namespace M2tsAudioBufferModelMapper
      {

        static const int DVB_HASH = HashingUtils::HashString("DVB");
        static const int ATSC_HASH = HashingUtils::HashString("ATSC");


        M2tsAudioBufferModel GetM2tsAudioBufferModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DVB_HASH)
          {
            return M2tsAudioBufferModel::DVB;
          }
          else if (hashCode == ATSC_HASH)
          {
            return M2tsAudioBufferModel::ATSC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAudioBufferModel>(hashCode);
          }

          return M2tsAudioBufferModel::NOT_SET;
        }

        Aws::String GetNameForM2tsAudioBufferModel(M2tsAudioBufferModel enumValue)
        {
          switch(enumValue)
          {
          case M2tsAudioBufferModel::DVB:
            return "DVB";
          case M2tsAudioBufferModel::ATSC:
            return "ATSC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsAudioBufferModelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
