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


    ///@{
    /**
     * <p>The updated ID of the probe.</p>
     */
    inline const Aws::String& GetProbeId() const{ return m_probeId; }
    inline void SetProbeId(const Aws::String& value) { m_probeId = value; }
    inline void SetProbeId(Aws::String&& value) { m_probeId = std::move(value); }
    inline void SetProbeId(const char* value) { m_probeId.assign(value); }
    inline UpdateProbeResult& WithProbeId(const Aws::String& value) { SetProbeId(value); return *this;}
    inline UpdateProbeResult& WithProbeId(Aws::String&& value) { SetProbeId(std::move(value)); return *this;}
    inline UpdateProbeResult& WithProbeId(const char* value) { SetProbeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated ARN of the probe.</p>
     */
    inline const Aws::String& GetProbeArn() const{ return m_probeArn; }
    inline void SetProbeArn(const Aws::String& value) { m_probeArn = value; }
    inline void SetProbeArn(Aws::String&& value) { m_probeArn = std::move(value); }
    inline void SetProbeArn(const char* value) { m_probeArn.assign(value); }
    inline UpdateProbeResult& WithProbeArn(const Aws::String& value) { SetProbeArn(value); return *this;}
    inline UpdateProbeResult& WithProbeArn(Aws::String&& value) { SetProbeArn(std::move(value)); return *this;}
    inline UpdateProbeResult& WithProbeArn(const char* value) { SetProbeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated ARN of the source subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline UpdateProbeResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline UpdateProbeResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline UpdateProbeResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated destination IP address for the probe.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline void SetDestination(const Aws::String& value) { m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destination.assign(value); }
    inline UpdateProbeResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline UpdateProbeResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline UpdateProbeResult& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated destination port. This must be a number between <code>1</code>
     * and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }
    inline void SetDestinationPort(int value) { m_destinationPort = value; }
    inline UpdateProbeResult& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated protocol for the probe.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline void SetProtocol(const Protocol& value) { m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocol = std::move(value); }
    inline UpdateProbeResult& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline UpdateProbeResult& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated packet size for the probe. </p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }
    inline void SetPacketSize(int value) { m_packetSize = value; }
    inline UpdateProbeResult& WithPacketSize(int value) { SetPacketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated IP address family. This must be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamily = value; }
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamily = std::move(value); }
    inline UpdateProbeResult& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}
    inline UpdateProbeResult& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated ID of the source VPC subnet ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline UpdateProbeResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline UpdateProbeResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline UpdateProbeResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the updated probe.</p>
     */
    inline const ProbeState& GetState() const{ return m_state; }
    inline void SetState(const ProbeState& value) { m_state = value; }
    inline void SetState(ProbeState&& value) { m_state = std::move(value); }
    inline UpdateProbeResult& WithState(const ProbeState& value) { SetState(value); return *this;}
    inline UpdateProbeResult& WithState(ProbeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that the probe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateProbeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateProbeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that the probe was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline UpdateProbeResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline UpdateProbeResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update tags for a probe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateProbeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateProbeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateProbeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateProbeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateProbeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateProbeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateProbeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateProbeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateProbeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProbeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProbeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProbeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
