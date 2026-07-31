/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestRunStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class StartTestRunResult {
 public:
  AWS_RESILIENCEHUBV2_API StartTestRunResult() = default;
  AWS_RESILIENCEHUBV2_API StartTestRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API StartTestRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the started test run.</p>
   */
  inline const Aws::String& GetTestRunId() const { return m_testRunId; }
  template <typename TestRunIdT = Aws::String>
  void SetTestRunId(TestRunIdT&& value) {
    m_testRunIdHasBeenSet = true;
    m_testRunId = std::forward<TestRunIdT>(value);
  }
  template <typename TestRunIdT = Aws::String>
  StartTestRunResult& WithTestRunId(TestRunIdT&& value) {
    SetTestRunId(std::forward<TestRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the started test run.</p>
   */
  inline TestRunStatus GetStatus() const { return m_status; }
  inline void SetStatus(TestRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartTestRunResult& WithStatus(TestRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the AWS Fault Injection Service (AWS FIS) experiments started for
   * the run.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExperimentArns() const { return m_experimentArns; }
  template <typename ExperimentArnsT = Aws::Vector<Aws::String>>
  void SetExperimentArns(ExperimentArnsT&& value) {
    m_experimentArnsHasBeenSet = true;
    m_experimentArns = std::forward<ExperimentArnsT>(value);
  }
  template <typename ExperimentArnsT = Aws::Vector<Aws::String>>
  StartTestRunResult& WithExperimentArns(ExperimentArnsT&& value) {
    SetExperimentArns(std::forward<ExperimentArnsT>(value));
    return *this;
  }
  template <typename ExperimentArnsT = Aws::String>
  StartTestRunResult& AddExperimentArns(ExperimentArnsT&& value) {
    m_experimentArnsHasBeenSet = true;
    m_experimentArns.emplace_back(std::forward<ExperimentArnsT>(value));
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
  StartTestRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_testRunId;

  TestRunStatus m_status{TestRunStatus::NOT_SET};

  Aws::Vector<Aws::String> m_experimentArns;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_testRunIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_experimentArnsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
