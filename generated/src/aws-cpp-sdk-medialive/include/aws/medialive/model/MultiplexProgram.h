/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSettings.h>
#include <aws/medialive/model/MultiplexProgramPacketIdentifiersMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexProgramPipelineDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * The multiplex program object.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgram">AWS
   * API Reference</a></p>
   */
  class MultiplexProgram
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgram();
    AWS_MEDIALIVE_API MultiplexProgram(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The MediaLive channel associated with the program.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline MultiplexProgram& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline MultiplexProgram& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline MultiplexProgram& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const{ return m_multiplexProgramSettings; }
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }
    inline void SetMultiplexProgramSettings(const MultiplexProgramSettings& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = value; }
    inline void SetMultiplexProgramSettings(MultiplexProgramSettings&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::move(value); }
    inline MultiplexProgram& WithMultiplexProgramSettings(const MultiplexProgramSettings& value) { SetMultiplexProgramSettings(value); return *this;}
    inline MultiplexProgram& WithMultiplexProgramSettings(MultiplexProgramSettings&& value) { SetMultiplexProgramSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The packet identifier map for this multiplex program.
     */
    inline const MultiplexProgramPacketIdentifiersMap& GetPacketIdentifiersMap() const{ return m_packetIdentifiersMap; }
    inline bool PacketIdentifiersMapHasBeenSet() const { return m_packetIdentifiersMapHasBeenSet; }
    inline void SetPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMapHasBeenSet = true; m_packetIdentifiersMap = value; }
    inline void SetPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMapHasBeenSet = true; m_packetIdentifiersMap = std::move(value); }
    inline MultiplexProgram& WithPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { SetPacketIdentifiersMap(value); return *this;}
    inline MultiplexProgram& WithPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { SetPacketIdentifiersMap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline const Aws::Vector<MultiplexProgramPipelineDetail>& GetPipelineDetails() const{ return m_pipelineDetails; }
    inline bool PipelineDetailsHasBeenSet() const { return m_pipelineDetailsHasBeenSet; }
    inline void SetPipelineDetails(const Aws::Vector<MultiplexProgramPipelineDetail>& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails = value; }
    inline void SetPipelineDetails(Aws::Vector<MultiplexProgramPipelineDetail>&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails = std::move(value); }
    inline MultiplexProgram& WithPipelineDetails(const Aws::Vector<MultiplexProgramPipelineDetail>& value) { SetPipelineDetails(value); return *this;}
    inline MultiplexProgram& WithPipelineDetails(Aws::Vector<MultiplexProgramPipelineDetail>&& value) { SetPipelineDetails(std::move(value)); return *this;}
    inline MultiplexProgram& AddPipelineDetails(const MultiplexProgramPipelineDetail& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails.push_back(value); return *this; }
    inline MultiplexProgram& AddPipelineDetails(MultiplexProgramPipelineDetail&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the multiplex program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }
    inline MultiplexProgram& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline MultiplexProgram& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline MultiplexProgram& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    MultiplexProgramSettings m_multiplexProgramSettings;
    bool m_multiplexProgramSettingsHasBeenSet = false;

    MultiplexProgramPacketIdentifiersMap m_packetIdentifiersMap;
    bool m_packetIdentifiersMapHasBeenSet = false;

    Aws::Vector<MultiplexProgramPipelineDetail> m_pipelineDetails;
    bool m_pipelineDetailsHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
