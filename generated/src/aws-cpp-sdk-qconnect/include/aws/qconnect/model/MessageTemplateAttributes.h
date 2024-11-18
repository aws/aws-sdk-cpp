/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AgentAttributes.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/CustomerProfileAttributes.h>
#include <aws/qconnect/model/SystemAttributes.h>
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
    AWS_QCONNECT_API MessageTemplateAttributes();
    AWS_QCONNECT_API MessageTemplateAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent attributes that are used with the message template.</p>
     */
    inline const AgentAttributes& GetAgentAttributes() const{ return m_agentAttributes; }
    inline bool AgentAttributesHasBeenSet() const { return m_agentAttributesHasBeenSet; }
    inline void SetAgentAttributes(const AgentAttributes& value) { m_agentAttributesHasBeenSet = true; m_agentAttributes = value; }
    inline void SetAgentAttributes(AgentAttributes&& value) { m_agentAttributesHasBeenSet = true; m_agentAttributes = std::move(value); }
    inline MessageTemplateAttributes& WithAgentAttributes(const AgentAttributes& value) { SetAgentAttributes(value); return *this;}
    inline MessageTemplateAttributes& WithAgentAttributes(AgentAttributes&& value) { SetAgentAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom attributes that are used with the message template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomAttributes() const{ return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline MessageTemplateAttributes& WithCustomAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomAttributes(value); return *this;}
    inline MessageTemplateAttributes& WithCustomAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline MessageTemplateAttributes& AddCustomAttributes(const Aws::String& key, const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, value); return *this; }
    inline MessageTemplateAttributes& AddCustomAttributes(Aws::String&& key, const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::move(key), value); return *this; }
    inline MessageTemplateAttributes& AddCustomAttributes(const Aws::String& key, Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, std::move(value)); return *this; }
    inline MessageTemplateAttributes& AddCustomAttributes(Aws::String&& key, Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline MessageTemplateAttributes& AddCustomAttributes(const char* key, Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, std::move(value)); return *this; }
    inline MessageTemplateAttributes& AddCustomAttributes(Aws::String&& key, const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(std::move(key), value); return *this; }
    inline MessageTemplateAttributes& AddCustomAttributes(const char* key, const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The customer profile attributes that are used with the message template.</p>
     */
    inline const CustomerProfileAttributes& GetCustomerProfileAttributes() const{ return m_customerProfileAttributes; }
    inline bool CustomerProfileAttributesHasBeenSet() const { return m_customerProfileAttributesHasBeenSet; }
    inline void SetCustomerProfileAttributes(const CustomerProfileAttributes& value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes = value; }
    inline void SetCustomerProfileAttributes(CustomerProfileAttributes&& value) { m_customerProfileAttributesHasBeenSet = true; m_customerProfileAttributes = std::move(value); }
    inline MessageTemplateAttributes& WithCustomerProfileAttributes(const CustomerProfileAttributes& value) { SetCustomerProfileAttributes(value); return *this;}
    inline MessageTemplateAttributes& WithCustomerProfileAttributes(CustomerProfileAttributes&& value) { SetCustomerProfileAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system attributes that are used with the message template.</p>
     */
    inline const SystemAttributes& GetSystemAttributes() const{ return m_systemAttributes; }
    inline bool SystemAttributesHasBeenSet() const { return m_systemAttributesHasBeenSet; }
    inline void SetSystemAttributes(const SystemAttributes& value) { m_systemAttributesHasBeenSet = true; m_systemAttributes = value; }
    inline void SetSystemAttributes(SystemAttributes&& value) { m_systemAttributesHasBeenSet = true; m_systemAttributes = std::move(value); }
    inline MessageTemplateAttributes& WithSystemAttributes(const SystemAttributes& value) { SetSystemAttributes(value); return *this;}
    inline MessageTemplateAttributes& WithSystemAttributes(SystemAttributes&& value) { SetSystemAttributes(std::move(value)); return *this;}
    ///@}
  private:

    AgentAttributes m_agentAttributes;
    bool m_agentAttributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    CustomerProfileAttributes m_customerProfileAttributes;
    bool m_customerProfileAttributesHasBeenSet = false;

    SystemAttributes m_systemAttributes;
    bool m_systemAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
