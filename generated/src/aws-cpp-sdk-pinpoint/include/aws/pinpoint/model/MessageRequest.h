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
    AWS_PINPOINT_API MessageRequest();
    AWS_PINPOINT_API MessageRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::Map<Aws::String, AddressConfiguration>& GetAddresses() const{ return m_addresses; }

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
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }

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
    inline void SetAddresses(const Aws::Map<Aws::String, AddressConfiguration>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

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
    inline void SetAddresses(Aws::Map<Aws::String, AddressConfiguration>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

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
    inline MessageRequest& WithAddresses(const Aws::Map<Aws::String, AddressConfiguration>& value) { SetAddresses(value); return *this;}

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
    inline MessageRequest& WithAddresses(Aws::Map<Aws::String, AddressConfiguration>&& value) { SetAddresses(std::move(value)); return *this;}

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
    inline MessageRequest& AddAddresses(const Aws::String& key, const AddressConfiguration& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, value); return *this; }

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
    inline MessageRequest& AddAddresses(Aws::String&& key, const AddressConfiguration& value) { m_addressesHasBeenSet = true; m_addresses.emplace(std::move(key), value); return *this; }

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
    inline MessageRequest& AddAddresses(const Aws::String& key, AddressConfiguration&& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, std::move(value)); return *this; }

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
    inline MessageRequest& AddAddresses(Aws::String&& key, AddressConfiguration&& value) { m_addressesHasBeenSet = true; m_addresses.emplace(std::move(key), std::move(value)); return *this; }

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
    inline MessageRequest& AddAddresses(const char* key, AddressConfiguration&& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, std::move(value)); return *this; }

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
    inline MessageRequest& AddAddresses(const char* key, const AddressConfiguration& value) { m_addressesHasBeenSet = true; m_addresses.emplace(key, value); return *this; }


    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom attributes to attach to the message. For a push notification,
     * this payload is added to the data.pinpoint object. For an email or text message,
     * this payload is added to email/SMS delivery receipt event attributes.</p>
     */
    inline MessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline const Aws::Map<Aws::String, EndpointSendConfiguration>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline void SetEndpoints(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& WithEndpoints(const Aws::Map<Aws::String, EndpointSendConfiguration>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& WithEndpoints(Aws::Map<Aws::String, EndpointSendConfiguration>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& AddEndpoints(const Aws::String& key, const EndpointSendConfiguration& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& AddEndpoints(Aws::String&& key, const EndpointSendConfiguration& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& AddEndpoints(const Aws::String& key, EndpointSendConfiguration&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& AddEndpoints(Aws::String&& key, EndpointSendConfiguration&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& AddEndpoints(const char* key, EndpointSendConfiguration&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs, where each key is an endpoint ID and each value is
     * an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for an endpoint by specifying settings such as
     * content overrides and message variables.</p>
     */
    inline MessageRequest& AddEndpoints(const char* key, const EndpointSendConfiguration& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }


    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline const DirectMessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }

    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline void SetMessageConfiguration(const DirectMessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline void SetMessageConfiguration(DirectMessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline MessageRequest& WithMessageConfiguration(const DirectMessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * <p>The settings and content for the default message and any default messages
     * that you defined for specific channels.</p>
     */
    inline MessageRequest& WithMessageConfiguration(DirectMessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The message template to use for the message.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }

    /**
     * <p>The message template to use for the message.</p>
     */
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }

    /**
     * <p>The message template to use for the message.</p>
     */
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }

    /**
     * <p>The message template to use for the message.</p>
     */
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }

    /**
     * <p>The message template to use for the message.</p>
     */
    inline MessageRequest& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}

    /**
     * <p>The message template to use for the message.</p>
     */
    inline MessageRequest& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline const Aws::String& GetTraceId() const{ return m_traceId; }

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline void SetTraceId(const Aws::String& value) { m_traceIdHasBeenSet = true; m_traceId = value; }

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline void SetTraceId(Aws::String&& value) { m_traceIdHasBeenSet = true; m_traceId = std::move(value); }

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline void SetTraceId(const char* value) { m_traceIdHasBeenSet = true; m_traceId.assign(value); }

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline MessageRequest& WithTraceId(const Aws::String& value) { SetTraceId(value); return *this;}

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline MessageRequest& WithTraceId(Aws::String&& value) { SetTraceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for tracing the message. This identifier is visible to
     * message recipients.</p>
     */
    inline MessageRequest& WithTraceId(const char* value) { SetTraceId(value); return *this;}

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
