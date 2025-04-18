/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/SystemAttributes.h>
#include <aws/qconnect/model/AgentAttributes.h>
#include <aws/qconnect/model/CustomerProfileAttributes.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>The attributes that are used with the message template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateAttributes">AWS
   * API Reference</a></p>
   */
  class MessageTemplateAttributes
  {
  public:
    AWS_QCONNECT_API MessageTemplateAttributes() = default;
    AWS_QCONNECT_API MessageTemplateAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system attributes that are used with the message template.</p>
     */
    inline const SystemAttributes& GetSystemAttributes() const { return m_systemAttributes; }
    inline bool SystemAttributesHasBeenSet() const { return m_systemAttributesHasBeenSet; }
    template<typename SystemAttributesT = SystemAttributes>
    void SetSystemAttributes(SystemAttributesT&& value) { m_systemAttributesHasBeenSet = true; m_systemAttributes = std::forward<SystemAttributesT>(value); }
    template<typename SystemAttributesT = SystemAttributes>
    MessageTemplateAttributes& WithSystemAttributes(SystemAttributesT&& value) { SetSystemAttributes(std::forward<SystemAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent attributes that are used with the message template.</p>
     */
    inline const AgentAttributes& GetAgentAttributes() const { return m_agentAttributes; }
    inline bool AgentAttributesHasBeenSet() const { return m_agentAttributesHasBeenSet; }
    template<typename AgentAttributesT = AgentAttributes>
    void SetAgentAttributes(AgentAttributesT&& value) { m_agentAttributesHasBeenSet = true; m_agentAttributes = std::forward<AgentAttributesT>(value); }
    template<typename AgentAttributesT = AgentAttributes>
    MessageTemplateAttributes& WithAgentAttributes(AgentAttributesT&& value) { SetAgentAttributes(std::forward<AgentAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer profile attributes that are used with the message template.</p>
     */
    inline const CustomerProfileAttributes& GetCustomerProfileAttributes() const { return m_customerProfileAttributes; }
    inline bool CustomerProfileAttributesHasBeenSet() const { return m_customerProfileAttributesHasBeenSet; }
    template<typename CustomerProfileAttributesT = CustomerProfileAttributes>
    void SetCustomerProfileAttributes(CustomerProfileAttributesT&& value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes = std::forward<CustomerProfileAttributesT>(value); }
    template<typename CustomerProfileAttributesT = CustomerProfileAttributes>
    MessageTemplateAttributes& WithCustomerProfileAttributes(CustomerProfileAttributesT&& value) { SetCustomerProfileAttributes(std::forward<CustomerProfileAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom attributes that are used with the message template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomAttributes() const { return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::Map<Aws::String, Aws::String>>
    MessageTemplateAttributes& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    template<typename CustomAttributesKeyT = Aws::String, typename CustomAttributesValueT = Aws::String>
    MessageTemplateAttributes& AddCustomAttributes(CustomAttributesKeyT&& key, CustomAttributesValueT&& value) {
      m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::forward<CustomAttributesKeyT>(key), std::forward<CustomAttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    SystemAttributes m_systemAttributes;
    bool m_systemAttributesHasBeenSet = false;

    AgentAttributes m_agentAttributes;
    bool m_agentAttributesHasBeenSet = false;

    CustomerProfileAttributes m_customerProfileAttributes;
    bool m_customerProfileAttributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
