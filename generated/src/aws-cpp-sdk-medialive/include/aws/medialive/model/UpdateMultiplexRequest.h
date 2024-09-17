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
    AWS_MEDIALIVE_API UpdateMultiplexRequest();

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
    inline const Aws::String& GetMultiplexId() const{ return m_multiplexId; }
    inline bool MultiplexIdHasBeenSet() const { return m_multiplexIdHasBeenSet; }
    inline void SetMultiplexId(const Aws::String& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = value; }
    inline void SetMultiplexId(Aws::String&& value) { m_multiplexIdHasBeenSet = true; m_multiplexId = std::move(value); }
    inline void SetMultiplexId(const char* value) { m_multiplexIdHasBeenSet = true; m_multiplexId.assign(value); }
    inline UpdateMultiplexRequest& WithMultiplexId(const Aws::String& value) { SetMultiplexId(value); return *this;}
    inline UpdateMultiplexRequest& WithMultiplexId(Aws::String&& value) { SetMultiplexId(std::move(value)); return *this;}
    inline UpdateMultiplexRequest& WithMultiplexId(const char* value) { SetMultiplexId(value); return *this;}
    ///@}

    ///@{
    /**
     * The new settings for a multiplex.
     */
    inline const MultiplexSettings& GetMultiplexSettings() const{ return m_multiplexSettings; }
    inline bool MultiplexSettingsHasBeenSet() const { return m_multiplexSettingsHasBeenSet; }
    inline void SetMultiplexSettings(const MultiplexSettings& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = value; }
    inline void SetMultiplexSettings(MultiplexSettings&& value) { m_multiplexSettingsHasBeenSet = true; m_multiplexSettings = std::move(value); }
    inline UpdateMultiplexRequest& WithMultiplexSettings(const MultiplexSettings& value) { SetMultiplexSettings(value); return *this;}
    inline UpdateMultiplexRequest& WithMultiplexSettings(MultiplexSettings&& value) { SetMultiplexSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of the multiplex.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateMultiplexRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMultiplexRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMultiplexRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>& GetPacketIdentifiersMapping() const{ return m_packetIdentifiersMapping; }
    inline bool PacketIdentifiersMappingHasBeenSet() const { return m_packetIdentifiersMappingHasBeenSet; }
    inline void SetPacketIdentifiersMapping(const Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping = value; }
    inline void SetPacketIdentifiersMapping(Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>&& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping = std::move(value); }
    inline UpdateMultiplexRequest& WithPacketIdentifiersMapping(const Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>& value) { SetPacketIdentifiersMapping(value); return *this;}
    inline UpdateMultiplexRequest& WithPacketIdentifiersMapping(Aws::Map<Aws::String, MultiplexProgramPacketIdentifiersMap>&& value) { SetPacketIdentifiersMapping(std::move(value)); return *this;}
    inline UpdateMultiplexRequest& AddPacketIdentifiersMapping(const Aws::String& key, const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(key, value); return *this; }
    inline UpdateMultiplexRequest& AddPacketIdentifiersMapping(Aws::String&& key, const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(std::move(key), value); return *this; }
    inline UpdateMultiplexRequest& AddPacketIdentifiersMapping(const Aws::String& key, MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(key, std::move(value)); return *this; }
    inline UpdateMultiplexRequest& AddPacketIdentifiersMapping(Aws::String&& key, MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateMultiplexRequest& AddPacketIdentifiersMapping(const char* key, MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(key, std::move(value)); return *this; }
    inline UpdateMultiplexRequest& AddPacketIdentifiersMapping(const char* key, const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMappingHasBeenSet = true; m_packetIdentifiersMapping.emplace(key, value); return *this; }
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
