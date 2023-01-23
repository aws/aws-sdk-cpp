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
    AWS_PINPOINT_API CustomMessageActivity();
    AWS_PINPOINT_API CustomMessageActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CustomMessageActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline const Aws::String& GetDeliveryUri() const{ return m_deliveryUri; }

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline bool DeliveryUriHasBeenSet() const { return m_deliveryUriHasBeenSet; }

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline void SetDeliveryUri(const Aws::String& value) { m_deliveryUriHasBeenSet = true; m_deliveryUri = value; }

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline void SetDeliveryUri(Aws::String&& value) { m_deliveryUriHasBeenSet = true; m_deliveryUri = std::move(value); }

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline void SetDeliveryUri(const char* value) { m_deliveryUriHasBeenSet = true; m_deliveryUri.assign(value); }

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline CustomMessageActivity& WithDeliveryUri(const Aws::String& value) { SetDeliveryUri(value); return *this;}

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline CustomMessageActivity& WithDeliveryUri(Aws::String&& value) { SetDeliveryUri(std::move(value)); return *this;}

    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul>
     */
    inline CustomMessageActivity& WithDeliveryUri(const char* value) { SetDeliveryUri(value); return *this;}


    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline const Aws::Vector<__EndpointTypesElement>& GetEndpointTypes() const{ return m_endpointTypes; }

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline bool EndpointTypesHasBeenSet() const { return m_endpointTypesHasBeenSet; }

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline void SetEndpointTypes(const Aws::Vector<__EndpointTypesElement>& value) { m_endpointTypesHasBeenSet = true; m_endpointTypes = value; }

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline void SetEndpointTypes(Aws::Vector<__EndpointTypesElement>&& value) { m_endpointTypesHasBeenSet = true; m_endpointTypes = std::move(value); }

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline CustomMessageActivity& WithEndpointTypes(const Aws::Vector<__EndpointTypesElement>& value) { SetEndpointTypes(value); return *this;}

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline CustomMessageActivity& WithEndpointTypes(Aws::Vector<__EndpointTypesElement>&& value) { SetEndpointTypes(std::move(value)); return *this;}

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline CustomMessageActivity& AddEndpointTypes(const __EndpointTypesElement& value) { m_endpointTypesHasBeenSet = true; m_endpointTypes.push_back(value); return *this; }

    /**
     * <p>The types of endpoints to send the custom message to. Each valid value maps
     * to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline CustomMessageActivity& AddEndpointTypes(__EndpointTypesElement&& value) { m_endpointTypesHasBeenSet = true; m_endpointTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline const JourneyCustomMessage& GetMessageConfig() const{ return m_messageConfig; }

    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline bool MessageConfigHasBeenSet() const { return m_messageConfigHasBeenSet; }

    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline void SetMessageConfig(const JourneyCustomMessage& value) { m_messageConfigHasBeenSet = true; m_messageConfig = value; }

    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline void SetMessageConfig(JourneyCustomMessage&& value) { m_messageConfigHasBeenSet = true; m_messageConfig = std::move(value); }

    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline CustomMessageActivity& WithMessageConfig(const JourneyCustomMessage& value) { SetMessageConfig(value); return *this;}

    /**
     * <p>Specifies the message data included in a custom channel message that's sent
     * to participants in a journey.</p>
     */
    inline CustomMessageActivity& WithMessageConfig(JourneyCustomMessage&& value) { SetMessageConfig(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline const Aws::String& GetNextActivity() const{ return m_nextActivity; }

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline void SetNextActivity(const Aws::String& value) { m_nextActivityHasBeenSet = true; m_nextActivity = value; }

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline void SetNextActivity(Aws::String&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::move(value); }

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline void SetNextActivity(const char* value) { m_nextActivityHasBeenSet = true; m_nextActivity.assign(value); }

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline CustomMessageActivity& WithNextActivity(const Aws::String& value) { SetNextActivity(value); return *this;}

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline CustomMessageActivity& WithNextActivity(Aws::String&& value) { SetNextActivity(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the next activity to perform, after Amazon Pinpoint
     * calls the AWS Lambda function or web hook.</p>
     */
    inline CustomMessageActivity& WithNextActivity(const char* value) { SetNextActivity(value); return *this;}


    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline CustomMessageActivity& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline CustomMessageActivity& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline CustomMessageActivity& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


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
    inline const Aws::String& GetTemplateVersion() const{ return m_templateVersion; }

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
    inline bool TemplateVersionHasBeenSet() const { return m_templateVersionHasBeenSet; }

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
    inline void SetTemplateVersion(const Aws::String& value) { m_templateVersionHasBeenSet = true; m_templateVersion = value; }

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
    inline void SetTemplateVersion(Aws::String&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::move(value); }

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
    inline void SetTemplateVersion(const char* value) { m_templateVersionHasBeenSet = true; m_templateVersion.assign(value); }

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
    inline CustomMessageActivity& WithTemplateVersion(const Aws::String& value) { SetTemplateVersion(value); return *this;}

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
    inline CustomMessageActivity& WithTemplateVersion(Aws::String&& value) { SetTemplateVersion(std::move(value)); return *this;}

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
    inline CustomMessageActivity& WithTemplateVersion(const char* value) { SetTemplateVersion(value); return *this;}

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
