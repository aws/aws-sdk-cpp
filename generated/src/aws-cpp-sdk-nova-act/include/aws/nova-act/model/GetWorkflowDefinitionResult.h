/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/WorkflowDefinitionStatus.h>
#include <aws/nova-act/model/WorkflowExportConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class GetWorkflowDefinitionResult {
 public:
  AWS_NOVAACT_API GetWorkflowDefinitionResult() = default;
  AWS_NOVAACT_API GetWorkflowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API GetWorkflowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the workflow definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetWorkflowDefinitionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow definition.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetWorkflowDefinitionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow definition was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetWorkflowDefinitionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the workflow definition.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetWorkflowDefinitionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The export configuration for the workflow definition.</p>
   */
  inline const WorkflowExportConfig& GetExportConfig() const { return m_exportConfig; }
  template <typename ExportConfigT = WorkflowExportConfig>
  void SetExportConfig(ExportConfigT&& value) {
    m_exportConfigHasBeenSet = true;
    m_exportConfig = std::forward<ExportConfigT>(value);
  }
  template <typename ExportConfigT = WorkflowExportConfig>
  GetWorkflowDefinitionResult& WithExportConfig(ExportConfigT&& value) {
    SetExportConfig(std::forward<ExportConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workflow definition.</p>
   */
  inline WorkflowDefinitionStatus GetStatus() const { return m_status; }
  inline void SetStatus(WorkflowDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetWorkflowDefinitionResult& WithStatus(WorkflowDefinitionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetWorkflowDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  WorkflowExportConfig m_exportConfig;

  WorkflowDefinitionStatus m_status{WorkflowDefinitionStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_exportConfigHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
