/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateInformation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {
class DescribeNotifyTemplatesResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API DescribeNotifyTemplatesResult() = default;
  AWS_PINPOINTSMSVOICEV2_API DescribeNotifyTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API DescribeNotifyTemplatesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of NotifyTemplateInformation objects that contain the results.</p>
   */
  inline const Aws::Vector<NotifyTemplateInformation>& GetNotifyTemplates() const { return m_notifyTemplates; }
  template <typename NotifyTemplatesT = Aws::Vector<NotifyTemplateInformation>>
  void SetNotifyTemplates(NotifyTemplatesT&& value) {
    m_notifyTemplatesHasBeenSet = true;
    m_notifyTemplates = std::forward<NotifyTemplatesT>(value);
  }
  template <typename NotifyTemplatesT = Aws::Vector<NotifyTemplateInformation>>
  DescribeNotifyTemplatesResult& WithNotifyTemplates(NotifyTemplatesT&& value) {
    SetNotifyTemplates(std::forward<NotifyTemplatesT>(value));
    return *this;
  }
  template <typename NotifyTemplatesT = NotifyTemplateInformation>
  DescribeNotifyTemplatesResult& AddNotifyTemplates(NotifyTemplatesT&& value) {
    m_notifyTemplatesHasBeenSet = true;
    m_notifyTemplates.emplace_back(std::forward<NotifyTemplatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results. If this field is
   * empty then there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeNotifyTemplatesResult& WithNextToken(NextTokenT&& value) {
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
  DescribeNotifyTemplatesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<NotifyTemplateInformation> m_notifyTemplates;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_notifyTemplatesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
