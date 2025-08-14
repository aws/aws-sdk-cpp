/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/ServiceTypeOption.h>
#include <aws/servicediscovery/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class CreateServiceRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API CreateServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name that you want to assign to the service.</p>  <p>Do not include
     * sensitive information in the name if the namespace is discoverable by public DNS
     * queries.</p>  <p>If you want Cloud Map to create an <code>SRV</code>
     * record when you register an instance and you're using a system that requires a
     * specific <code>SRV</code> format, such as <a
     * href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code>.</p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code>.</p> </li> </ul> <p>When you
     * register an instance, Cloud Map creates an <code>SRV</code> record and assigns a
     * name to the record by concatenating the service name and the namespace name (for
     * example,</p> <p> <code>_exampleservice._tcp.example.com</code>).</p> 
     * <p>For services that are accessible by DNS queries, you can't create multiple
     * services with names that differ only by case (such as EXAMPLE and example).
     * Otherwise, these services have the same DNS name and can't be distinguished.
     * However, if you use a namespace that's only accessible by API calls, then you
     * can create services that with names that differ only by case.</p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateServiceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the namespace that you want to use to
     * create the service. For namespaces shared with your Amazon Web Services account,
     * specify the namespace ARN. For more information about shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    template<typename NamespaceIdT = Aws::String>
    void SetNamespaceId(NamespaceIdT&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::forward<NamespaceIdT>(value); }
    template<typename NamespaceIdT = Aws::String>
    CreateServiceRequest& WithNamespaceId(NamespaceIdT&& value) { SetNamespaceId(std::forward<NamespaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of running
     * the operation twice. <code>CreatorRequestId</code> can be any unique string (for
     * example, a date/timestamp).</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateServiceRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the service.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServiceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want Cloud Map to create when you register an instance. </p>
     */
    inline const DnsConfig& GetDnsConfig() const { return m_dnsConfig; }
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }
    template<typename DnsConfigT = DnsConfig>
    void SetDnsConfig(DnsConfigT&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::forward<DnsConfigT>(value); }
    template<typename DnsConfigT = DnsConfig>
    CreateServiceRequest& WithDnsConfig(DnsConfigT&& value) { SetDnsConfig(std::forward<DnsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, Cloud Map associates the health check with all the Route 53 DNS
     * records that you specify in <code>DnsConfig</code>.</p>  <p>If you
     * specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">Cloud Map
     * Pricing</a>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const { return m_healthCheckConfig; }
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    void SetHealthCheckConfig(HealthCheckConfigT&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::forward<HealthCheckConfigT>(value); }
    template<typename HealthCheckConfigT = HealthCheckConfig>
    CreateServiceRequest& WithHealthCheckConfig(HealthCheckConfigT&& value) { SetHealthCheckConfig(std::forward<HealthCheckConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const { return m_healthCheckCustomConfig; }
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }
    template<typename HealthCheckCustomConfigT = HealthCheckCustomConfig>
    void SetHealthCheckCustomConfig(HealthCheckCustomConfigT&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::forward<HealthCheckCustomConfigT>(value); }
    template<typename HealthCheckCustomConfigT = HealthCheckCustomConfig>
    CreateServiceRequest& WithHealthCheckCustomConfig(HealthCheckCustomConfigT&& value) { SetHealthCheckCustomConfig(std::forward<HealthCheckCustomConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records is registered
     * for the service instances. The only valid value is <code>HTTP</code>.</p>
     */
    inline ServiceTypeOption GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ServiceTypeOption value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateServiceRequest& WithType(ServiceTypeOption value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet = false;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet = false;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ServiceTypeOption m_type{ServiceTypeOption::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
