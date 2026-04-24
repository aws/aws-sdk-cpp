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
 * <p>GitHub repository resource details</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GitHubRepositoryResource">AWS
 * API Reference</a></p>
 */
class GitHubRepositoryResource {
 public:
  AWS_SECURITYAGENT_API GitHubRepositoryResource() = default;
  AWS_SECURITYAGENT_API GitHubRepositoryResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API GitHubRepositoryResource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  GitHubRepositoryResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  GitHubRepositoryResource& WithOwner(OwnerT&& value) {
    SetOwner(std::forward<OwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_owner;
  bool m_nameHasBeenSet = false;
  bool m_ownerHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
