/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AccessType.h>

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
 * <p>Metadata for an integrated Bitbucket repository.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BitbucketRepositoryMetadata">AWS
 * API Reference</a></p>
 */
class BitbucketRepositoryMetadata {
 public:
  AWS_SECURITYAGENT_API BitbucketRepositoryMetadata() = default;
  AWS_SECURITYAGENT_API BitbucketRepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BitbucketRepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BitbucketRepositoryMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetProviderResourceId() const { return m_providerResourceId; }
  inline bool ProviderResourceIdHasBeenSet() const { return m_providerResourceIdHasBeenSet; }
  template <typename ProviderResourceIdT = Aws::String>
  void SetProviderResourceId(ProviderResourceIdT&& value) {
    m_providerResourceIdHasBeenSet = true;
    m_providerResourceId = std::forward<ProviderResourceIdT>(value);
  }
  template <typename ProviderResourceIdT = Aws::String>
  BitbucketRepositoryMetadata& WithProviderResourceId(ProviderResourceIdT&& value) {
    SetProviderResourceId(std::forward<ProviderResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The workspace slug that owns the repository.</p>
   */
  inline const Aws::String& GetWorkspace() const { return m_workspace; }
  inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
  template <typename WorkspaceT = Aws::String>
  void SetWorkspace(WorkspaceT&& value) {
    m_workspaceHasBeenSet = true;
    m_workspace = std::forward<WorkspaceT>(value);
  }
  template <typename WorkspaceT = Aws::String>
  BitbucketRepositoryMetadata& WithWorkspace(WorkspaceT&& value) {
    SetWorkspace(std::forward<WorkspaceT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline BitbucketRepositoryMetadata& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_providerResourceId;

  Aws::String m_workspace;

  AccessType m_accessType{AccessType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_providerResourceIdHasBeenSet = false;
  bool m_workspaceHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
