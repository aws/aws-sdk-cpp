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
 * <p>Metadata specific to a GitHub repository integrated resource</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GitHubRepositoryMetadata">AWS
 * API Reference</a></p>
 */
class GitHubRepositoryMetadata {
 public:
  AWS_SECURITYAGENT_API GitHubRepositoryMetadata() = default;
  AWS_SECURITYAGENT_API GitHubRepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API GitHubRepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the resource e.g. repository name, etc</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GitHubRepositoryMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique resource identifier from the vendor</p>
   */
  inline const Aws::String& GetProviderResourceId() const { return m_providerResourceId; }
  inline bool ProviderResourceIdHasBeenSet() const { return m_providerResourceIdHasBeenSet; }
  template <typename ProviderResourceIdT = Aws::String>
  void SetProviderResourceId(ProviderResourceIdT&& value) {
    m_providerResourceIdHasBeenSet = true;
    m_providerResourceId = std::forward<ProviderResourceIdT>(value);
  }
  template <typename ProviderResourceIdT = Aws::String>
  GitHubRepositoryMetadata& WithProviderResourceId(ProviderResourceIdT&& value) {
    SetProviderResourceId(std::forward<ProviderResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Owner of the repository</p>
   */
  inline const Aws::String& GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  template <typename OwnerT = Aws::String>
  void SetOwner(OwnerT&& value) {
    m_ownerHasBeenSet = true;
    m_owner = std::forward<OwnerT>(value);
  }
  template <typename OwnerT = Aws::String>
  GitHubRepositoryMetadata& WithOwner(OwnerT&& value) {
    SetOwner(std::forward<OwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Access / Visibility Type of the integrated resource</p>
   */
  inline AccessType GetAccessType() const { return m_accessType; }
  inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
  inline void SetAccessType(AccessType value) {
    m_accessTypeHasBeenSet = true;
    m_accessType = value;
  }
  inline GitHubRepositoryMetadata& WithAccessType(AccessType value) {
    SetAccessType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_providerResourceId;

  Aws::String m_owner;

  AccessType m_accessType{AccessType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_providerResourceIdHasBeenSet = false;
  bool m_ownerHasBeenSet = false;
  bool m_accessTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
