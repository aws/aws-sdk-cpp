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
    AWS_REKOGNITION_API DescribeStreamProcessorResult();
    AWS_REKOGNITION_API DescribeStreamProcessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeStreamProcessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the stream processor. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the stream processor. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Name of the stream processor. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Name of the stream processor. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Name of the stream processor. </p>
     */
    inline DescribeStreamProcessorResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the stream processor. </p>
     */
    inline DescribeStreamProcessorResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the stream processor. </p>
     */
    inline DescribeStreamProcessorResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>ARN of the stream processor.</p>
     */
    inline const Aws::String& GetStreamProcessorArn() const{ return m_streamProcessorArn; }

    /**
     * <p>ARN of the stream processor.</p>
     */
    inline void SetStreamProcessorArn(const Aws::String& value) { m_streamProcessorArn = value; }

    /**
     * <p>ARN of the stream processor.</p>
     */
    inline void SetStreamProcessorArn(Aws::String&& value) { m_streamProcessorArn = std::move(value); }

    /**
     * <p>ARN of the stream processor.</p>
     */
    inline void SetStreamProcessorArn(const char* value) { m_streamProcessorArn.assign(value); }

    /**
     * <p>ARN of the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStreamProcessorArn(const Aws::String& value) { SetStreamProcessorArn(value); return *this;}

    /**
     * <p>ARN of the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStreamProcessorArn(Aws::String&& value) { SetStreamProcessorArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStreamProcessorArn(const char* value) { SetStreamProcessorArn(value); return *this;}


    /**
     * <p>Current status of the stream processor.</p>
     */
    inline const StreamProcessorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the stream processor.</p>
     */
    inline void SetStatus(const StreamProcessorStatus& value) { m_status = value; }

    /**
     * <p>Current status of the stream processor.</p>
     */
    inline void SetStatus(StreamProcessorStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Current status of the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStatus(const StreamProcessorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStatus(StreamProcessorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Detailed status message about the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Date and time the stream processor was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>Date and time the stream processor was created</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>Date and time the stream processor was created</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>Date and time the stream processor was created</p>
     */
    inline DescribeStreamProcessorResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>Date and time the stream processor was created</p>
     */
    inline DescribeStreamProcessorResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time, in Unix format, the stream processor was last updated. For example,
     * when the stream processor moves from a running state to a failed state, or when
     * the user starts or stops the stream processor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }

    /**
     * <p>The time, in Unix format, the stream processor was last updated. For example,
     * when the stream processor moves from a running state to a failed state, or when
     * the user starts or stops the stream processor.</p>
     */
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestamp = value; }

    /**
     * <p>The time, in Unix format, the stream processor was last updated. For example,
     * when the stream processor moves from a running state to a failed state, or when
     * the user starts or stops the stream processor.</p>
     */
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestamp = std::move(value); }

    /**
     * <p>The time, in Unix format, the stream processor was last updated. For example,
     * when the stream processor moves from a running state to a failed state, or when
     * the user starts or stops the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}

    /**
     * <p>The time, in Unix format, the stream processor was last updated. For example,
     * when the stream processor moves from a running state to a failed state, or when
     * the user starts or stops the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>Kinesis video stream that provides the source streaming video.</p>
     */
    inline const StreamProcessorInput& GetInput() const{ return m_input; }

    /**
     * <p>Kinesis video stream that provides the source streaming video.</p>
     */
    inline void SetInput(const StreamProcessorInput& value) { m_input = value; }

    /**
     * <p>Kinesis video stream that provides the source streaming video.</p>
     */
    inline void SetInput(StreamProcessorInput&& value) { m_input = std::move(value); }

    /**
     * <p>Kinesis video stream that provides the source streaming video.</p>
     */
    inline DescribeStreamProcessorResult& WithInput(const StreamProcessorInput& value) { SetInput(value); return *this;}

    /**
     * <p>Kinesis video stream that provides the source streaming video.</p>
     */
    inline DescribeStreamProcessorResult& WithInput(StreamProcessorInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Kinesis data stream to which Amazon Rekognition Video puts the analysis
     * results.</p>
     */
    inline const StreamProcessorOutput& GetOutput() const{ return m_output; }

    /**
     * <p>Kinesis data stream to which Amazon Rekognition Video puts the analysis
     * results.</p>
     */
    inline void SetOutput(const StreamProcessorOutput& value) { m_output = value; }

    /**
     * <p>Kinesis data stream to which Amazon Rekognition Video puts the analysis
     * results.</p>
     */
    inline void SetOutput(StreamProcessorOutput&& value) { m_output = std::move(value); }

    /**
     * <p>Kinesis data stream to which Amazon Rekognition Video puts the analysis
     * results.</p>
     */
    inline DescribeStreamProcessorResult& WithOutput(const StreamProcessorOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>Kinesis data stream to which Amazon Rekognition Video puts the analysis
     * results.</p>
     */
    inline DescribeStreamProcessorResult& WithOutput(StreamProcessorOutput&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that allows access to the stream processor.</p>
     */
    inline DescribeStreamProcessorResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline const StreamProcessorSettings& GetSettings() const{ return m_settings; }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline void SetSettings(const StreamProcessorSettings& value) { m_settings = value; }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline void SetSettings(StreamProcessorSettings&& value) { m_settings = std::move(value); }

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline DescribeStreamProcessorResult& WithSettings(const StreamProcessorSettings& value) { SetSettings(value); return *this;}

    /**
     * <p>Input parameters used in a streaming video analyzed by a stream processor.
     * You can use <code>FaceSearch</code> to recognize faces in a streaming video, or
     * you can use <code>ConnectedHome</code> to detect labels.</p>
     */
    inline DescribeStreamProcessorResult& WithSettings(StreamProcessorSettings&& value) { SetSettings(std::move(value)); return *this;}


    
    inline const StreamProcessorNotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    
    inline void SetNotificationChannel(const StreamProcessorNotificationChannel& value) { m_notificationChannel = value; }

    
    inline void SetNotificationChannel(StreamProcessorNotificationChannel&& value) { m_notificationChannel = std::move(value); }

    
    inline DescribeStreamProcessorResult& WithNotificationChannel(const StreamProcessorNotificationChannel& value) { SetNotificationChannel(value); return *this;}

    
    inline DescribeStreamProcessorResult& WithNotificationChannel(StreamProcessorNotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline DescribeStreamProcessorResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline DescribeStreamProcessorResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The identifier for your AWS Key Management Service key (AWS KMS key). This
     * is an optional parameter for label detection stream processors. </p>
     */
    inline DescribeStreamProcessorResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const{ return m_regionsOfInterest; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline void SetRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { m_regionsOfInterest = value; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline void SetRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { m_regionsOfInterest = std::move(value); }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline DescribeStreamProcessorResult& WithRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { SetRegionsOfInterest(value); return *this;}

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline DescribeStreamProcessorResult& WithRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { SetRegionsOfInterest(std::move(value)); return *this;}

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline DescribeStreamProcessorResult& AddRegionsOfInterest(const RegionOfInterest& value) { m_regionsOfInterest.push_back(value); return *this; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline DescribeStreamProcessorResult& AddRegionsOfInterest(RegionOfInterest&& value) { m_regionsOfInterest.push_back(std::move(value)); return *this; }


    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline const StreamProcessorDataSharingPreference& GetDataSharingPreference() const{ return m_dataSharingPreference; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline void SetDataSharingPreference(const StreamProcessorDataSharingPreference& value) { m_dataSharingPreference = value; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline void SetDataSharingPreference(StreamProcessorDataSharingPreference&& value) { m_dataSharingPreference = std::move(value); }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline DescribeStreamProcessorResult& WithDataSharingPreference(const StreamProcessorDataSharingPreference& value) { SetDataSharingPreference(value); return *this;}

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline DescribeStreamProcessorResult& WithDataSharingPreference(StreamProcessorDataSharingPreference&& value) { SetDataSharingPreference(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_streamProcessorArn;

    StreamProcessorStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::Utils::DateTime m_lastUpdateTimestamp;

    StreamProcessorInput m_input;

    StreamProcessorOutput m_output;

    Aws::String m_roleArn;

    StreamProcessorSettings m_settings;

    StreamProcessorNotificationChannel m_notificationChannel;

    Aws::String m_kmsKeyId;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;

    StreamProcessorDataSharingPreference m_dataSharingPreference;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
