/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/JourneyCustomMessage.h>
#include <aws/pinpoint/model/__EndpointTypesElement.h>
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
   * <p>The settings for a custom message activity. This type of activity calls an
   * AWS Lambda function or web hook that sends messages to
   * participants.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CustomMessageActivity">AWS
   * API Reference</a></p>
   */
  class CustomMessageActivity
  {
  public:
    AWS_PINPOINT_API CustomMessageActivity() = default;
    AWS_PINPOINT_API CustomMessageActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CustomMessageActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline const Aws::String& GetDeliveryUri() const { return m_deliveryUri; }
    inline bool DeliveryUriHasBeenSet() const { return m_deliveryUriHasBeenSet; }
    template<typename DeliveryUriT = Aws::String>
    void SetDeliveryUri(DeliveryUriT&& value) { m_deliveryUriHasBeenSet = true; m_deliveryUri = std::forward<DeliveryUriT>(value); }
    template<typename DeliveryUriT = Aws::String>
    CustomMessageActivity& WithDeliveryUri(DeliveryUriT&& value) { SetDeliveryUri(std::forward<DeliveryUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline const Aws::Vector<__EndpointTypesElement>& GetEndpointTypes() const { return m_endpointTypes; }
    inline bool EndpointTypesHasBeenSet() const { return m_endpointTypesHasBeenSet; }
    template<typename EndpointTypesT = Aws::Vector<__EndpointTypesElement>>
    void SetEndpointTypes(EndpointTypesT&& value) { m_endpointTypesHasBeenSet = true; m_endpointTypes = std::forward<EndpointTypesT>(value); }
    template<typename EndpointTypesT = Aws::Vector<__EndpointTypesElement>>
    CustomMessageActivity& WithEndpointTypes(EndpointTypesT&& value) { SetEndpointTypes(std::forward<EndpointTypesT>(value)); return *this;}
    inline CustomMessageActivity& AddEndpointTypes(__EndpointTypesElement value) { m_endpointTypesHasBeenSet = true; m_endpointTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline const JourneyCustomMessage& GetMessageConfig() const { return m_messageConfig; }
    inline bool MessageConfigHasBeenSet() const { return m_messageConfigHasBeenSet; }
    template<typename MessageConfigT = JourneyCustomMessage>
    void SetMessageConfig(MessageConfigT&& value) { m_messageConfigHasBeenSet = true; m_messageConfig = std::forward<MessageConfigT>(value); }
    template<typename MessageConfigT = JourneyCustomMessage>
    CustomMessageActivity& WithMessageConfig(MessageConfigT&& value) { SetMessageConfig(std::forward<MessageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline const Aws::String& GetNextActivity() const { return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    template<typename NextActivityT = Aws::String>
    void SetNextActivity(NextActivityT&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::forward<NextActivityT>(value); }
    template<typename NextActivityT = Aws::String>
    CustomMessageActivity& WithNextActivity(NextActivityT&& value) { SetNextActivity(std::forward<NextActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CustomMessageActivity& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the message template to use for the
     * message. If specified, this value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If you don't specify a value for this property,
     * Amazon Pinpoint uses the <i>active version</i> of the template. The <i>active
     * version</i> is typically the version of a template that's been most recently
     * reviewed and approved for use, depending on your workflow. It isn't necessarily
     * the latest version of a template.</p>
     */
    inline const Aws::String& GetTemplateVersion() const { return m_templateVersion; }
    inline bool TemplateVersionHasBeenSet() const { return m_templateVersionHasBeenSet; }
    template<typename TemplateVersionT = Aws::String>
    void SetTemplateVersion(TemplateVersionT&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::forward<TemplateVersionT>(value); }
    template<typename TemplateVersionT = Aws::String>
    CustomMessageActivity& WithTemplateVersion(TemplateVersionT&& value) { SetTemplateVersion(std::forward<TemplateVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryUri;
    bool m_deliveryUriHasBeenSet = false;

    Aws::Vector<__EndpointTypesElement> m_endpointTypes;
    bool m_endpointTypesHasBeenSet = false;

    JourneyCustomMessage m_messageConfig;
    bool m_messageConfigHasBeenSet = false;

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateVersion;
    bool m_templateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
