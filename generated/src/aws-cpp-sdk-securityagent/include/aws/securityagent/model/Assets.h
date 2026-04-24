/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Actor.h>
#include <aws/securityagent/model/DocumentInfo.h>
#include <aws/securityagent/model/Endpoint.h>
#include <aws/securityagent/model/IntegratedRepository.h>
#include <aws/securityagent/model/SourceCodeRepository.h>

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
 * <p>Collection of assets to be tested or used during a pentest</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Assets">AWS
 * API Reference</a></p>
 */
class Assets {
 public:
  AWS_SECURITYAGENT_API Assets() = default;
  AWS_SECURITYAGENT_API Assets(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Assets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of web application endpoints to test</p>
   */
  inline const Aws::Vector<Endpoint>& GetEndpoints() const { return m_endpoints; }
  inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
  template <typename EndpointsT = Aws::Vector<Endpoint>>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = Aws::Vector<Endpoint>>
  Assets& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  template <typename EndpointsT = Endpoint>
  Assets& AddEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints.emplace_back(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of actors that interact with the system</p>
   */
  inline const Aws::Vector<Actor>& GetActors() const { return m_actors; }
  inline bool ActorsHasBeenSet() const { return m_actorsHasBeenSet; }
  template <typename ActorsT = Aws::Vector<Actor>>
  void SetActors(ActorsT&& value) {
    m_actorsHasBeenSet = true;
    m_actors = std::forward<ActorsT>(value);
  }
  template <typename ActorsT = Aws::Vector<Actor>>
  Assets& WithActors(ActorsT&& value) {
    SetActors(std::forward<ActorsT>(value));
    return *this;
  }
  template <typename ActorsT = Actor>
  Assets& AddActors(ActorsT&& value) {
    m_actorsHasBeenSet = true;
    m_actors.emplace_back(std::forward<ActorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of documents providing context for testing</p>
   */
  inline const Aws::Vector<DocumentInfo>& GetDocuments() const { return m_documents; }
  inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
  template <typename DocumentsT = Aws::Vector<DocumentInfo>>
  void SetDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents = std::forward<DocumentsT>(value);
  }
  template <typename DocumentsT = Aws::Vector<DocumentInfo>>
  Assets& WithDocuments(DocumentsT&& value) {
    SetDocuments(std::forward<DocumentsT>(value));
    return *this;
  }
  template <typename DocumentsT = DocumentInfo>
  Assets& AddDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents.emplace_back(std::forward<DocumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of source code repositories for static analysis</p>
   */
  inline const Aws::Vector<SourceCodeRepository>& GetSourceCode() const { return m_sourceCode; }
  inline bool SourceCodeHasBeenSet() const { return m_sourceCodeHasBeenSet; }
  template <typename SourceCodeT = Aws::Vector<SourceCodeRepository>>
  void SetSourceCode(SourceCodeT&& value) {
    m_sourceCodeHasBeenSet = true;
    m_sourceCode = std::forward<SourceCodeT>(value);
  }
  template <typename SourceCodeT = Aws::Vector<SourceCodeRepository>>
  Assets& WithSourceCode(SourceCodeT&& value) {
    SetSourceCode(std::forward<SourceCodeT>(value));
    return *this;
  }
  template <typename SourceCodeT = SourceCodeRepository>
  Assets& AddSourceCode(SourceCodeT&& value) {
    m_sourceCodeHasBeenSet = true;
    m_sourceCode.emplace_back(std::forward<SourceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of integrated code repositories</p>
   */
  inline const Aws::Vector<IntegratedRepository>& GetIntegratedRepositories() const { return m_integratedRepositories; }
  inline bool IntegratedRepositoriesHasBeenSet() const { return m_integratedRepositoriesHasBeenSet; }
  template <typename IntegratedRepositoriesT = Aws::Vector<IntegratedRepository>>
  void SetIntegratedRepositories(IntegratedRepositoriesT&& value) {
    m_integratedRepositoriesHasBeenSet = true;
    m_integratedRepositories = std::forward<IntegratedRepositoriesT>(value);
  }
  template <typename IntegratedRepositoriesT = Aws::Vector<IntegratedRepository>>
  Assets& WithIntegratedRepositories(IntegratedRepositoriesT&& value) {
    SetIntegratedRepositories(std::forward<IntegratedRepositoriesT>(value));
    return *this;
  }
  template <typename IntegratedRepositoriesT = IntegratedRepository>
  Assets& AddIntegratedRepositories(IntegratedRepositoriesT&& value) {
    m_integratedRepositoriesHasBeenSet = true;
    m_integratedRepositories.emplace_back(std::forward<IntegratedRepositoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Endpoint> m_endpoints;

  Aws::Vector<Actor> m_actors;

  Aws::Vector<DocumentInfo> m_documents;

  Aws::Vector<SourceCodeRepository> m_sourceCode;

  Aws::Vector<IntegratedRepository> m_integratedRepositories;
  bool m_endpointsHasBeenSet = false;
  bool m_actorsHasBeenSet = false;
  bool m_documentsHasBeenSet = false;
  bool m_sourceCodeHasBeenSet = false;
  bool m_integratedRepositoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
