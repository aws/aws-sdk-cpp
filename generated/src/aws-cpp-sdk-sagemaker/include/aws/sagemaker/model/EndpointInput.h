/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3InputMode.h>
#include <aws/sagemaker/model/ProcessingS3DataDistributionType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Input object for the endpoint</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointInput">AWS
   * API Reference</a></p>
   */
  class EndpointInput
  {
  public:
    AWS_SAGEMAKER_API EndpointInput();
    AWS_SAGEMAKER_API EndpointInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline EndpointInput& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline EndpointInput& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline EndpointInput& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }
    inline EndpointInput& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}
    inline EndpointInput& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}
    inline EndpointInput& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transferring data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline const ProcessingS3InputMode& GetS3InputMode() const{ return m_s3InputMode; }
    inline bool S3InputModeHasBeenSet() const { return m_s3InputModeHasBeenSet; }
    inline void SetS3InputMode(const ProcessingS3InputMode& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = value; }
    inline void SetS3InputMode(ProcessingS3InputMode&& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = std::move(value); }
    inline EndpointInput& WithS3InputMode(const ProcessingS3InputMode& value) { SetS3InputMode(value); return *this;}
    inline EndpointInput& WithS3InputMode(ProcessingS3InputMode&& value) { SetS3InputMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an Amazon S3 key. Defaults to <code>FullyReplicated</code> </p>
     */
    inline const ProcessingS3DataDistributionType& GetS3DataDistributionType() const{ return m_s3DataDistributionType; }
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }
    inline void SetS3DataDistributionType(const ProcessingS3DataDistributionType& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }
    inline void SetS3DataDistributionType(ProcessingS3DataDistributionType&& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = std::move(value); }
    inline EndpointInput& WithS3DataDistributionType(const ProcessingS3DataDistributionType& value) { SetS3DataDistributionType(value); return *this;}
    inline EndpointInput& WithS3DataDistributionType(ProcessingS3DataDistributionType&& value) { SetS3DataDistributionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the input data that are the input features.</p>
     */
    inline const Aws::String& GetFeaturesAttribute() const{ return m_featuresAttribute; }
    inline bool FeaturesAttributeHasBeenSet() const { return m_featuresAttributeHasBeenSet; }
    inline void SetFeaturesAttribute(const Aws::String& value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute = value; }
    inline void SetFeaturesAttribute(Aws::String&& value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute = std::move(value); }
    inline void SetFeaturesAttribute(const char* value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute.assign(value); }
    inline EndpointInput& WithFeaturesAttribute(const Aws::String& value) { SetFeaturesAttribute(value); return *this;}
    inline EndpointInput& WithFeaturesAttribute(Aws::String&& value) { SetFeaturesAttribute(std::move(value)); return *this;}
    inline EndpointInput& WithFeaturesAttribute(const char* value) { SetFeaturesAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute of the input data that represents the ground truth label.</p>
     */
    inline const Aws::String& GetInferenceAttribute() const{ return m_inferenceAttribute; }
    inline bool InferenceAttributeHasBeenSet() const { return m_inferenceAttributeHasBeenSet; }
    inline void SetInferenceAttribute(const Aws::String& value) { m_inferenceAttributeHasBeenSet = true; m_inferenceAttribute = value; }
    inline void SetInferenceAttribute(Aws::String&& value) { m_inferenceAttributeHasBeenSet = true; m_inferenceAttribute = std::move(value); }
    inline void SetInferenceAttribute(const char* value) { m_inferenceAttributeHasBeenSet = true; m_inferenceAttribute.assign(value); }
    inline EndpointInput& WithInferenceAttribute(const Aws::String& value) { SetInferenceAttribute(value); return *this;}
    inline EndpointInput& WithInferenceAttribute(Aws::String&& value) { SetInferenceAttribute(std::move(value)); return *this;}
    inline EndpointInput& WithInferenceAttribute(const char* value) { SetInferenceAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In a classification problem, the attribute that represents the class
     * probability.</p>
     */
    inline const Aws::String& GetProbabilityAttribute() const{ return m_probabilityAttribute; }
    inline bool ProbabilityAttributeHasBeenSet() const { return m_probabilityAttributeHasBeenSet; }
    inline void SetProbabilityAttribute(const Aws::String& value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute = value; }
    inline void SetProbabilityAttribute(Aws::String&& value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute = std::move(value); }
    inline void SetProbabilityAttribute(const char* value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute.assign(value); }
    inline EndpointInput& WithProbabilityAttribute(const Aws::String& value) { SetProbabilityAttribute(value); return *this;}
    inline EndpointInput& WithProbabilityAttribute(Aws::String&& value) { SetProbabilityAttribute(std::move(value)); return *this;}
    inline EndpointInput& WithProbabilityAttribute(const char* value) { SetProbabilityAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for the class probability to be evaluated as a positive
     * result.</p>
     */
    inline double GetProbabilityThresholdAttribute() const{ return m_probabilityThresholdAttribute; }
    inline bool ProbabilityThresholdAttributeHasBeenSet() const { return m_probabilityThresholdAttributeHasBeenSet; }
    inline void SetProbabilityThresholdAttribute(double value) { m_probabilityThresholdAttributeHasBeenSet = true; m_probabilityThresholdAttribute = value; }
    inline EndpointInput& WithProbabilityThresholdAttribute(double value) { SetProbabilityThresholdAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, monitoring jobs substract this time from the start time. For
     * information about using offsets for scheduling monitoring jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-model-quality-schedule.html">Schedule
     * Model Quality Monitoring Jobs</a>.</p>
     */
    inline const Aws::String& GetStartTimeOffset() const{ return m_startTimeOffset; }
    inline bool StartTimeOffsetHasBeenSet() const { return m_startTimeOffsetHasBeenSet; }
    inline void SetStartTimeOffset(const Aws::String& value) { m_startTimeOffsetHasBeenSet = true; m_startTimeOffset = value; }
    inline void SetStartTimeOffset(Aws::String&& value) { m_startTimeOffsetHasBeenSet = true; m_startTimeOffset = std::move(value); }
    inline void SetStartTimeOffset(const char* value) { m_startTimeOffsetHasBeenSet = true; m_startTimeOffset.assign(value); }
    inline EndpointInput& WithStartTimeOffset(const Aws::String& value) { SetStartTimeOffset(value); return *this;}
    inline EndpointInput& WithStartTimeOffset(Aws::String&& value) { SetStartTimeOffset(std::move(value)); return *this;}
    inline EndpointInput& WithStartTimeOffset(const char* value) { SetStartTimeOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, monitoring jobs substract this time from the end time. For
     * information about using offsets for scheduling monitoring jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-model-quality-schedule.html">Schedule
     * Model Quality Monitoring Jobs</a>.</p>
     */
    inline const Aws::String& GetEndTimeOffset() const{ return m_endTimeOffset; }
    inline bool EndTimeOffsetHasBeenSet() const { return m_endTimeOffsetHasBeenSet; }
    inline void SetEndTimeOffset(const Aws::String& value) { m_endTimeOffsetHasBeenSet = true; m_endTimeOffset = value; }
    inline void SetEndTimeOffset(Aws::String&& value) { m_endTimeOffsetHasBeenSet = true; m_endTimeOffset = std::move(value); }
    inline void SetEndTimeOffset(const char* value) { m_endTimeOffsetHasBeenSet = true; m_endTimeOffset.assign(value); }
    inline EndpointInput& WithEndTimeOffset(const Aws::String& value) { SetEndTimeOffset(value); return *this;}
    inline EndpointInput& WithEndTimeOffset(Aws::String&& value) { SetEndTimeOffset(std::move(value)); return *this;}
    inline EndpointInput& WithEndTimeOffset(const char* value) { SetEndTimeOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the input data to exclude from the analysis.</p>
     */
    inline const Aws::String& GetExcludeFeaturesAttribute() const{ return m_excludeFeaturesAttribute; }
    inline bool ExcludeFeaturesAttributeHasBeenSet() const { return m_excludeFeaturesAttributeHasBeenSet; }
    inline void SetExcludeFeaturesAttribute(const Aws::String& value) { m_excludeFeaturesAttributeHasBeenSet = true; m_excludeFeaturesAttribute = value; }
    inline void SetExcludeFeaturesAttribute(Aws::String&& value) { m_excludeFeaturesAttributeHasBeenSet = true; m_excludeFeaturesAttribute = std::move(value); }
    inline void SetExcludeFeaturesAttribute(const char* value) { m_excludeFeaturesAttributeHasBeenSet = true; m_excludeFeaturesAttribute.assign(value); }
    inline EndpointInput& WithExcludeFeaturesAttribute(const Aws::String& value) { SetExcludeFeaturesAttribute(value); return *this;}
    inline EndpointInput& WithExcludeFeaturesAttribute(Aws::String&& value) { SetExcludeFeaturesAttribute(std::move(value)); return *this;}
    inline EndpointInput& WithExcludeFeaturesAttribute(const char* value) { SetExcludeFeaturesAttribute(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    ProcessingS3InputMode m_s3InputMode;
    bool m_s3InputModeHasBeenSet = false;

    ProcessingS3DataDistributionType m_s3DataDistributionType;
    bool m_s3DataDistributionTypeHasBeenSet = false;

    Aws::String m_featuresAttribute;
    bool m_featuresAttributeHasBeenSet = false;

    Aws::String m_inferenceAttribute;
    bool m_inferenceAttributeHasBeenSet = false;

    Aws::String m_probabilityAttribute;
    bool m_probabilityAttributeHasBeenSet = false;

    double m_probabilityThresholdAttribute;
    bool m_probabilityThresholdAttributeHasBeenSet = false;

    Aws::String m_startTimeOffset;
    bool m_startTimeOffsetHasBeenSet = false;

    Aws::String m_endTimeOffset;
    bool m_endTimeOffsetHasBeenSet = false;

    Aws::String m_excludeFeaturesAttribute;
    bool m_excludeFeaturesAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
