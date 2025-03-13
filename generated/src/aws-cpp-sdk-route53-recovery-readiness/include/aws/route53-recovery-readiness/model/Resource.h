/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/DNSTargetResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>The resource element of a resource set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API Resource() = default;
    AWS_ROUTE53RECOVERYREADINESS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component identifier of the resource, generated when DNS target resource
     * is used.</p>
     */
    inline const Aws::String& GetComponentId() const { return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    template<typename ComponentIdT = Aws::String>
    void SetComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId = std::forward<ComponentIdT>(value); }
    template<typename ComponentIdT = Aws::String>
    Resource& WithComponentId(ComponentIdT&& value) { SetComponentId(std::forward<ComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS target resource.</p>
     */
    inline const DNSTargetResource& GetDnsTargetResource() const { return m_dnsTargetResource; }
    inline bool DnsTargetResourceHasBeenSet() const { return m_dnsTargetResourceHasBeenSet; }
    template<typename DnsTargetResourceT = DNSTargetResource>
    void SetDnsTargetResource(DnsTargetResourceT&& value) { m_dnsTargetResourceHasBeenSet = true; m_dnsTargetResource = std::forward<DnsTargetResourceT>(value); }
    template<typename DnsTargetResourceT = DNSTargetResource>
    Resource& WithDnsTargetResource(DnsTargetResourceT&& value) { SetDnsTargetResource(std::forward<DnsTargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of recovery group Amazon Resource Names (ARNs) and cell ARNs that this
     * resource is contained within.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadinessScopes() const { return m_readinessScopes; }
    inline bool ReadinessScopesHasBeenSet() const { return m_readinessScopesHasBeenSet; }
    template<typename ReadinessScopesT = Aws::Vector<Aws::String>>
    void SetReadinessScopes(ReadinessScopesT&& value) { m_readinessScopesHasBeenSet = true; m_readinessScopes = std::forward<ReadinessScopesT>(value); }
    template<typename ReadinessScopesT = Aws::Vector<Aws::String>>
    Resource& WithReadinessScopes(ReadinessScopesT&& value) { SetReadinessScopes(std::forward<ReadinessScopesT>(value)); return *this;}
    template<typename ReadinessScopesT = Aws::String>
    Resource& AddReadinessScopes(ReadinessScopesT&& value) { m_readinessScopesHasBeenSet = true; m_readinessScopes.emplace_back(std::forward<ReadinessScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Resource& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    DNSTargetResource m_dnsTargetResource;
    bool m_dnsTargetResourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_readinessScopes;
    bool m_readinessScopesHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
