/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Configuration for creating a new workspace when attaching a data source to an
 * OpenSearch application. The workspace is created after the data source is
 * successfully attached.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/WorkspaceConfigurationInput">AWS
 * API Reference</a></p>
 */
class WorkspaceConfigurationInput {
 public:
  AWS_OPENSEARCHSERVICE_API WorkspaceConfigurationInput() = default;
  AWS_OPENSEARCHSERVICE_API WorkspaceConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API WorkspaceConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the workspace to create. Must be between 1 and 40 characters and
   * can contain alphanumeric characters, parentheses, brackets, hyphens,
   * underscores, and spaces.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WorkspaceConfigurationInput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of workspace to create, which determines the use-case features
   * enabled for the workspace. Valid values are <code>OBSERVABILITY</code>,
   * <code>SECURITY_ANALYTICS</code>, and <code>SEARCH</code>.</p>
   */
  inline const Aws::String& GetWorkspaceType() const { return m_workspaceType; }
  inline bool WorkspaceTypeHasBeenSet() const { return m_workspaceTypeHasBeenSet; }
  template <typename WorkspaceTypeT = Aws::String>
  void SetWorkspaceType(WorkspaceTypeT&& value) {
    m_workspaceTypeHasBeenSet = true;
    m_workspaceType = std::forward<WorkspaceTypeT>(value);
  }
  template <typename WorkspaceTypeT = Aws::String>
  WorkspaceConfigurationInput& WithWorkspaceType(WorkspaceTypeT&& value) {
    SetWorkspaceType(std::forward<WorkspaceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_workspaceType;
  bool m_nameHasBeenSet = false;
  bool m_workspaceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
