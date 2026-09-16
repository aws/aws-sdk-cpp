/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyInsight.h>
#include <aws/resiliencehubv2/model/DependencyInsightsErrorCode.h>
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
class GetDependencyInsightsResult {
 public:
  AWS_RESILIENCEHUBV2_API GetDependencyInsightsResult() = default;
  AWS_RESILIENCEHUBV2_API GetDependencyInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API GetDependencyInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A summary of the dependency insights for the service. This field is not
   * returned until the status is COMPLETED.</p>
   */
  inline const Aws::String& GetOverview() const { return m_overview; }
  template <typename OverviewT = Aws::String>
  void SetOverview(OverviewT&& value) {
    m_overviewHasBeenSet = true;
    m_overview = std::forward<OverviewT>(value);
  }
  template <typename OverviewT = Aws::String>
  GetDependencyInsightsResult& WithOverview(OverviewT&& value) {
    SetOverview(std::forward<OverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of dependency insights generated for the service. This field is not
   * returned until the status is COMPLETED.</p>
   */
  inline const Aws::Vector<DependencyInsight>& GetInsights() const { return m_insights; }
  template <typename InsightsT = Aws::Vector<DependencyInsight>>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = Aws::Vector<DependencyInsight>>
  GetDependencyInsightsResult& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  template <typename InsightsT = DependencyInsight>
  GetDependencyInsightsResult& AddInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights.emplace_back(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the dependency insights generation. Valid values:</p> <ul> <li>
   * <p>IN_PROGRESS - Insights generation is in progress.</p> </li> <li> <p>COMPLETED
   * - Insights generation completed successfully.</p> </li> <li> <p>FAILED -
   * Insights generation failed. See errorCode and errorMessage for details.</p>
   * </li> </ul>
   */
  inline DependencyInsightsStatus GetStatus() const { return m_status; }
  inline void SetStatus(DependencyInsightsStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDependencyInsightsResult& WithStatus(DependencyInsightsStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the dependency insights were generated.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDependencyInsightsResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code returned when insights generation failed. Valid values:</p>
   * <ul> <li> <p>INSUFFICIENT_DATA - There was not enough dependency data to
   * generate insights.</p> </li> <li> <p>LLM_GENERATION_FAILED - The insights could
   * not be generated.</p> </li> <li> <p>INTERNAL_ERROR - An internal error occurred
   * while generating insights.</p> </li> </ul>
   */
  inline DependencyInsightsErrorCode GetErrorCode() const { return m_errorCode; }
  inline void SetErrorCode(DependencyInsightsErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline GetDependencyInsightsResult& WithErrorCode(DependencyInsightsErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing why insights generation failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetDependencyInsightsResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
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
  GetDependencyInsightsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_overview;

  Aws::Vector<DependencyInsight> m_insights;

  DependencyInsightsStatus m_status{DependencyInsightsStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  DependencyInsightsErrorCode m_errorCode{DependencyInsightsErrorCode::NOT_SET};

  Aws::String m_errorMessage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_overviewHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
