/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/WhatsAppMessageTemplateSourceConfiguration">AWS
 * API Reference</a></p>
 */
class WhatsAppMessageTemplateSourceConfiguration {
 public:
  AWS_QCONNECT_API WhatsAppMessageTemplateSourceConfiguration() = default;
  AWS_QCONNECT_API WhatsAppMessageTemplateSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API WhatsAppMessageTemplateSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  WhatsAppMessageTemplateSourceConfiguration& WithBusinessAccountId(BusinessAccountIdT&& value) {
    SetBusinessAccountId(std::forward<BusinessAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The WhatsApp template ID.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  WhatsAppMessageTemplateSourceConfiguration& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
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
  WhatsAppMessageTemplateSourceConfiguration& WithComponents(ComponentsT&& value) {
    SetComponents(std::forward<ComponentsT>(value));
    return *this;
  }
  template <typename ComponentsT = Aws::String>
  WhatsAppMessageTemplateSourceConfiguration& AddComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components.emplace_back(std::forward<ComponentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_businessAccountId;
  bool m_businessAccountIdHasBeenSet = false;

  Aws::String m_templateId;
  bool m_templateIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_components;
  bool m_componentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
