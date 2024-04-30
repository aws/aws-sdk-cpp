/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class SendMediaMessageRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendMediaMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMediaMessage"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendMediaMessageRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendMediaMessageRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendMediaMessageRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline SendMediaMessageRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline SendMediaMessageRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline SendMediaMessageRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>The text body of the message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    /**
     * <p>The text body of the message.</p>
     */
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }

    /**
     * <p>The text body of the message.</p>
     */
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>The text body of the message.</p>
     */
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }

    /**
     * <p>The text body of the message.</p>
     */
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    /**
     * <p>The text body of the message.</p>
     */
    inline SendMediaMessageRequest& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /**
     * <p>The text body of the message.</p>
     */
    inline SendMediaMessageRequest& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}

    /**
     * <p>The text body of the message.</p>
     */
    inline SendMediaMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}


    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMediaUrls() const{ return m_mediaUrls; }

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline bool MediaUrlsHasBeenSet() const { return m_mediaUrlsHasBeenSet; }

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline void SetMediaUrls(const Aws::Vector<Aws::String>& value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls = value; }

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline void SetMediaUrls(Aws::Vector<Aws::String>&& value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls = std::move(value); }

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline SendMediaMessageRequest& WithMediaUrls(const Aws::Vector<Aws::String>& value) { SetMediaUrls(value); return *this;}

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline SendMediaMessageRequest& WithMediaUrls(Aws::Vector<Aws::String>&& value) { SetMediaUrls(std::move(value)); return *this;}

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline SendMediaMessageRequest& AddMediaUrls(const Aws::String& value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls.push_back(value); return *this; }

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline SendMediaMessageRequest& AddMediaUrls(Aws::String&& value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in a publicly available S3 bucket. Supported media file formats are
     * listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the S3 user guide.</p>
     */
    inline SendMediaMessageRequest& AddMediaUrls(const char* value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls.push_back(value); return *this; }


    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendMediaMessageRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendMediaMessageRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendMediaMessageRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline SendMediaMessageRequest& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline SendMediaMessageRequest& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline SendMediaMessageRequest& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}


    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline SendMediaMessageRequest& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendMediaMessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline SendMediaMessageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = value; }

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::move(value); }

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId.assign(value); }

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline SendMediaMessageRequest& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline SendMediaMessageRequest& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline SendMediaMessageRequest& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}

  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    Aws::Vector<Aws::String> m_mediaUrls;
    bool m_mediaUrlsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    int m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
