/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobCategory.h>

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
class DescribeJobSchemaVersionResult {
 public:
  AWS_SAGEMAKER_API DescribeJobSchemaVersionResult() = default;
  AWS_SAGEMAKER_API DescribeJobSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeJobSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The category of the job schema.</p>
   */
  inline JobCategory GetJobCategory() const { return m_jobCategory; }
  inline void SetJobCategory(JobCategory value) {
    m_jobCategoryHasBeenSet = true;
    m_jobCategory = value;
  }
  inline DescribeJobSchemaVersionResult& WithJobCategory(JobCategory value) {
    SetJobCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the schema.</p>
   */
  inline const Aws::String& GetJobConfigSchemaVersion() const { return m_jobConfigSchemaVersion; }
  template <typename JobConfigSchemaVersionT = Aws::String>
  void SetJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    m_jobConfigSchemaVersionHasBeenSet = true;
    m_jobConfigSchemaVersion = std::forward<JobConfigSchemaVersionT>(value);
  }
  template <typename JobConfigSchemaVersionT = Aws::String>
  DescribeJobSchemaVersionResult& WithJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    SetJobConfigSchemaVersion(std::forward<JobConfigSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON schema document that defines the structure of the job
   * configuration.</p>
   */
  inline const Aws::String& GetJobConfigSchema() const { return m_jobConfigSchema; }
  template <typename JobConfigSchemaT = Aws::String>
  void SetJobConfigSchema(JobConfigSchemaT&& value) {
    m_jobConfigSchemaHasBeenSet = true;
    m_jobConfigSchema = std::forward<JobConfigSchemaT>(value);
  }
  template <typename JobConfigSchemaT = Aws::String>
  DescribeJobSchemaVersionResult& WithJobConfigSchema(JobConfigSchemaT&& value) {
    SetJobConfigSchema(std::forward<JobConfigSchemaT>(value));
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
  DescribeJobSchemaVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  JobCategory m_jobCategory{JobCategory::NOT_SET};

  Aws::String m_jobConfigSchemaVersion;

  Aws::String m_jobConfigSchema;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobCategoryHasBeenSet = false;
  bool m_jobConfigSchemaVersionHasBeenSet = false;
  bool m_jobConfigSchemaHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
