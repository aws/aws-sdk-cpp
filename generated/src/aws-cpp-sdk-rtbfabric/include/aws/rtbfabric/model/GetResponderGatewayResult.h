/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/model/ResponderGatewayStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rtbfabric/model/Protocol.h>
#include <aws/rtbfabric/model/TrustStoreConfiguration.h>
#include <aws/rtbfabric/model/ManagedEndpointConfiguration.h>
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
namespace RTBFabric
{
namespace Model
{
  class GetResponderGatewayResult
  {
  public:
    AWS_RTBFABRIC_API GetResponderGatewayResult() = default;
    AWS_RTBFABRIC_API GetResponderGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RTBFABRIC_API GetResponderGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Virtual Private Cloud (VPC).</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    GetResponderGatewayResult& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    GetResponderGatewayResult& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    GetResponderGatewayResult& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    GetResponderGatewayResult& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    GetResponderGatewayResult& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline ResponderGatewayStatus GetStatus() const { return m_status; }
    inline void SetStatus(ResponderGatewayStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetResponderGatewayResult& WithStatus(ResponderGatewayStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the responder gateway.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetResponderGatewayResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the responder gateway was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetResponderGatewayResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the responder gateway was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetResponderGatewayResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the responder gateway.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetResponderGatewayResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The networking port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GetResponderGatewayResult& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The networking protocol.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline GetResponderGatewayResult& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the trust store.</p>
     */
    inline const TrustStoreConfiguration& GetTrustStoreConfiguration() const { return m_trustStoreConfiguration; }
    template<typename TrustStoreConfigurationT = TrustStoreConfiguration>
    void SetTrustStoreConfiguration(TrustStoreConfigurationT&& value) { m_trustStoreConfigurationHasBeenSet = true; m_trustStoreConfiguration = std::forward<TrustStoreConfigurationT>(value); }
    template<typename TrustStoreConfigurationT = TrustStoreConfiguration>
    GetResponderGatewayResult& WithTrustStoreConfiguration(TrustStoreConfigurationT&& value) { SetTrustStoreConfiguration(std::forward<TrustStoreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the managed endpoint.</p>
     */
    inline const ManagedEndpointConfiguration& GetManagedEndpointConfiguration() const { return m_managedEndpointConfiguration; }
    template<typename ManagedEndpointConfigurationT = ManagedEndpointConfiguration>
    void SetManagedEndpointConfiguration(ManagedEndpointConfigurationT&& value) { m_managedEndpointConfigurationHasBeenSet = true; m_managedEndpointConfiguration = std::forward<ManagedEndpointConfigurationT>(value); }
    template<typename ManagedEndpointConfigurationT = ManagedEndpointConfiguration>
    GetResponderGatewayResult& WithManagedEndpointConfiguration(ManagedEndpointConfigurationT&& value) { SetManagedEndpointConfiguration(std::forward<ManagedEndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    GetResponderGatewayResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the key-value pairs for the tag or tags assigned to the specified
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetResponderGatewayResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetResponderGatewayResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The count of active links for the responder gateway.</p>
     */
    inline int GetActiveLinksCount() const { return m_activeLinksCount; }
    inline void SetActiveLinksCount(int value) { m_activeLinksCountHasBeenSet = true; m_activeLinksCount = value; }
    inline GetResponderGatewayResult& WithActiveLinksCount(int value) { SetActiveLinksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total count of links for the responder gateway.</p>
     */
    inline int GetTotalLinksCount() const { return m_totalLinksCount; }
    inline void SetTotalLinksCount(int value) { m_totalLinksCountHasBeenSet = true; m_totalLinksCount = value; }
    inline GetResponderGatewayResult& WithTotalLinksCount(int value) { SetTotalLinksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of inbound links for the responder gateway.</p>
     */
    inline int GetInboundLinksCount() const { return m_inboundLinksCount; }
    inline void SetInboundLinksCount(int value) { m_inboundLinksCountHasBeenSet = true; m_inboundLinksCount = value; }
    inline GetResponderGatewayResult& WithInboundLinksCount(int value) { SetInboundLinksCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResponderGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    ResponderGatewayStatus m_status{ResponderGatewayStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    TrustStoreConfiguration m_trustStoreConfiguration;
    bool m_trustStoreConfigurationHasBeenSet = false;

    ManagedEndpointConfiguration m_managedEndpointConfiguration;
    bool m_managedEndpointConfigurationHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_activeLinksCount{0};
    bool m_activeLinksCountHasBeenSet = false;

    int m_totalLinksCount{0};
    bool m_totalLinksCountHasBeenSet = false;

    int m_inboundLinksCount{0};
    bool m_inboundLinksCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
