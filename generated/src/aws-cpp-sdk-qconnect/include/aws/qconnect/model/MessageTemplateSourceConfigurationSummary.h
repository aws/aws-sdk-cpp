/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/WhatsAppMessageTemplateSourceConfigurationSummary.h>

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
 * <p>The container of message template source configuration summary.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateSourceConfigurationSummary">AWS
 * API Reference</a></p>
 */
class MessageTemplateSourceConfigurationSummary {
 public:
  AWS_QCONNECT_API MessageTemplateSourceConfigurationSummary() = default;
  AWS_QCONNECT_API MessageTemplateSourceConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MessageTemplateSourceConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sourceConfiguration summary of the message template that applies to the
   * WHATSAPP channel subtype.</p>
   */
  inline const WhatsAppMessageTemplateSourceConfigurationSummary& GetWhatsApp() const { return m_whatsApp; }
  inline bool WhatsAppHasBeenSet() const { return m_whatsAppHasBeenSet; }
  template <typename WhatsAppT = WhatsAppMessageTemplateSourceConfigurationSummary>
  void SetWhatsApp(WhatsAppT&& value) {
    m_whatsAppHasBeenSet = true;
    m_whatsApp = std::forward<WhatsAppT>(value);
  }
  template <typename WhatsAppT = WhatsAppMessageTemplateSourceConfigurationSummary>
  MessageTemplateSourceConfigurationSummary& WithWhatsApp(WhatsAppT&& value) {
    SetWhatsApp(std::forward<WhatsAppT>(value));
    return *this;
  }
  ///@}
 private:
  WhatsAppMessageTemplateSourceConfigurationSummary m_whatsApp;
  bool m_whatsAppHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
