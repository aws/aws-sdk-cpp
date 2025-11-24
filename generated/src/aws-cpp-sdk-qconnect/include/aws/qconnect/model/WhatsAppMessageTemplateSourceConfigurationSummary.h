/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/WhatsAppSourceConfigurationStatus.h>

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
 * <p>Configuration information about the external data source.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/WhatsAppMessageTemplateSourceConfigurationSummary">AWS
 * API Reference</a></p>
 */
class WhatsAppMessageTemplateSourceConfigurationSummary {
 public:
  AWS_QCONNECT_API WhatsAppMessageTemplateSourceConfigurationSummary() = default;
  AWS_QCONNECT_API WhatsAppMessageTemplateSourceConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API WhatsAppMessageTemplateSourceConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the End User Messaging WhatsApp Business Account to associate with
   * this template.</p>
   */
  inline const Aws::String& GetBusinessAccountId() const { return m_businessAccountId; }
  inline bool BusinessAccountIdHasBeenSet() const { return m_businessAccountIdHasBeenSet; }
  template <typename BusinessAccountIdT = Aws::String>
  void SetBusinessAccountId(BusinessAccountIdT&& value) {
    m_businessAccountIdHasBeenSet = true;
    m_businessAccountId = std::forward<BusinessAccountIdT>(value);
  }
  template <typename BusinessAccountIdT = Aws::String>
  WhatsAppMessageTemplateSourceConfigurationSummary& WithBusinessAccountId(BusinessAccountIdT&& value) {
    SetBusinessAccountId(std::forward<BusinessAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of WhatsApp template.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  WhatsAppMessageTemplateSourceConfigurationSummary& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the WhatsApp template.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WhatsAppMessageTemplateSourceConfigurationSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of the WhatsApp template.</p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  WhatsAppMessageTemplateSourceConfigurationSummary& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of component mapping from WhatsApp template parameters to Message
   * Template attributes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetComponents() const { return m_components; }
  inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
  template <typename ComponentsT = Aws::Vector<Aws::String>>
  void SetComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components = std::forward<ComponentsT>(value);
  }
  template <typename ComponentsT = Aws::Vector<Aws::String>>
  WhatsAppMessageTemplateSourceConfigurationSummary& WithComponents(ComponentsT&& value) {
    SetComponents(std::forward<ComponentsT>(value));
    return *this;
  }
  template <typename ComponentsT = Aws::String>
  WhatsAppMessageTemplateSourceConfigurationSummary& AddComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components.emplace_back(std::forward<ComponentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the message template.</p>
   */
  inline WhatsAppSourceConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WhatsAppSourceConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WhatsAppMessageTemplateSourceConfigurationSummary& WithStatus(WhatsAppSourceConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status reason of the message template.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  WhatsAppMessageTemplateSourceConfigurationSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_businessAccountId;
  bool m_businessAccountIdHasBeenSet = false;

  Aws::String m_templateId;
  bool m_templateIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_language;
  bool m_languageHasBeenSet = false;

  Aws::Vector<Aws::String> m_components;
  bool m_componentsHasBeenSet = false;

  WhatsAppSourceConfigurationStatus m_status{WhatsAppSourceConfigurationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
