/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Contains WhatsApp Business Account metadata associated with a Flow, as
 * returned by Meta.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowWhatsAppBusinessAccountInfo">AWS
 * API Reference</a></p>
 */
class MetaFlowWhatsAppBusinessAccountInfo {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowWhatsAppBusinessAccountInfo() = default;
  AWS_SOCIALMESSAGING_API MetaFlowWhatsAppBusinessAccountInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowWhatsAppBusinessAccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The WhatsApp Business Account ID from Meta.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  MetaFlowWhatsAppBusinessAccountInfo& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the WhatsApp Business Account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MetaFlowWhatsAppBusinessAccountInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency code for the WhatsApp Business Account (for example, USD).</p>
   */
  inline const Aws::String& GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  template <typename CurrencyT = Aws::String>
  void SetCurrency(CurrencyT&& value) {
    m_currencyHasBeenSet = true;
    m_currency = std::forward<CurrencyT>(value);
  }
  template <typename CurrencyT = Aws::String>
  MetaFlowWhatsAppBusinessAccountInfo& WithCurrency(CurrencyT&& value) {
    SetCurrency(std::forward<CurrencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone ID for the WhatsApp Business Account.</p>
   */
  inline const Aws::String& GetTimezoneId() const { return m_timezoneId; }
  inline bool TimezoneIdHasBeenSet() const { return m_timezoneIdHasBeenSet; }
  template <typename TimezoneIdT = Aws::String>
  void SetTimezoneId(TimezoneIdT&& value) {
    m_timezoneIdHasBeenSet = true;
    m_timezoneId = std::forward<TimezoneIdT>(value);
  }
  template <typename TimezoneIdT = Aws::String>
  MetaFlowWhatsAppBusinessAccountInfo& WithTimezoneId(TimezoneIdT&& value) {
    SetTimezoneId(std::forward<TimezoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message template namespace for the WhatsApp Business Account.</p>
   */
  inline const Aws::String& GetMessageTemplateNamespace() const { return m_messageTemplateNamespace; }
  inline bool MessageTemplateNamespaceHasBeenSet() const { return m_messageTemplateNamespaceHasBeenSet; }
  template <typename MessageTemplateNamespaceT = Aws::String>
  void SetMessageTemplateNamespace(MessageTemplateNamespaceT&& value) {
    m_messageTemplateNamespaceHasBeenSet = true;
    m_messageTemplateNamespace = std::forward<MessageTemplateNamespaceT>(value);
  }
  template <typename MessageTemplateNamespaceT = Aws::String>
  MetaFlowWhatsAppBusinessAccountInfo& WithMessageTemplateNamespace(MessageTemplateNamespaceT&& value) {
    SetMessageTemplateNamespace(std::forward<MessageTemplateNamespaceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_currency;

  Aws::String m_timezoneId;

  Aws::String m_messageTemplateNamespace;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_timezoneIdHasBeenSet = false;
  bool m_messageTemplateNamespaceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
