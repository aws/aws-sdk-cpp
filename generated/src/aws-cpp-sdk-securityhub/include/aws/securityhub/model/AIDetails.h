/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Contains information about self-hosted AI resources and their host resources.
 * The fields that are present depend on the role of the resource.</p> <p>On a
 * self-hosted AI resource (a resource with a <code>SelfHosted::AI::</code>
 * resource type, such as <code>SelfHosted::AI::Model</code> or
 * <code>SelfHosted::AI::Agent</code>), the <code>HostResourceGuid</code> and
 * <code>HostResourceType</code> fields link the resource to its host. The
 * <code>CanonicalId</code> field identifies what the resource is, enabling
 * aggregation of identical resources across multiple hosts.</p> <p>On a host
 * resource (such as an Amazon EC2 instance), the
 * <code>SelfHostedAI*ResourceCount</code> fields contain the count for each
 * <code>ResourceSubCategory</code> and the total count of self-hosted AI resources
 * detected on the host.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AIDetails">AWS
 * API Reference</a></p>
 */
class AIDetails {
 public:
  AWS_SECURITYHUB_API AIDetails() = default;
  AWS_SECURITYHUB_API AIDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AIDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the host resource that hosts the self-hosted AI resource.
   * Present only on self-hosted AI resources.</p>
   */
  inline const Aws::String& GetHostResourceGuid() const { return m_hostResourceGuid; }
  inline bool HostResourceGuidHasBeenSet() const { return m_hostResourceGuidHasBeenSet; }
  template <typename HostResourceGuidT = Aws::String>
  void SetHostResourceGuid(HostResourceGuidT&& value) {
    m_hostResourceGuidHasBeenSet = true;
    m_hostResourceGuid = std::forward<HostResourceGuidT>(value);
  }
  template <typename HostResourceGuidT = Aws::String>
  AIDetails& WithHostResourceGuid(HostResourceGuidT&& value) {
    SetHostResourceGuid(std::forward<HostResourceGuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>ResourceType</code> of the host resource that hosts the self-hosted
   * AI resource, such as <code>AWS::EC2::Instance</code>. Present only on
   * self-hosted AI resources.</p>
   */
  inline const Aws::String& GetHostResourceType() const { return m_hostResourceType; }
  inline bool HostResourceTypeHasBeenSet() const { return m_hostResourceTypeHasBeenSet; }
  template <typename HostResourceTypeT = Aws::String>
  void SetHostResourceType(HostResourceTypeT&& value) {
    m_hostResourceTypeHasBeenSet = true;
    m_hostResourceType = std::forward<HostResourceTypeT>(value);
  }
  template <typename HostResourceTypeT = Aws::String>
  AIDetails& WithHostResourceType(HostResourceTypeT&& value) {
    SetHostResourceType(std::forward<HostResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The canonical identifier for the AI resource, independent of where it is
   * deployed. Multiple occurrences of the same resource on different hosts share the
   * same <code>CanonicalId</code>. For model resources, the value follows the format
   * <code>model/&lt;purl&gt;</code>, such as
   * <code>model/pkg:huggingface/meta-llama/llama-3-8b</code>. Present only on
   * self-hosted AI resources.</p>
   */
  inline const Aws::String& GetCanonicalId() const { return m_canonicalId; }
  inline bool CanonicalIdHasBeenSet() const { return m_canonicalIdHasBeenSet; }
  template <typename CanonicalIdT = Aws::String>
  void SetCanonicalId(CanonicalIdT&& value) {
    m_canonicalIdHasBeenSet = true;
    m_canonicalId = std::forward<CanonicalIdT>(value);
  }
  template <typename CanonicalIdT = Aws::String>
  AIDetails& WithCanonicalId(CanonicalIdT&& value) {
    SetCanonicalId(std::forward<CanonicalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>Model</code> detected on the host resource. Present only on host
   * resources.</p>
   */
  inline int GetSelfHostedAIModelResourceCount() const { return m_selfHostedAIModelResourceCount; }
  inline bool SelfHostedAIModelResourceCountHasBeenSet() const { return m_selfHostedAIModelResourceCountHasBeenSet; }
  inline void SetSelfHostedAIModelResourceCount(int value) {
    m_selfHostedAIModelResourceCountHasBeenSet = true;
    m_selfHostedAIModelResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIModelResourceCount(int value) {
    SetSelfHostedAIModelResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>Agent</code> detected on the host resource. Present only on host
   * resources.</p>
   */
  inline int GetSelfHostedAIAgentResourceCount() const { return m_selfHostedAIAgentResourceCount; }
  inline bool SelfHostedAIAgentResourceCountHasBeenSet() const { return m_selfHostedAIAgentResourceCountHasBeenSet; }
  inline void SetSelfHostedAIAgentResourceCount(int value) {
    m_selfHostedAIAgentResourceCountHasBeenSet = true;
    m_selfHostedAIAgentResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIAgentResourceCount(int value) {
    SetSelfHostedAIAgentResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>ModelServing</code> detected on the host resource. Present only on host
   * resources.</p>
   */
  inline int GetSelfHostedAIModelServingResourceCount() const { return m_selfHostedAIModelServingResourceCount; }
  inline bool SelfHostedAIModelServingResourceCountHasBeenSet() const { return m_selfHostedAIModelServingResourceCountHasBeenSet; }
  inline void SetSelfHostedAIModelServingResourceCount(int value) {
    m_selfHostedAIModelServingResourceCountHasBeenSet = true;
    m_selfHostedAIModelServingResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIModelServingResourceCount(int value) {
    SetSelfHostedAIModelServingResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>ExternalEndpoint</code> detected on the host resource. Present only on
   * host resources.</p>
   */
  inline int GetSelfHostedAIExternalEndpointResourceCount() const { return m_selfHostedAIExternalEndpointResourceCount; }
  inline bool SelfHostedAIExternalEndpointResourceCountHasBeenSet() const { return m_selfHostedAIExternalEndpointResourceCountHasBeenSet; }
  inline void SetSelfHostedAIExternalEndpointResourceCount(int value) {
    m_selfHostedAIExternalEndpointResourceCountHasBeenSet = true;
    m_selfHostedAIExternalEndpointResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIExternalEndpointResourceCount(int value) {
    SetSelfHostedAIExternalEndpointResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>Development</code> detected on the host resource. Present only on host
   * resources.</p>
   */
  inline int GetSelfHostedAIDevelopmentResourceCount() const { return m_selfHostedAIDevelopmentResourceCount; }
  inline bool SelfHostedAIDevelopmentResourceCountHasBeenSet() const { return m_selfHostedAIDevelopmentResourceCountHasBeenSet; }
  inline void SetSelfHostedAIDevelopmentResourceCount(int value) {
    m_selfHostedAIDevelopmentResourceCountHasBeenSet = true;
    m_selfHostedAIDevelopmentResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIDevelopmentResourceCount(int value) {
    SetSelfHostedAIDevelopmentResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>AgentFramework</code> detected on the host resource. Present only on host
   * resources.</p>
   */
  inline int GetSelfHostedAIAgentFrameworkResourceCount() const { return m_selfHostedAIAgentFrameworkResourceCount; }
  inline bool SelfHostedAIAgentFrameworkResourceCountHasBeenSet() const { return m_selfHostedAIAgentFrameworkResourceCountHasBeenSet; }
  inline void SetSelfHostedAIAgentFrameworkResourceCount(int value) {
    m_selfHostedAIAgentFrameworkResourceCountHasBeenSet = true;
    m_selfHostedAIAgentFrameworkResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIAgentFrameworkResourceCount(int value) {
    SetSelfHostedAIAgentFrameworkResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of self-hosted AI resources of <code>ResourceSubCategory</code>
   * <code>AgentToolsAndIdentity</code> detected on the host resource. Present only
   * on host resources.</p>
   */
  inline int GetSelfHostedAIAgentToolsAndIdentityResourceCount() const { return m_selfHostedAIAgentToolsAndIdentityResourceCount; }
  inline bool SelfHostedAIAgentToolsAndIdentityResourceCountHasBeenSet() const {
    return m_selfHostedAIAgentToolsAndIdentityResourceCountHasBeenSet;
  }
  inline void SetSelfHostedAIAgentToolsAndIdentityResourceCount(int value) {
    m_selfHostedAIAgentToolsAndIdentityResourceCountHasBeenSet = true;
    m_selfHostedAIAgentToolsAndIdentityResourceCount = value;
  }
  inline AIDetails& WithSelfHostedAIAgentToolsAndIdentityResourceCount(int value) {
    SetSelfHostedAIAgentToolsAndIdentityResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of all self-hosted AI resources detected on the host
   * resource. Present only on host resources.</p>
   */
  inline int GetSelfHostedTotalAIResourceCount() const { return m_selfHostedTotalAIResourceCount; }
  inline bool SelfHostedTotalAIResourceCountHasBeenSet() const { return m_selfHostedTotalAIResourceCountHasBeenSet; }
  inline void SetSelfHostedTotalAIResourceCount(int value) {
    m_selfHostedTotalAIResourceCountHasBeenSet = true;
    m_selfHostedTotalAIResourceCount = value;
  }
  inline AIDetails& WithSelfHostedTotalAIResourceCount(int value) {
    SetSelfHostedTotalAIResourceCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostResourceGuid;

  Aws::String m_hostResourceType;

  Aws::String m_canonicalId;

  int m_selfHostedAIModelResourceCount{0};

  int m_selfHostedAIAgentResourceCount{0};

  int m_selfHostedAIModelServingResourceCount{0};

  int m_selfHostedAIExternalEndpointResourceCount{0};

  int m_selfHostedAIDevelopmentResourceCount{0};

  int m_selfHostedAIAgentFrameworkResourceCount{0};

  int m_selfHostedAIAgentToolsAndIdentityResourceCount{0};

  int m_selfHostedTotalAIResourceCount{0};
  bool m_hostResourceGuidHasBeenSet = false;
  bool m_hostResourceTypeHasBeenSet = false;
  bool m_canonicalIdHasBeenSet = false;
  bool m_selfHostedAIModelResourceCountHasBeenSet = false;
  bool m_selfHostedAIAgentResourceCountHasBeenSet = false;
  bool m_selfHostedAIModelServingResourceCountHasBeenSet = false;
  bool m_selfHostedAIExternalEndpointResourceCountHasBeenSet = false;
  bool m_selfHostedAIDevelopmentResourceCountHasBeenSet = false;
  bool m_selfHostedAIAgentFrameworkResourceCountHasBeenSet = false;
  bool m_selfHostedAIAgentToolsAndIdentityResourceCountHasBeenSet = false;
  bool m_selfHostedTotalAIResourceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
