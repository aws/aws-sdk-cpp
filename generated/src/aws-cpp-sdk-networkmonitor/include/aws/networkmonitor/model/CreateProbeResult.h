/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/Protocol.h>
#include <aws/networkmonitor/model/AddressFamily.h>
#include <aws/networkmonitor/model/ProbeState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkMonitor
{
namespace Model
{
  class CreateProbeResult
  {
  public:
    AWS_NETWORKMONITOR_API CreateProbeResult();
    AWS_NETWORKMONITOR_API CreateProbeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMONITOR_API CreateProbeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline const Aws::String& GetProbeId() const{ return m_probeId; }

    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline void SetProbeId(const Aws::String& value) { m_probeId = value; }

    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline void SetProbeId(Aws::String&& value) { m_probeId = std::move(value); }

    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline void SetProbeId(const char* value) { m_probeId.assign(value); }

    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline CreateProbeResult& WithProbeId(const Aws::String& value) { SetProbeId(value); return *this;}

    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline CreateProbeResult& WithProbeId(Aws::String&& value) { SetProbeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the probe for which details are returned.</p>
     */
    inline CreateProbeResult& WithProbeId(const char* value) { SetProbeId(value); return *this;}


    /**
     * <p>The ARN of the probe.</p>
     */
    inline const Aws::String& GetProbeArn() const{ return m_probeArn; }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline void SetProbeArn(const Aws::String& value) { m_probeArn = value; }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline void SetProbeArn(Aws::String&& value) { m_probeArn = std::move(value); }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline void SetProbeArn(const char* value) { m_probeArn.assign(value); }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline CreateProbeResult& WithProbeArn(const Aws::String& value) { SetProbeArn(value); return *this;}

    /**
     * <p>The ARN of the probe.</p>
     */
    inline CreateProbeResult& WithProbeArn(Aws::String&& value) { SetProbeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the probe.</p>
     */
    inline CreateProbeResult& WithProbeArn(const char* value) { SetProbeArn(value); return *this;}


    /**
     * <p>The ARN of the probe.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the probe.</p>
     */
    inline CreateProbeResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the probe.</p>
     */
    inline CreateProbeResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the probe.</p>
     */
    inline CreateProbeResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destination = value; }

    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }

    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline void SetDestination(const char* value) { m_destination.assign(value); }

    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline CreateProbeResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline CreateProbeResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The destination IP address for the monitor. This will be either an IPv4 or
     * IPv6 address.</p>
     */
    inline CreateProbeResult& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPort = value; }

    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline CreateProbeResult& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocol = value; }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline CreateProbeResult& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline CreateProbeResult& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }

    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline void SetPacketSize(int value) { m_packetSize = value; }

    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline CreateProbeResult& WithPacketSize(int value) { SetPacketSize(value); return *this;}


    /**
     * <p>Indicates whether the IP address is <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>Indicates whether the IP address is <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamily = value; }

    /**
     * <p>Indicates whether the IP address is <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamily = std::move(value); }

    /**
     * <p>Indicates whether the IP address is <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline CreateProbeResult& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>Indicates whether the IP address is <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline CreateProbeResult& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline CreateProbeResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline CreateProbeResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source VPC or subnet.</p>
     */
    inline CreateProbeResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The state of the probe.</p>
     */
    inline const ProbeState& GetState() const{ return m_state; }

    /**
     * <p>The state of the probe.</p>
     */
    inline void SetState(const ProbeState& value) { m_state = value; }

    /**
     * <p>The state of the probe.</p>
     */
    inline void SetState(ProbeState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the probe.</p>
     */
    inline CreateProbeResult& WithState(const ProbeState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the probe.</p>
     */
    inline CreateProbeResult& WithState(ProbeState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline CreateProbeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline CreateProbeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time and date when the probe was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The time and date when the probe was last modified. </p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>The time and date when the probe was last modified. </p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>The time and date when the probe was last modified. </p>
     */
    inline CreateProbeResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The time and date when the probe was last modified. </p>
     */
    inline CreateProbeResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the probe.</p>
     */
    inline CreateProbeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProbeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProbeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProbeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_probeId;

    Aws::String m_probeArn;

    Aws::String m_sourceArn;

    Aws::String m_destination;

    int m_destinationPort;

    Protocol m_protocol;

    int m_packetSize;

    AddressFamily m_addressFamily;

    Aws::String m_vpcId;

    ProbeState m_state;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
