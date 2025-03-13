/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/MultiplexProgramPacketIdentifiersMap.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update a multiplex.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexRequest">AWS
   * API Reference</a></p>
   */
  class UpdateMultiplexRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateMultiplexRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMultiplex"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * ID of the multiplex to update.
     */
    inline const Aws::String& GetMultiplexId() const { return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    template<typename MultiplexIdT = Aws::String>
    void SetMultiplexId(MultiplexIdT&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::forward<MultiplexIdT>(value); }
    template<typename MultiplexIdT = Aws::String>
    UpdateMultiplexRequest& WithMultiplexId(MultiplexIdT&& value) { SetMultiplexId(std::forward<MultiplexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The new settings for a multiplex.
     */
    inline const MultiplexSettings& GetMultiplexSettings() const { return m_multiplexSettings; }
    inline bool MultiplexSettingsHasBeenSet() const { return m_multiplexSettingsHasBeenSet; }
    template<typename MultiplexSettingsT = MultiplexSettings>
    void SetMultiplexSettings(MultiplexSettingsT&& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = std::forward<MultiplexSettingsT>(value); }
    template<typename MultiplexSettingsT = MultiplexSettings>
    UpdateMultiplexRequest& WithMultiplexSettings(MultiplexSettingsT&& value) { SetMultiplexSettings(std::forward<MultiplexSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of the multiplex.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateMultiplexRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>& GetPacketIdentifiersMapping() const { return m_packetIdentifiersMapping; }
    inline bool PacketIdentifiersMappingHasBeenSet() const { return m_packetIdentifiersMappingHasBeenSet; }
    template<typename PacketIdentifiersMappingT = Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>>
    void SetPacketIdentifiersMapping(PacketIdentifiersMappingT&& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping = std::forward<PacketIdentifiersMappingT>(value); }
    template<typename PacketIdentifiersMappingT = Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>>
    UpdateMultiplexRequest& WithPacketIdentifiersMapping(PacketIdentifiersMappingT&& value) { SetPacketIdentifiersMapping(std::forward<PacketIdentifiersMappingT>(value)); return *this;}
    template<typename PacketIdentifiersMappingKeyT = Aws::String, typename PacketIdentifiersMappingValueT = MultiplexProgramPacketIdentifiersMap>
    UpdateMultiplexRequest& AddPacketIdentifiersMapping(PacketIdentifiersMappingKeyT&& key, PacketIdentifiersMappingValueT&& value) {
      m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(std::forward<PacketIdentifiersMappingKeyT>(key), std::forward<PacketIdentifiersMappingValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_multiplexId;
    bool m_multiplexIdHasBeenSet = false;

    MultiplexSettings m_multiplexSettings;
    bool m_multiplexSettingsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap> m_packetIdentifiersMapping;
    bool m_packetIdentifiersMappingHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
