/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/ProtocolType.h>
#include <aws/vpc-lattice/model/ResourceConfigurationDefinition.h>
#include <aws/vpc-lattice/model/ResourceConfigurationStatus.h>
#include <aws/vpc-lattice/model/ResourceConfigurationType.h>
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
namespace VPCLattice
{
namespace Model
{
  class GetResourceConfigurationResult
  {
  public:
    AWS_VPCLATTICE_API GetResourceConfigurationResult();
    AWS_VPCLATTICE_API GetResourceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetResourceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether the resource configuration is associated with a sharable
     * service network.</p>
     */
    inline bool GetAllowAssociationToShareableServiceNetwork() const{ return m_allowAssociationToShareableServiceNetwork; }
    inline void SetAllowAssociationToShareableServiceNetwork(bool value) { m_allowAssociationToShareableServiceNetwork = value; }
    inline GetResourceConfigurationResult& WithAllowAssociationToShareableServiceNetwork(bool value) { SetAllowAssociationToShareableServiceNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource configuration was created and is managed by
     * Amazon.</p>
     */
    inline bool GetAmazonManaged() const{ return m_amazonManaged; }
    inline void SetAmazonManaged(bool value) { m_amazonManaged = value; }
    inline GetResourceConfigurationResult& WithAmazonManaged(bool value) { SetAmazonManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetResourceConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetResourceConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the resource configuration was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetResourceConfigurationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetResourceConfigurationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name of the resource configuration.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainName.assign(value); }
    inline GetResourceConfigurationResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline GetResourceConfigurationResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the create-resource-configuration request failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline GetResourceConfigurationResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline GetResourceConfigurationResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetResourceConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetResourceConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the resource configuration was updated, in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetResourceConfigurationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetResourceConfigurationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetResourceConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetResourceConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TCP port ranges that a consumer can use to access a resource
     * configuration. You can separate port ranges with a comma. Example: 1-65535 or
     * 1,2,22-30</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortRanges() const{ return m_portRanges; }
    inline void SetPortRanges(const Aws::Vector<Aws::String>& value) { m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<Aws::String>&& value) { m_portRanges = std::move(value); }
    inline GetResourceConfigurationResult& WithPortRanges(const Aws::Vector<Aws::String>& value) { SetPortRanges(value); return *this;}
    inline GetResourceConfigurationResult& WithPortRanges(Aws::Vector<Aws::String>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& AddPortRanges(const Aws::String& value) { m_portRanges.push_back(value); return *this; }
    inline GetResourceConfigurationResult& AddPortRanges(Aws::String&& value) { m_portRanges.push_back(std::move(value)); return *this; }
    inline GetResourceConfigurationResult& AddPortRanges(const char* value) { m_portRanges.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The TCP protocol accepted by the specified resource configuration.</p>
     */
    inline const ProtocolType& GetProtocol() const{ return m_protocol; }
    inline void SetProtocol(const ProtocolType& value) { m_protocol = value; }
    inline void SetProtocol(ProtocolType&& value) { m_protocol = std::move(value); }
    inline GetResourceConfigurationResult& WithProtocol(const ProtocolType& value) { SetProtocol(value); return *this;}
    inline GetResourceConfigurationResult& WithProtocol(ProtocolType&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource configuration.</p>
     */
    inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const{ return m_resourceConfigurationDefinition; }
    inline void SetResourceConfigurationDefinition(const ResourceConfigurationDefinition& value) { m_resourceConfigurationDefinition = value; }
    inline void SetResourceConfigurationDefinition(ResourceConfigurationDefinition&& value) { m_resourceConfigurationDefinition = std::move(value); }
    inline GetResourceConfigurationResult& WithResourceConfigurationDefinition(const ResourceConfigurationDefinition& value) { SetResourceConfigurationDefinition(value); return *this;}
    inline GetResourceConfigurationResult& WithResourceConfigurationDefinition(ResourceConfigurationDefinition&& value) { SetResourceConfigurationDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupId() const{ return m_resourceConfigurationGroupId; }
    inline void SetResourceConfigurationGroupId(const Aws::String& value) { m_resourceConfigurationGroupId = value; }
    inline void SetResourceConfigurationGroupId(Aws::String&& value) { m_resourceConfigurationGroupId = std::move(value); }
    inline void SetResourceConfigurationGroupId(const char* value) { m_resourceConfigurationGroupId.assign(value); }
    inline GetResourceConfigurationResult& WithResourceConfigurationGroupId(const Aws::String& value) { SetResourceConfigurationGroupId(value); return *this;}
    inline GetResourceConfigurationResult& WithResourceConfigurationGroupId(Aws::String&& value) { SetResourceConfigurationGroupId(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithResourceConfigurationGroupId(const char* value) { SetResourceConfigurationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway used to connect to the resource configuration
     * in a given VPC. You can specify the resource gateway identifier only for
     * resource configurations with type SINGLE, GROUP, or ARN.</p>
     */
    inline const Aws::String& GetResourceGatewayId() const{ return m_resourceGatewayId; }
    inline void SetResourceGatewayId(const Aws::String& value) { m_resourceGatewayId = value; }
    inline void SetResourceGatewayId(Aws::String&& value) { m_resourceGatewayId = std::move(value); }
    inline void SetResourceGatewayId(const char* value) { m_resourceGatewayId.assign(value); }
    inline GetResourceConfigurationResult& WithResourceGatewayId(const Aws::String& value) { SetResourceGatewayId(value); return *this;}
    inline GetResourceConfigurationResult& WithResourceGatewayId(Aws::String&& value) { SetResourceGatewayId(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithResourceGatewayId(const char* value) { SetResourceGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource configuration.</p>
     */
    inline const ResourceConfigurationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceConfigurationStatus& value) { m_status = value; }
    inline void SetStatus(ResourceConfigurationStatus&& value) { m_status = std::move(value); }
    inline GetResourceConfigurationResult& WithStatus(const ResourceConfigurationStatus& value) { SetStatus(value); return *this;}
    inline GetResourceConfigurationResult& WithStatus(ResourceConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource configuration.</p> <ul> <li> <p> <code>SINGLE</code> - A
     * single resource.</p> </li> <li> <p> <code>GROUP</code> - A group of
     * resources.</p> </li> <li> <p> <code>CHILD</code> - A single resource that is
     * part of a group resource configuration.</p> </li> <li> <p> <code>ARN</code> - An
     * Amazon Web Services resource.</p> </li> </ul>
     */
    inline const ResourceConfigurationType& GetType() const{ return m_type; }
    inline void SetType(const ResourceConfigurationType& value) { m_type = value; }
    inline void SetType(ResourceConfigurationType&& value) { m_type = std::move(value); }
    inline GetResourceConfigurationResult& WithType(const ResourceConfigurationType& value) { SetType(value); return *this;}
    inline GetResourceConfigurationResult& WithType(ResourceConfigurationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_allowAssociationToShareableServiceNetwork;

    bool m_amazonManaged;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_customDomainName;

    Aws::String m_failureReason;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_portRanges;

    ProtocolType m_protocol;

    ResourceConfigurationDefinition m_resourceConfigurationDefinition;

    Aws::String m_resourceConfigurationGroupId;

    Aws::String m_resourceGatewayId;

    ResourceConfigurationStatus m_status;

    ResourceConfigurationType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
