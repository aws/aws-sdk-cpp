/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>A code change in a CI/CD pipeline run that defines what a CI/CD pentest job
 * tests. Each scope change identifies an integrated repository and the commit
 * range for the change.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ScopeChange">AWS
 * API Reference</a></p>
 */
class ScopeChange {
 public:
  AWS_SECURITYAGENT_API ScopeChange() = default;
  AWS_SECURITYAGENT_API ScopeChange(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ScopeChange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the integration for the source-code provider that hosts the
   * repository.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  ScopeChange& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific identifier of the repository the change belongs to.</p>
   */
  inline const Aws::String& GetProviderResourceId() const { return m_providerResourceId; }
  inline bool ProviderResourceIdHasBeenSet() const { return m_providerResourceIdHasBeenSet; }
  template <typename ProviderResourceIdT = Aws::String>
  void SetProviderResourceId(ProviderResourceIdT&& value) {
    m_providerResourceIdHasBeenSet = true;
    m_providerResourceId = std::forward<ProviderResourceIdT>(value);
  }
  template <typename ProviderResourceIdT = Aws::String>
  ScopeChange& WithProviderResourceId(ProviderResourceIdT&& value) {
    SetProviderResourceId(std::forward<ProviderResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commit SHA that the change is compared against. When omitted, the change
   * is evaluated against the head commit alone.</p>
   */
  inline const Aws::String& GetBaseCommitSha() const { return m_baseCommitSha; }
  inline bool BaseCommitShaHasBeenSet() const { return m_baseCommitShaHasBeenSet; }
  template <typename BaseCommitShaT = Aws::String>
  void SetBaseCommitSha(BaseCommitShaT&& value) {
    m_baseCommitShaHasBeenSet = true;
    m_baseCommitSha = std::forward<BaseCommitShaT>(value);
  }
  template <typename BaseCommitShaT = Aws::String>
  ScopeChange& WithBaseCommitSha(BaseCommitShaT&& value) {
    SetBaseCommitSha(std::forward<BaseCommitShaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The commit SHA at the tip of the change to be tested.</p>
   */
  inline const Aws::String& GetHeadCommitSha() const { return m_headCommitSha; }
  inline bool HeadCommitShaHasBeenSet() const { return m_headCommitShaHasBeenSet; }
  template <typename HeadCommitShaT = Aws::String>
  void SetHeadCommitSha(HeadCommitShaT&& value) {
    m_headCommitShaHasBeenSet = true;
    m_headCommitSha = std::forward<HeadCommitShaT>(value);
  }
  template <typename HeadCommitShaT = Aws::String>
  ScopeChange& WithHeadCommitSha(HeadCommitShaT&& value) {
    SetHeadCommitSha(std::forward<HeadCommitShaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the CI/CD pipeline run that triggered this pentest job.</p>
   */
  inline const Aws::String& GetTriggerRunId() const { return m_triggerRunId; }
  inline bool TriggerRunIdHasBeenSet() const { return m_triggerRunIdHasBeenSet; }
  template <typename TriggerRunIdT = Aws::String>
  void SetTriggerRunId(TriggerRunIdT&& value) {
    m_triggerRunIdHasBeenSet = true;
    m_triggerRunId = std::forward<TriggerRunIdT>(value);
  }
  template <typename TriggerRunIdT = Aws::String>
  ScopeChange& WithTriggerRunId(TriggerRunIdT&& value) {
    SetTriggerRunId(std::forward<TriggerRunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_providerResourceId;

  Aws::String m_baseCommitSha;

  Aws::String m_headCommitSha;

  Aws::String m_triggerRunId;
  bool m_integrationIdHasBeenSet = false;
  bool m_providerResourceIdHasBeenSet = false;
  bool m_baseCommitShaHasBeenSet = false;
  bool m_headCommitShaHasBeenSet = false;
  bool m_triggerRunIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
