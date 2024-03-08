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
  class UpdateProbeResult
  {
  public:
    AWS_NETWORKMONITOR_API UpdateProbeResult();
    AWS_NETWORKMONITOR_API UpdateProbeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMONITOR_API UpdateProbeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated ID of the probe.</p>
     */
    inline const Aws::String& GetProbeId() const{ return m_probeId; }

    /**
     * <p>The updated ID of the probe.</p>
     */
    inline void SetProbeId(const Aws::String& value) { m_probeId = value; }

    /**
     * <p>The updated ID of the probe.</p>
     */
    inline void SetProbeId(Aws::String&& value) { m_probeId = std::move(value); }

    /**
     * <p>The updated ID of the probe.</p>
     */
    inline void SetProbeId(const char* value) { m_probeId.assign(value); }

    /**
     * <p>The updated ID of the probe.</p>
     */
    inline UpdateProbeResult& WithProbeId(const Aws::String& value) { SetProbeId(value); return *this;}

    /**
     * <p>The updated ID of the probe.</p>
     */
    inline UpdateProbeResult& WithProbeId(Aws::String&& value) { SetProbeId(std::move(value)); return *this;}

    /**
     * <p>The updated ID of the probe.</p>
     */
    inline UpdateProbeResult& WithProbeId(const char* value) { SetProbeId(value); return *this;}


    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline const Aws::String& GetProbeArn() const{ return m_probeArn; }

    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline void SetProbeArn(const Aws::String& value) { m_probeArn = value; }

    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline void SetProbeArn(Aws::String&& value) { m_probeArn = std::move(value); }

    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline void SetProbeArn(const char* value) { m_probeArn.assign(value); }

    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline UpdateProbeResult& WithProbeArn(const Aws::String& value) { SetProbeArn(value); return *this;}

    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline UpdateProbeResult& WithProbeArn(Aws::String&& value) { SetProbeArn(std::move(value)); return *this;}

    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline UpdateProbeResult& WithProbeArn(const char* value) { SetProbeArn(value); return *this;}


    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }

    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }

    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }

    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline UpdateProbeResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline UpdateProbeResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline UpdateProbeResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destination = value; }

    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }

    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline void SetDestination(const char* value) { m_destination.assign(value); }

    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline UpdateProbeResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline UpdateProbeResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline UpdateProbeResult& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The updated destination port. This will be a number between <code>1</code>
     * and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The updated destination port. This will be a number between <code>1</code>
     * and <code>65536</code>.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPort = value; }

    /**
     * <p>The updated destination port. This will be a number between <code>1</code>
     * and <code>65536</code>.</p>
     */
    inline UpdateProbeResult& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The updated protocol for the probe.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The updated protocol for the probe.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocol = value; }

    /**
     * <p>The updated protocol for the probe.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocol = std::move(value); }

    /**
     * <p>The updated protocol for the probe.</p>
     */
    inline UpdateProbeResult& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The updated protocol for the probe.</p>
     */
    inline UpdateProbeResult& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The updated packet size for the probe. </p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }

    /**
     * <p>The updated packet size for the probe. </p>
     */
    inline void SetPacketSize(int value) { m_packetSize = value; }

    /**
     * <p>The updated packet size for the probe. </p>
     */
    inline UpdateProbeResult& WithPacketSize(int value) { SetPacketSize(value); return *this;}


    /**
     * <p>The updated IP address family. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>The updated IP address family. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamily = value; }

    /**
     * <p>The updated IP address family. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamily = std::move(value); }

    /**
     * <p>The updated IP address family. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline UpdateProbeResult& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>The updated IP address family. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline UpdateProbeResult& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline UpdateProbeResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline UpdateProbeResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline UpdateProbeResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The state of the updated probe.</p>
     */
    inline const ProbeState& GetState() const{ return m_state; }

    /**
     * <p>The state of the updated probe.</p>
     */
    inline void SetState(const ProbeState& value) { m_state = value; }

    /**
     * <p>The state of the updated probe.</p>
     */
    inline void SetState(ProbeState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the updated probe.</p>
     */
    inline UpdateProbeResult& WithState(const ProbeState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the updated probe.</p>
     */
    inline UpdateProbeResult& WithState(ProbeState&& value) { SetState(std::move(value)); return *this;}


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
    inline UpdateProbeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline UpdateProbeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time and date that the probe was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The time and date that the probe was last updated.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>The time and date that the probe was last updated.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>The time and date that the probe was last updated.</p>
     */
    inline UpdateProbeResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The time and date that the probe was last updated.</p>
     */
    inline UpdateProbeResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>Update tags for a probe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Update tags for a probe.</p>
     */
    inline UpdateProbeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProbeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProbeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProbeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
