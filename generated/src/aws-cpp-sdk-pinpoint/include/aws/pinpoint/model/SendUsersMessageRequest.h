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
   * <p>Specifies the configuration and other settings for a message to send to all
   * the endpoints that are associated with a list of users.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessageRequest">AWS
   * API Reference</a></p>
   */
  class SendUsersMessageRequest
  {
  public:
    AWS_PINPOINT_API SendUsersMessageRequest() = default;
    AWS_PINPOINT_API SendUsersMessageRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SendUsersMessageRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of custom attribute-value pairs. For a push notification, Amazon
     * Pinpoint adds these attributes to the data.pinpoint object in the body of the
     * notification payload. Amazon Pinpoint also provides these attributes in the
     * events that it generates for users-messages deliveries.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    SendUsersMessageRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    SendUsersMessageRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
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
    SendUsersMessageRequest& WithMessageConfiguration(MessageConfigurationT&& value) { SetMessageConfiguration(std::forward<MessageConfigurationT>(value)); return *this;}
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
    SendUsersMessageRequest& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
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
    SendUsersMessageRequest& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that associates user IDs with <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * objects. You can use an <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-messages.html#apps-application-id-messages-model-endpointsendconfiguration">EndpointSendConfiguration</a>
     * object to tailor the message for a user by specifying settings such as content
     * overrides and message variables.</p>
     */
    inline const Aws::Map<Aws::String, EndpointSendConfiguration>& GetUsers() const { return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    template<typename UsersT = Aws::Map<Aws::String, EndpointSendConfiguration>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Map<Aws::String, EndpointSendConfiguration>>
    SendUsersMessageRequest& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersKeyT = Aws::String, typename UsersValueT = EndpointSendConfiguration>
    SendUsersMessageRequest& AddUsers(UsersKeyT&& key, UsersValueT&& value) {
      m_usersHasBeenSet = true; m_users.emplace(std::forward<UsersKeyT>(key), std::forward<UsersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    DirectMessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::Map<Aws::String, EndpointSendConfiguration> m_users;
    bool m_usersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
