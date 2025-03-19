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
    AWS_MEDIALIVE_API MultiplexProgram() = default;
    AWS_MEDIALIVE_API MultiplexProgram(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The MediaLive channel associated with the program.
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    MultiplexProgram& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const { return m_multiplexProgramSettings; }
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }
    template<typename MultiplexProgramSettingsT = MultiplexProgramSettings>
    void SetMultiplexProgramSettings(MultiplexProgramSettingsT&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::forward<MultiplexProgramSettingsT>(value); }
    template<typename MultiplexProgramSettingsT = MultiplexProgramSettings>
    MultiplexProgram& WithMultiplexProgramSettings(MultiplexProgramSettingsT&& value) { SetMultiplexProgramSettings(std::forward<MultiplexProgramSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The packet identifier map for this multiplex program.
     */
    inline const MultiplexProgramPacketIdentifiersMap& GetPacketIdentifiersMap() const { return m_packetIdentifiersMap; }
    inline bool PacketIdentifiersMapHasBeenSet() const { return m_packetIdentifiersMapHasBeenSet; }
    template<typename PacketIdentifiersMapT = MultiplexProgramPacketIdentifiersMap>
    void SetPacketIdentifiersMap(PacketIdentifiersMapT&& value) { m_packetIdentifiersMapHasBeenSet = true; m_packetIdentifiersMap = std::forward<PacketIdentifiersMapT>(value); }
    template<typename PacketIdentifiersMapT = MultiplexProgramPacketIdentifiersMap>
    MultiplexProgram& WithPacketIdentifiersMap(PacketIdentifiersMapT&& value) { SetPacketIdentifiersMap(std::forward<PacketIdentifiersMapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline const Aws::Vector<MultiplexProgramPipelineDetail>& GetPipelineDetails() const { return m_pipelineDetails; }
    inline bool PipelineDetailsHasBeenSet() const { return m_pipelineDetailsHasBeenSet; }
    template<typename PipelineDetailsT = Aws::Vector<MultiplexProgramPipelineDetail>>
    void SetPipelineDetails(PipelineDetailsT&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails = std::forward<PipelineDetailsT>(value); }
    template<typename PipelineDetailsT = Aws::Vector<MultiplexProgramPipelineDetail>>
    MultiplexProgram& WithPipelineDetails(PipelineDetailsT&& value) { SetPipelineDetails(std::forward<PipelineDetailsT>(value)); return *this;}
    template<typename PipelineDetailsT = MultiplexProgramPipelineDetail>
    MultiplexProgram& AddPipelineDetails(PipelineDetailsT&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails.emplace_back(std::forward<PipelineDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the multiplex program.
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    MultiplexProgram& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
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
