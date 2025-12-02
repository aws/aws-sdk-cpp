/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/CompatibilityInformation.h>
#include <aws/nova-act/model/ModelAlias.h>
#include <aws/nova-act/model/ModelSummary.h>

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
class ListModelsResult {
 public:
  AWS_NOVAACT_API ListModelsResult() = default;
  AWS_NOVAACT_API ListModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API ListModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of available AI models with their status and compatibility
   * information.</p>
   */
  inline const Aws::Vector<ModelSummary>& GetModelSummaries() const { return m_modelSummaries; }
  template <typename ModelSummariesT = Aws::Vector<ModelSummary>>
  void SetModelSummaries(ModelSummariesT&& value) {
    m_modelSummariesHasBeenSet = true;
    m_modelSummaries = std::forward<ModelSummariesT>(value);
  }
  template <typename ModelSummariesT = Aws::Vector<ModelSummary>>
  ListModelsResult& WithModelSummaries(ModelSummariesT&& value) {
    SetModelSummaries(std::forward<ModelSummariesT>(value));
    return *this;
  }
  template <typename ModelSummariesT = ModelSummary>
  ListModelsResult& AddModelSummaries(ModelSummariesT&& value) {
    m_modelSummariesHasBeenSet = true;
    m_modelSummaries.emplace_back(std::forward<ModelSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of model aliases that provide stable references to model versions.</p>
   */
  inline const Aws::Vector<ModelAlias>& GetModelAliases() const { return m_modelAliases; }
  template <typename ModelAliasesT = Aws::Vector<ModelAlias>>
  void SetModelAliases(ModelAliasesT&& value) {
    m_modelAliasesHasBeenSet = true;
    m_modelAliases = std::forward<ModelAliasesT>(value);
  }
  template <typename ModelAliasesT = Aws::Vector<ModelAlias>>
  ListModelsResult& WithModelAliases(ModelAliasesT&& value) {
    SetModelAliases(std::forward<ModelAliasesT>(value));
    return *this;
  }
  template <typename ModelAliasesT = ModelAlias>
  ListModelsResult& AddModelAliases(ModelAliasesT&& value) {
    m_modelAliasesHasBeenSet = true;
    m_modelAliases.emplace_back(std::forward<ModelAliasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about client compatibility and supported models.</p>
   */
  inline const CompatibilityInformation& GetCompatibilityInformation() const { return m_compatibilityInformation; }
  template <typename CompatibilityInformationT = CompatibilityInformation>
  void SetCompatibilityInformation(CompatibilityInformationT&& value) {
    m_compatibilityInformationHasBeenSet = true;
    m_compatibilityInformation = std::forward<CompatibilityInformationT>(value);
  }
  template <typename CompatibilityInformationT = CompatibilityInformation>
  ListModelsResult& WithCompatibilityInformation(CompatibilityInformationT&& value) {
    SetCompatibilityInformation(std::forward<CompatibilityInformationT>(value));
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
  ListModelsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ModelSummary> m_modelSummaries;
  bool m_modelSummariesHasBeenSet = false;

  Aws::Vector<ModelAlias> m_modelAliases;
  bool m_modelAliasesHasBeenSet = false;

  CompatibilityInformation m_compatibilityInformation;
  bool m_compatibilityInformationHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
