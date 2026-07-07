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
 * <p>The target workspace configuration for a migration. You can specify an
 * existing workspace by ID or request creation of a new workspace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/MigrationWorkspace">AWS
 * API Reference</a></p>
 */
class MigrationWorkspace {
 public:
  AWS_OPENSEARCHSERVICE_API MigrationWorkspace() = default;
  AWS_OPENSEARCHSERVICE_API MigrationWorkspace(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API MigrationWorkspace& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of an existing workspace to use as the migration
   * target. Specify either this parameter or <code>createWorkspace</code>.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  MigrationWorkspace& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to create a new workspace as the migration target. If
   * <code>true</code>, you must also specify <code>name</code>.</p>
   */
  inline bool GetCreateWorkspace() const { return m_createWorkspace; }
  inline bool CreateWorkspaceHasBeenSet() const { return m_createWorkspaceHasBeenSet; }
  inline void SetCreateWorkspace(bool value) {
    m_createWorkspaceHasBeenSet = true;
    m_createWorkspace = value;
  }
  inline MigrationWorkspace& WithCreateWorkspace(bool value) {
    SetCreateWorkspace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the new workspace to create. Required when
   * <code>createWorkspace</code> is <code>true</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MigrationWorkspace& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the new workspace to create.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  MigrationWorkspace& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  bool m_createWorkspace{false};

  Aws::String m_name;

  Aws::String m_type;
  bool m_workspaceIdHasBeenSet = false;
  bool m_createWorkspaceHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
