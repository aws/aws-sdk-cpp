/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/DirectMessageConfiguration.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/AddressConfiguration.h>
#include <aws/pinpoint/model/EndpointSendConfiguration.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the configuration and other settings for a message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageRequest">AWS
   * API Reference</a></p>
   */
  class MessageRequest
  {
  public:
    AWS_PINPOINT_API MessageRequest() = default;
    AWS_PINPOINT_API MessageRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of key-value pairs, where each key is an address and each value is an
     * <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-addressconfiguration">AddressConfiguration</a>
     * object. An address can be a push notification token, a phone number, or an email
     * address. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-addressconfiguration">AddressConfiguration</a>
     * object to tailor the message for an address by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline const Aws::Map<Aws::String, AddressConfiguration>& GetAddresses() const { return m_addresses; }
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
    template<typename AddressesT = Aws::Map<Aws::String, AddressConfiguration>>
    void SetAddresses(AddressesT&& value) { m_addressesHasBeenSet = true; m_addresses = std::forward<AddressesT>(value); }
    template<typename AddressesT = Aws::Map<Aws::String, AddressConfiguration>>
    MessageRequest& WithAddresses(AddressesT&& value) { SetAddresses(std::forward<AddressesT>(value)); return *this;}
    template<typename AddressesKeyT = Aws::String, typename AddressesValueT = AddressConfiguration>
    MessageRequest& AddAddresses(AddressesKeyT&& key, AddressesValueT&& value) {
      m_addressesHasBeenSet = true; m_addresses.emplace(std::forward<AddressesKeyT>(key), std::forward<AddressesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    MessageRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    MessageRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline const Aws::Map<Aws::String, EndpointSendConfiguration>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Map<Aws::String, EndpointSendConfiguration>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Map<Aws::String, EndpointSendConfiguration>>
    MessageRequest& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsKeyT = Aws::String, typename EndpointsValueT = EndpointSendConfiguration>
    MessageRequest& AddEndpoints(EndpointsKeyT&& key, EndpointsValueT&& value) {
      m_endpointsHasBeenSet = true; m_endpoints.emplace(std::forward<EndpointsKeyT>(key), std::forward<EndpointsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline const DirectMessageConfiguration& GetMessageConfiguration() const { return m_messageConfiguration; }
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }
    template<typename MessageConfigurationT = DirectMessageConfiguration>
    void SetMessageConfiguration(MessageConfigurationT&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::forward<MessageConfigurationT>(value); }
    template<typename MessageConfigurationT = DirectMessageConfiguration>
    MessageRequest& WithMessageConfiguration(MessageConfigurationT&& value) { SetMessageConfiguration(std::forward<MessageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to use for the message.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    MessageRequest& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    MessageRequest& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AddressConfiguration> m_addresses;
    bool m_addressesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::Map<Aws::String, EndpointSendConfiguration> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    DirectMessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
