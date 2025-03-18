/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/StreamProcessorInput.h>
#include <aws/rekognition/model/StreamProcessorOutput.h>
#include <aws/rekognition/model/StreamProcessorSettings.h>
#include <aws/rekognition/model/StreamProcessorNotificationChannel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessorDataSharingPreference.h>
#include <aws/rekognition/model/RegionOfInterest.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class DescribeStreamProcessorResult
  {
  public:
    AWS_REKOGNITION_API DescribeStreamProcessorResult() = default;
    AWS_REKOGNITION_API DescribeStreamProcessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeStreamProcessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the stream processor. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeStreamProcessorResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the stream processor.</p>
     */
    inline const Aws::String& GetStreamProcessorArn() const { return m_streamProcessorArn; }
    template<typename StreamProcessorArnT = Aws::String>
    void SetStreamProcessorArn(StreamProcessorArnT&& value) { m_streamProcessorArnHasBeenSet = true; m_streamProcessorArn = std::forward<StreamProcessorArnT>(value); }
    template<typename StreamProcessorArnT = Aws::String>
    DescribeStreamProcessorResult& WithStreamProcessorArn(StreamProcessorArnT&& value) { SetStreamProcessorArn(std::forward<StreamProcessorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the stream processor.</p>
     */
    inline StreamProcessorStatus GetStatus() const { return m_status; }
    inline void SetStatus(StreamProcessorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeStreamProcessorResult& WithStatus(StreamProcessorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribeStreamProcessorResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time the stream processor was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    DescribeStreamProcessorResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix format, the stream processor was last updated. For example,
     * when the stream processor moves from a running state to a failed state, or when
     * the user starts or stops the stream processor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    DescribeStreamProcessorResult& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kinesis video stream that provides the source streaming video.</p>
     */
    inline const StreamProcessorInput& GetInput() const { return m_input; }
    template<typename InputT = StreamProcessorInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = StreamProcessorInput>
    DescribeStreamProcessorResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kinesis data stream to which Amazon Rekognition Video puts the analysis
     * results.</p>
     */
    inline const StreamProcessorOutput& GetOutput() const { return m_output; }
    template<typename OutputT = StreamProcessorOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = StreamProcessorOutput>
    DescribeStreamProcessorResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeStreamProcessorResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline const StreamProcessorSettings& GetSettings() const { return m_settings; }
    template<typename SettingsT = StreamProcessorSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = StreamProcessorSettings>
    DescribeStreamProcessorResult& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StreamProcessorNotificationChannel& GetNotificationChannel() const { return m_notificationChannel; }
    template<typename NotificationChannelT = StreamProcessorNotificationChannel>
    void SetNotificationChannel(NotificationChannelT&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::forward<NotificationChannelT>(value); }
    template<typename NotificationChannelT = StreamProcessorNotificationChannel>
    DescribeStreamProcessorResult& WithNotificationChannel(NotificationChannelT&& value) { SetNotificationChannel(std::forward<NotificationChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribeStreamProcessorResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const { return m_regionsOfInterest; }
    template<typename RegionsOfInterestT = Aws::Vector<RegionOfInterest>>
    void SetRegionsOfInterest(RegionsOfInterestT&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = std::forward<RegionsOfInterestT>(value); }
    template<typename RegionsOfInterestT = Aws::Vector<RegionOfInterest>>
    DescribeStreamProcessorResult& WithRegionsOfInterest(RegionsOfInterestT&& value) { SetRegionsOfInterest(std::forward<RegionsOfInterestT>(value)); return *this;}
    template<typename RegionsOfInterestT = RegionOfInterest>
    DescribeStreamProcessorResult& AddRegionsOfInterest(RegionsOfInterestT&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.emplace_back(std::forward<RegionsOfInterestT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline const StreamProcessorDataSharingPreference& GetDataSharingPreference() const { return m_dataSharingPreference; }
    template<typename DataSharingPreferenceT = StreamProcessorDataSharingPreference>
    void SetDataSharingPreference(DataSharingPreferenceT&& value) { m_dataSharingPreferenceHasBeenSet = true; m_dataSharingPreference = std::forward<DataSharingPreferenceT>(value); }
    template<typename DataSharingPreferenceT = StreamProcessorDataSharingPreference>
    DescribeStreamProcessorResult& WithDataSharingPreference(DataSharingPreferenceT&& value) { SetDataSharingPreference(std::forward<DataSharingPreferenceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStreamProcessorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_streamProcessorArn;
    bool m_streamProcessorArnHasBeenSet = false;

    StreamProcessorStatus m_status{StreamProcessorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
    bool m_lastUpdateTimestampHasBeenSet = false;

    StreamProcessorInput m_input;
    bool m_inputHasBeenSet = false;

    StreamProcessorOutput m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StreamProcessorSettings m_settings;
    bool m_settingsHasBeenSet = false;

    StreamProcessorNotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;
    bool m_regionsOfInterestHasBeenSet = false;

    StreamProcessorDataSharingPreference m_dataSharingPreference;
    bool m_dataSharingPreferenceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
