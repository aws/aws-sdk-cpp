/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ChannelPipelineIdToRestart.h>
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
      namespace ChannelPipelineIdToRestartMapper
      {

        static const int PIPELINE_0_HASH = HashingUtils::HashString("PIPELINE_0");
        static const int PIPELINE_1_HASH = HashingUtils::HashString("PIPELINE_1");


        ChannelPipelineIdToRestart GetChannelPipelineIdToRestartForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PIPELINE_0_HASH)
          {
            return ChannelPipelineIdToRestart::PIPELINE_0;
          }
          else if (hashCode == PIPELINE_1_HASH)
          {
            return ChannelPipelineIdToRestart::PIPELINE_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelPipelineIdToRestart>(hashCode);
          }

          return ChannelPipelineIdToRestart::NOT_SET;
        }

        Aws::String GetNameForChannelPipelineIdToRestart(ChannelPipelineIdToRestart enumValue)
        {
          switch(enumValue)
          {
          case ChannelPipelineIdToRestart::NOT_SET:
            return {};
          case ChannelPipelineIdToRestart::PIPELINE_0:
            return "PIPELINE_0";
          case ChannelPipelineIdToRestart::PIPELINE_1:
            return "PIPELINE_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelPipelineIdToRestartMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
