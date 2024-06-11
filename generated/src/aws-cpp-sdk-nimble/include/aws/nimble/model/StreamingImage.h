/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StreamingImageEncryptionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamingImageState.h>
#include <aws/nimble/model/StreamingImageStatusCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Represents a streaming image resource.</p> <p>Streaming images are used by
   * studio users to select which operating system and software they want to use in a
   * Nimble Studio streaming session.</p> <p>Amazon provides a number of streaming
   * images that include popular 3rd-party software.</p> <p>You can create your own
   * streaming images using an Amazon EC2 machine image that you create for this
   * purpose. You can also include software that your users require.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamingImage">AWS
   * API Reference</a></p>
   */
  class StreamingImage
  {
  public:
    AWS_NIMBLESTUDIO_API StreamingImage();
    AWS_NIMBLESTUDIO_API StreamingImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamingImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StreamingImage& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StreamingImage& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StreamingImage& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the streaming image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StreamingImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StreamingImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StreamingImage& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an EC2 machine image with which to create the streaming image.</p>
     */
    inline const Aws::String& GetEc2ImageId() const{ return m_ec2ImageId; }
    inline bool Ec2ImageIdHasBeenSet() const { return m_ec2ImageIdHasBeenSet; }
    inline void SetEc2ImageId(const Aws::String& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = value; }
    inline void SetEc2ImageId(Aws::String&& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = std::move(value); }
    inline void SetEc2ImageId(const char* value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId.assign(value); }
    inline StreamingImage& WithEc2ImageId(const Aws::String& value) { SetEc2ImageId(value); return *this;}
    inline StreamingImage& WithEc2ImageId(Aws::String&& value) { SetEc2ImageId(std::move(value)); return *this;}
    inline StreamingImage& WithEc2ImageId(const char* value) { SetEc2ImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration.</p>
     */
    inline const StreamingImageEncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const StreamingImageEncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(StreamingImageEncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline StreamingImage& WithEncryptionConfiguration(const StreamingImageEncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline StreamingImage& WithEncryptionConfiguration(StreamingImageEncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of EULAs that must be accepted before a Streaming Session can be
     * started using this streaming image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEulaIds() const{ return m_eulaIds; }
    inline bool EulaIdsHasBeenSet() const { return m_eulaIdsHasBeenSet; }
    inline void SetEulaIds(const Aws::Vector<Aws::String>& value) { m_eulaIdsHasBeenSet = true; m_eulaIds = value; }
    inline void SetEulaIds(Aws::Vector<Aws::String>&& value) { m_eulaIdsHasBeenSet = true; m_eulaIds = std::move(value); }
    inline StreamingImage& WithEulaIds(const Aws::Vector<Aws::String>& value) { SetEulaIds(value); return *this;}
    inline StreamingImage& WithEulaIds(Aws::Vector<Aws::String>&& value) { SetEulaIds(std::move(value)); return *this;}
    inline StreamingImage& AddEulaIds(const Aws::String& value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(value); return *this; }
    inline StreamingImage& AddEulaIds(Aws::String&& value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(std::move(value)); return *this; }
    inline StreamingImage& AddEulaIds(const char* value) { m_eulaIdsHasBeenSet = true; m_eulaIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A friendly name for a streaming image resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StreamingImage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StreamingImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StreamingImage& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the streaming image, either the <code>studioId</code> that
     * contains the streaming image, or <code>amazon</code> for images that are
     * provided by Amazon Nimble Studio.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline StreamingImage& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline StreamingImage& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline StreamingImage& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the streaming image, either Windows or Linux.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline StreamingImage& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline StreamingImage& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline StreamingImage& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state.</p>
     */
    inline const StreamingImageState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StreamingImageState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StreamingImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline StreamingImage& WithState(const StreamingImageState& value) { SetState(value); return *this;}
    inline StreamingImage& WithState(StreamingImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code.</p>
     */
    inline const StreamingImageStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const StreamingImageStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(StreamingImageStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline StreamingImage& WithStatusCode(const StreamingImageStatusCode& value) { SetStatusCode(value); return *this;}
    inline StreamingImage& WithStatusCode(StreamingImageStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the streaming image.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline StreamingImage& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline StreamingImage& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline StreamingImage& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the streaming image.</p>
     */
    inline const Aws::String& GetStreamingImageId() const{ return m_streamingImageId; }
    inline bool StreamingImageIdHasBeenSet() const { return m_streamingImageIdHasBeenSet; }
    inline void SetStreamingImageId(const Aws::String& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = value; }
    inline void SetStreamingImageId(Aws::String&& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = std::move(value); }
    inline void SetStreamingImageId(const char* value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId.assign(value); }
    inline StreamingImage& WithStreamingImageId(const Aws::String& value) { SetStreamingImageId(value); return *this;}
    inline StreamingImage& WithStreamingImageId(Aws::String&& value) { SetStreamingImageId(std::move(value)); return *this;}
    inline StreamingImage& WithStreamingImageId(const char* value) { SetStreamingImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StreamingImage& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StreamingImage& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StreamingImage& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StreamingImage& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StreamingImage& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StreamingImage& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StreamingImage& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StreamingImage& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StreamingImage& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ec2ImageId;
    bool m_ec2ImageIdHasBeenSet = false;

    StreamingImageEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_eulaIds;
    bool m_eulaIdsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    StreamingImageState m_state;
    bool m_stateHasBeenSet = false;

    StreamingImageStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_streamingImageId;
    bool m_streamingImageIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
