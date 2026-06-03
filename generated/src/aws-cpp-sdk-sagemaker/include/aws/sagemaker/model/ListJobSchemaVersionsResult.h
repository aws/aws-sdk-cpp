/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobConfigSchemaVersionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class ListJobSchemaVersionsResult {
 public:
  AWS_SAGEMAKER_API ListJobSchemaVersionsResult() = default;
  AWS_SAGEMAKER_API ListJobSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API ListJobSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>If the response is truncated, this token retrieves the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListJobSchemaVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>JobConfigSchemaVersionSummary</code> objects listing the
   * available schema versions.</p>
   */
  inline const Aws::Vector<JobConfigSchemaVersionSummary>& GetJobConfigSchemas() const { return m_jobConfigSchemas; }
  template <typename JobConfigSchemasT = Aws::Vector<JobConfigSchemaVersionSummary>>
  void SetJobConfigSchemas(JobConfigSchemasT&& value) {
    m_jobConfigSchemasHasBeenSet = true;
    m_jobConfigSchemas = std::forward<JobConfigSchemasT>(value);
  }
  template <typename JobConfigSchemasT = Aws::Vector<JobConfigSchemaVersionSummary>>
  ListJobSchemaVersionsResult& WithJobConfigSchemas(JobConfigSchemasT&& value) {
    SetJobConfigSchemas(std::forward<JobConfigSchemasT>(value));
    return *this;
  }
  template <typename JobConfigSchemasT = JobConfigSchemaVersionSummary>
  ListJobSchemaVersionsResult& AddJobConfigSchemas(JobConfigSchemasT&& value) {
    m_jobConfigSchemasHasBeenSet = true;
    m_jobConfigSchemas.emplace_back(std::forward<JobConfigSchemasT>(value));
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
  ListJobSchemaVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<JobConfigSchemaVersionSummary> m_jobConfigSchemas;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_jobConfigSchemasHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
