/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AppSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListAppsResult {
 public:
  AWS_QUICKSIGHT_API ListAppsResult() = default;
  AWS_QUICKSIGHT_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of app summaries.</p>
   */
  inline const Aws::Vector<AppSummary>& GetAppSummaryList() const { return m_appSummaryList; }
  template <typename AppSummaryListT = Aws::Vector<AppSummary>>
  void SetAppSummaryList(AppSummaryListT&& value) {
    m_appSummaryListHasBeenSet = true;
    m_appSummaryList = std::forward<AppSummaryListT>(value);
  }
  template <typename AppSummaryListT = Aws::Vector<AppSummary>>
  ListAppsResult& WithAppSummaryList(AppSummaryListT&& value) {
    SetAppSummaryList(std::forward<AppSummaryListT>(value));
    return *this;
  }
  template <typename AppSummaryListT = AppSummary>
  ListAppsResult& AddAppSummaryList(AppSummaryListT&& value) {
    m_appSummaryListHasBeenSet = true;
    m_appSummaryList.emplace_back(std::forward<AppSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAppsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListAppsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AppSummary> m_appSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_appSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
