/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpSettingSummary.h>

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
class ListDlpSettingsResult {
 public:
  AWS_QUICKSIGHT_API ListDlpSettingsResult() = default;
  AWS_QUICKSIGHT_API ListDlpSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListDlpSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>DlpSettingSummary</code> objects for the DLP settings in the
   * account. The list is empty if no DLP settings have been configured.</p>
   */
  inline const Aws::Vector<DlpSettingSummary>& GetDlpSettingSummaries() const { return m_dlpSettingSummaries; }
  template <typename DlpSettingSummariesT = Aws::Vector<DlpSettingSummary>>
  void SetDlpSettingSummaries(DlpSettingSummariesT&& value) {
    m_dlpSettingSummariesHasBeenSet = true;
    m_dlpSettingSummaries = std::forward<DlpSettingSummariesT>(value);
  }
  template <typename DlpSettingSummariesT = Aws::Vector<DlpSettingSummary>>
  ListDlpSettingsResult& WithDlpSettingSummaries(DlpSettingSummariesT&& value) {
    SetDlpSettingSummaries(std::forward<DlpSettingSummariesT>(value));
    return *this;
  }
  template <typename DlpSettingSummariesT = DlpSettingSummary>
  ListDlpSettingsResult& AddDlpSettingSummaries(DlpSettingSummariesT&& value) {
    m_dlpSettingSummariesHasBeenSet = true;
    m_dlpSettingSummaries.emplace_back(std::forward<DlpSettingSummariesT>(value));
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
  ListDlpSettingsResult& WithNextToken(NextTokenT&& value) {
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
  ListDlpSettingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DlpSettingSummary> m_dlpSettingSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dlpSettingSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
