/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/PushADMMessageTemplateContent.h>
#include <aws/qconnect/model/PushAPNSMessageTemplateContent.h>
#include <aws/qconnect/model/PushBaiduMessageTemplateContent.h>
#include <aws/qconnect/model/PushFCMMessageTemplateContent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The content of the message template that applies to the push channel
 * subtype.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/PushMessageTemplateContent">AWS
 * API Reference</a></p>
 */
class PushMessageTemplateContent {
 public:
  AWS_QCONNECT_API PushMessageTemplateContent() = default;
  AWS_QCONNECT_API PushMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API PushMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content of the message template that applies to ADM (Amazon Device
   * Messaging) notification service.</p>
   */
  inline const PushADMMessageTemplateContent& GetAdm() const { return m_adm; }
  inline bool AdmHasBeenSet() const { return m_admHasBeenSet; }
  template <typename AdmT = PushADMMessageTemplateContent>
  void SetAdm(AdmT&& value) {
    m_admHasBeenSet = true;
    m_adm = std::forward<AdmT>(value);
  }
  template <typename AdmT = PushADMMessageTemplateContent>
  PushMessageTemplateContent& WithAdm(AdmT&& value) {
    SetAdm(std::forward<AdmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the message template that applies to APNS(Apple Push
   * Notification service) notification service.</p>
   */
  inline const PushAPNSMessageTemplateContent& GetApns() const { return m_apns; }
  inline bool ApnsHasBeenSet() const { return m_apnsHasBeenSet; }
  template <typename ApnsT = PushAPNSMessageTemplateContent>
  void SetApns(ApnsT&& value) {
    m_apnsHasBeenSet = true;
    m_apns = std::forward<ApnsT>(value);
  }
  template <typename ApnsT = PushAPNSMessageTemplateContent>
  PushMessageTemplateContent& WithApns(ApnsT&& value) {
    SetApns(std::forward<ApnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the message template that applies to FCM (Firebase Cloud
   * Messaging) notification service.</p>
   */
  inline const PushFCMMessageTemplateContent& GetFcm() const { return m_fcm; }
  inline bool FcmHasBeenSet() const { return m_fcmHasBeenSet; }
  template <typename FcmT = PushFCMMessageTemplateContent>
  void SetFcm(FcmT&& value) {
    m_fcmHasBeenSet = true;
    m_fcm = std::forward<FcmT>(value);
  }
  template <typename FcmT = PushFCMMessageTemplateContent>
  PushMessageTemplateContent& WithFcm(FcmT&& value) {
    SetFcm(std::forward<FcmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the message template that applies to Baidu notification
   * service.</p>
   */
  inline const PushBaiduMessageTemplateContent& GetBaidu() const { return m_baidu; }
  inline bool BaiduHasBeenSet() const { return m_baiduHasBeenSet; }
  template <typename BaiduT = PushBaiduMessageTemplateContent>
  void SetBaidu(BaiduT&& value) {
    m_baiduHasBeenSet = true;
    m_baidu = std::forward<BaiduT>(value);
  }
  template <typename BaiduT = PushBaiduMessageTemplateContent>
  PushMessageTemplateContent& WithBaidu(BaiduT&& value) {
    SetBaidu(std::forward<BaiduT>(value));
    return *this;
  }
  ///@}
 private:
  PushADMMessageTemplateContent m_adm;
  bool m_admHasBeenSet = false;

  PushAPNSMessageTemplateContent m_apns;
  bool m_apnsHasBeenSet = false;

  PushFCMMessageTemplateContent m_fcm;
  bool m_fcmHasBeenSet = false;

  PushBaiduMessageTemplateContent m_baidu;
  bool m_baiduHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
