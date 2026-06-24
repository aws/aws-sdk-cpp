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
 * <p>A Bitbucket repository integrated as a resource.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BitbucketRepositoryResource">AWS
 * API Reference</a></p>
 */
class BitbucketRepositoryResource {
 public:
  AWS_SECURITYAGENT_API BitbucketRepositoryResource() = default;
  AWS_SECURITYAGENT_API BitbucketRepositoryResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BitbucketRepositoryResource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  BitbucketRepositoryResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  BitbucketRepositoryResource& WithWorkspace(WorkspaceT&& value) {
    SetWorkspace(std::forward<WorkspaceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_workspace;
  bool m_nameHasBeenSet = false;
  bool m_workspaceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
