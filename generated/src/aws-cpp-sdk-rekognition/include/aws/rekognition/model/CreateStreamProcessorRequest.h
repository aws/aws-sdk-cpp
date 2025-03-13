/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/StreamProcessorInput.h>
#include <aws/rekognition/model/StreamProcessorOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/rekognition/model/StreamProcessorNotificationChannel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessorDataSharingPreference.h>
#include <aws/rekognition/model/RegionOfInterest.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateStreamProcessorRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateStreamProcessorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamProcessor"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Kinesis video stream stream that provides the source streaming video. If you
     * are using the AWS CLI, the parameter name is <code>StreamProcessorInput</code>.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline const StreamProcessorInput& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = StreamProcessorInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = StreamProcessorInput>
    CreateStreamProcessorRequest& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kinesis data stream stream or Amazon S3 bucket location to which Amazon
     * Rekognition Video puts the analysis results. If you are using the AWS CLI, the
     * parameter name is <code>StreamProcessorOutput</code>. This must be a
     * <a>S3Destination</a> of an Amazon S3 bucket that you own for a label detection
     * stream processor or a Kinesis data stream ARN for a face search stream
     * processor.</p>
     */
    inline const StreamProcessorOutput& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = StreamProcessorOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = StreamProcessorOutput>
    CreateStreamProcessorRequest& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier you assign to the stream processor. You can use
     * <code>Name</code> to manage the stream processor. For example, you can get the
     * current status of the stream processor by calling
     * <a>DescribeStreamProcessor</a>. <code>Name</code> is idempotent. This is
     * required for both face search and label detection stream processors. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStreamProcessorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline const StreamProcessorSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = StreamProcessorSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = StreamProcessorSettings>
    CreateStreamProcessorRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role that allows access to the
     * stream processor. The IAM role provides Rekognition read permissions for a
     * Kinesis stream. It also provides write permissions to an Amazon S3 bucket and
     * Amazon Simple Notification Service topic for a label detection stream processor.
     * This is required for both face search and label detection stream processors.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateStreamProcessorRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the stream
     * processor. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateStreamProcessorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateStreamProcessorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const StreamProcessorNotificationChannel& GetNotificationChannel() const { return m_notificationChannel; }
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }
    template<typename NotificationChannelT = StreamProcessorNotificationChannel>
    void SetNotificationChannel(NotificationChannelT&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::forward<NotificationChannelT>(value); }
    template<typename NotificationChannelT = StreamProcessorNotificationChannel>
    CreateStreamProcessorRequest& WithNotificationChannel(NotificationChannelT&& value) { SetNotificationChannel(std::forward<NotificationChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors and should not be
     * used to create a face search stream processor. You can supply the Amazon
     * Resource Name (ARN) of your KMS key, the ID of your KMS key, an alias for your
     * KMS key, or an alias ARN. The key is used to encrypt results and data published
     * to your Amazon S3 bucket, which includes image frames and hero images. Your
     * source images are unaffected. </p> <p> </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateStreamProcessorRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. You can specify up to 10 regions of interest, and each region
     * has either a polygon or a bounding box. This is an optional parameter for label
     * detection stream processors and should not be used to create a face search
     * stream processor. </p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const { return m_regionsOfInterest; }
    inline bool RegionsOfInterestHasBeenSet() const { return m_regionsOfInterestHasBeenSet; }
    template<typename RegionsOfInterestT = Aws::Vector<RegionOfInterest>>
    void SetRegionsOfInterest(RegionsOfInterestT&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = std::forward<RegionsOfInterestT>(value); }
    template<typename RegionsOfInterestT = Aws::Vector<RegionOfInterest>>
    CreateStreamProcessorRequest& WithRegionsOfInterest(RegionsOfInterestT&& value) { SetRegionsOfInterest(std::forward<RegionsOfInterestT>(value)); return *this;}
    template<typename RegionsOfInterestT = RegionOfInterest>
    CreateStreamProcessorRequest& AddRegionsOfInterest(RegionsOfInterestT&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.emplace_back(std::forward<RegionsOfInterestT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline const StreamProcessorDataSharingPreference& GetDataSharingPreference() const { return m_dataSharingPreference; }
    inline bool DataSharingPreferenceHasBeenSet() const { return m_dataSharingPreferenceHasBeenSet; }
    template<typename DataSharingPreferenceT = StreamProcessorDataSharingPreference>
    void SetDataSharingPreference(DataSharingPreferenceT&& value) { m_dataSharingPreferenceHasBeenSet = true; m_dataSharingPreference = std::forward<DataSharingPreferenceT>(value); }
    template<typename DataSharingPreferenceT = StreamProcessorDataSharingPreference>
    CreateStreamProcessorRequest& WithDataSharingPreference(DataSharingPreferenceT&& value) { SetDataSharingPreference(std::forward<DataSharingPreferenceT>(value)); return *this;}
    ///@}
  private:

    StreamProcessorInput m_input;
    bool m_inputHasBeenSet = false;

    StreamProcessorOutput m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessorSettings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    StreamProcessorNotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;
    bool m_regionsOfInterestHasBeenSet = false;

    StreamProcessorDataSharingPreference m_dataSharingPreference;
    bool m_dataSharingPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
