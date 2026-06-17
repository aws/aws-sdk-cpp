/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ThreatModel.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the BatchGetThreatModels operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModelsOutput">AWS
 * API Reference</a></p>
 */
class BatchGetThreatModelsResult {
 public:
  AWS_SECURITYAGENT_API BatchGetThreatModelsResult() = default;
  AWS_SECURITYAGENT_API BatchGetThreatModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetThreatModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of threat models that were found.</p>
   */
  inline const Aws::Vector<ThreatModel>& GetThreatModels() const { return m_threatModels; }
  template <typename ThreatModelsT = Aws::Vector<ThreatModel>>
  void SetThreatModels(ThreatModelsT&& value) {
    m_threatModelsHasBeenSet = true;
    m_threatModels = std::forward<ThreatModelsT>(value);
  }
  template <typename ThreatModelsT = Aws::Vector<ThreatModel>>
  BatchGetThreatModelsResult& WithThreatModels(ThreatModelsT&& value) {
    SetThreatModels(std::forward<ThreatModelsT>(value));
    return *this;
  }
  template <typename ThreatModelsT = ThreatModel>
  BatchGetThreatModelsResult& AddThreatModels(ThreatModelsT&& value) {
    m_threatModelsHasBeenSet = true;
    m_threatModels.emplace_back(std::forward<ThreatModelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of threat model identifiers that were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetThreatModelsResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetThreatModelsResult& AddNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound.emplace_back(std::forward<NotFoundT>(value));
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
  BatchGetThreatModelsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ThreatModel> m_threatModels;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_threatModelsHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
