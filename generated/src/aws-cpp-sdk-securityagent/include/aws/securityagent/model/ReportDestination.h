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
 * <p>Destination for publishing scan reports to an integrated document
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ReportDestination">AWS
 * API Reference</a></p>
 */
class ReportDestination {
 public:
  AWS_SECURITYAGENT_API ReportDestination() = default;
  AWS_SECURITYAGENT_API ReportDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ReportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The integration identifier for the document provider.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  ReportDestination& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container identifier where the report will be published.</p>
   */
  inline const Aws::String& GetContainerId() const { return m_containerId; }
  inline bool ContainerIdHasBeenSet() const { return m_containerIdHasBeenSet; }
  template <typename ContainerIdT = Aws::String>
  void SetContainerId(ContainerIdT&& value) {
    m_containerIdHasBeenSet = true;
    m_containerId = std::forward<ContainerIdT>(value);
  }
  template <typename ContainerIdT = Aws::String>
  ReportDestination& WithContainerId(ContainerIdT&& value) {
    SetContainerId(std::forward<ContainerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent document identifier under which the report will be created.</p>
   */
  inline const Aws::String& GetParentId() const { return m_parentId; }
  inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
  template <typename ParentIdT = Aws::String>
  void SetParentId(ParentIdT&& value) {
    m_parentIdHasBeenSet = true;
    m_parentId = std::forward<ParentIdT>(value);
  }
  template <typename ParentIdT = Aws::String>
  ReportDestination& WithParentId(ParentIdT&& value) {
    SetParentId(std::forward<ParentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The existing document identifier to update instead of creating a new
   * document.</p>
   */
  inline const Aws::String& GetDocumentId() const { return m_documentId; }
  inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
  template <typename DocumentIdT = Aws::String>
  void SetDocumentId(DocumentIdT&& value) {
    m_documentIdHasBeenSet = true;
    m_documentId = std::forward<DocumentIdT>(value);
  }
  template <typename DocumentIdT = Aws::String>
  ReportDestination& WithDocumentId(DocumentIdT&& value) {
    SetDocumentId(std::forward<DocumentIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_containerId;

  Aws::String m_parentId;

  Aws::String m_documentId;
  bool m_integrationIdHasBeenSet = false;
  bool m_containerIdHasBeenSet = false;
  bool m_parentIdHasBeenSet = false;
  bool m_documentIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
