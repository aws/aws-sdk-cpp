/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyInsightsStatus.h>

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
class StartDependencyInsightsResult {
 public:
  AWS_RESILIENCEHUBV2_API StartDependencyInsightsResult() = default;
  AWS_RESILIENCEHUBV2_API StartDependencyInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API StartDependencyInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the dependency insights generation. Valid values:</p> <ul> <li>
   * <p>IN_PROGRESS - Insights generation is in progress.</p> </li> <li> <p>COMPLETED
   * - Insights generation completed successfully.</p> </li> <li> <p>FAILED -
   * Insights generation failed. Call GetDependencyInsights for the error code and
   * message.</p> </li> </ul>
   */
  inline DependencyInsightsStatus GetStatus() const { return m_status; }
  inline void SetStatus(DependencyInsightsStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartDependencyInsightsResult& WithStatus(DependencyInsightsStatus value) {
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
  StartDependencyInsightsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DependencyInsightsStatus m_status{DependencyInsightsStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
