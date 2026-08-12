/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpSettingDetails.h>

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
class DescribeDlpSettingResult {
 public:
  AWS_QUICKSIGHT_API DescribeDlpSettingResult() = default;
  AWS_QUICKSIGHT_API DescribeDlpSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeDlpSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The full configuration of the requested DLP setting, returned as a
   * <code>DlpSettingDetails</code> object.</p>
   */
  inline const DlpSettingDetails& GetDlpSetting() const { return m_dlpSetting; }
  template <typename DlpSettingT = DlpSettingDetails>
  void SetDlpSetting(DlpSettingT&& value) {
    m_dlpSettingHasBeenSet = true;
    m_dlpSetting = std::forward<DlpSettingT>(value);
  }
  template <typename DlpSettingT = DlpSettingDetails>
  DescribeDlpSettingResult& WithDlpSetting(DlpSettingT&& value) {
    SetDlpSetting(std::forward<DlpSettingT>(value));
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
  DescribeDlpSettingResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DlpSettingDetails m_dlpSetting;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dlpSettingHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
