/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for <code>SetPlatformApplicationAttributes</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetPlatformApplicationAttributesInput">AWS
   * API Reference</a></p>
   */
  class SetPlatformApplicationAttributesRequest : public SNSRequest
  {
  public:
    AWS_SNS_API SetPlatformApplicationAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetPlatformApplicationAttributes"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::move(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline SetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline SetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>SetPlatformApplicationAttributes</code> action.</p>
     */
    inline SetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}


    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service.</p> <ul> <li> <p>For ADM,
     * <code>PlatformCredential</code>is client secret.</p> </li> <li> <p>For Apple
     * Services using certificate credentials, <code>PlatformCredential</code> is
     * private key.</p> </li> <li> <p>For Apple Services using token credentials,
     * <code>PlatformCredential</code> is signing key.</p> </li> <li> <p>For GCM
     * (Firebase Cloud Messaging) using key credentials, there is no
     * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
     * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
     * credentials, there is no <code>PlatformPrincipal</code>. The
     * <code>PlatformCredential</code> is a JSON formatted private key file. When using
     * the Amazon Web Services CLI, the file must be in string format and special
     * characters must be ignored. To format the file correctly, Amazon SNS recommends
     * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
     * service.json`</code>.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service.</p> <ul> <li> <p>For ADM, <code>PlatformPrincipal</code>is client
     * id.</p> </li> <li> <p>For Apple Services using certificate credentials,
     * <code>PlatformPrincipal</code> is SSL certificate.</p> </li> <li> <p>For Apple
     * Services using token credentials, <code>PlatformPrincipal</code> is signing key
     * ID.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. </p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul> <p>The following attributes
     * only apply to <code>APNs</code> token-based authentication:</p> <ul> <li> <p>
     * <code>ApplePlatformTeamID</code> – The identifier that's assigned to your Apple
     * developer account team.</p> </li> <li> <p> <code>ApplePlatformBundleID</code> –
     * The bundle identifier that's assigned to your iOS app.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
