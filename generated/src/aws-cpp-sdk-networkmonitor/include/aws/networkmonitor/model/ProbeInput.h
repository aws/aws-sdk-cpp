﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/Protocol.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NetworkMonitor
{
namespace Model
{

  /**
   * <p>Defines a probe when creating a probe or monitor.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/ProbeInput">AWS
   * API Reference</a></p>
   */
  class ProbeInput
  {
  public:
    AWS_NETWORKMONITOR_API ProbeInput();
    AWS_NETWORKMONITOR_API ProbeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API ProbeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline ProbeInput& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline ProbeInput& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline ProbeInput& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IP address. This must be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline ProbeInput& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline ProbeInput& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline ProbeInput& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline ProbeInput& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This must be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline ProbeInput& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline ProbeInput& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the packets sent between the source and destination. This must be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }
    inline ProbeInput& WithPacketSize(int value) { SetPacketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ProbeInput& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ProbeInput& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ProbeInput& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ProbeInput& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ProbeInput& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ProbeInput& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ProbeInput& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ProbeInput& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ProbeInput& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_packetSize;
    bool m_packetSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
