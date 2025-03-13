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
    AWS_SAGEMAKER_API EndpointInput() = default;
    AWS_SAGEMAKER_API EndpointInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An endpoint in customer's account which has enabled
     * <code>DataCaptureConfig</code> enabled.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    EndpointInput& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to the filesystem where the endpoint data is available to the
     * container.</p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    EndpointInput& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the <code>Pipe</code> or <code>File</code> is used as the input mode
     * for transferring data for the monitoring job. <code>Pipe</code> mode is
     * recommended for large datasets. <code>File</code> mode is useful for small files
     * that fit in memory. Defaults to <code>File</code>.</p>
     */
    inline ProcessingS3InputMode GetS3InputMode() const { return m_s3InputMode; }
    inline bool S3InputModeHasBeenSet() const { return m_s3InputModeHasBeenSet; }
    inline void SetS3InputMode(ProcessingS3InputMode value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = value; }
    inline EndpointInput& WithS3InputMode(ProcessingS3InputMode value) { SetS3InputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether input data distributed in Amazon S3 is fully replicated or sharded by
     * an Amazon S3 key. Defaults to <code>FullyReplicated</code> </p>
     */
    inline ProcessingS3DataDistributionType GetS3DataDistributionType() const { return m_s3DataDistributionType; }
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }
    inline void SetS3DataDistributionType(ProcessingS3DataDistributionType value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }
    inline EndpointInput& WithS3DataDistributionType(ProcessingS3DataDistributionType value) { SetS3DataDistributionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the input data that are the input features.</p>
     */
    inline const Aws::String& GetFeaturesAttribute() const { return m_featuresAttribute; }
    inline bool FeaturesAttributeHasBeenSet() const { return m_featuresAttributeHasBeenSet; }
    template<typename FeaturesAttributeT = Aws::String>
    void SetFeaturesAttribute(FeaturesAttributeT&& value) { m_featuresAttributeHasBeenSet = true; m_featuresAttribute = std::forward<FeaturesAttributeT>(value); }
    template<typename FeaturesAttributeT = Aws::String>
    EndpointInput& WithFeaturesAttribute(FeaturesAttributeT&& value) { SetFeaturesAttribute(std::forward<FeaturesAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute of the input data that represents the ground truth label.</p>
     */
    inline const Aws::String& GetInferenceAttribute() const { return m_inferenceAttribute; }
    inline bool InferenceAttributeHasBeenSet() const { return m_inferenceAttributeHasBeenSet; }
    template<typename InferenceAttributeT = Aws::String>
    void SetInferenceAttribute(InferenceAttributeT&& value) { m_inferenceAttributeHasBeenSet = true; m_inferenceAttribute = std::forward<InferenceAttributeT>(value); }
    template<typename InferenceAttributeT = Aws::String>
    EndpointInput& WithInferenceAttribute(InferenceAttributeT&& value) { SetInferenceAttribute(std::forward<InferenceAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In a classification problem, the attribute that represents the class
     * probability.</p>
     */
    inline const Aws::String& GetProbabilityAttribute() const { return m_probabilityAttribute; }
    inline bool ProbabilityAttributeHasBeenSet() const { return m_probabilityAttributeHasBeenSet; }
    template<typename ProbabilityAttributeT = Aws::String>
    void SetProbabilityAttribute(ProbabilityAttributeT&& value) { m_probabilityAttributeHasBeenSet = true; m_probabilityAttribute = std::forward<ProbabilityAttributeT>(value); }
    template<typename ProbabilityAttributeT = Aws::String>
    EndpointInput& WithProbabilityAttribute(ProbabilityAttributeT&& value) { SetProbabilityAttribute(std::forward<ProbabilityAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for the class probability to be evaluated as a positive
     * result.</p>
     */
    inline double GetProbabilityThresholdAttribute() const { return m_probabilityThresholdAttribute; }
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
    inline const Aws::String& GetStartTimeOffset() const { return m_startTimeOffset; }
    inline bool StartTimeOffsetHasBeenSet() const { return m_startTimeOffsetHasBeenSet; }
    template<typename StartTimeOffsetT = Aws::String>
    void SetStartTimeOffset(StartTimeOffsetT&& value) { m_startTimeOffsetHasBeenSet = true; m_startTimeOffset = std::forward<StartTimeOffsetT>(value); }
    template<typename StartTimeOffsetT = Aws::String>
    EndpointInput& WithStartTimeOffset(StartTimeOffsetT&& value) { SetStartTimeOffset(std::forward<StartTimeOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, monitoring jobs substract this time from the end time. For
     * information about using offsets for scheduling monitoring jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-model-quality-schedule.html">Schedule
     * Model Quality Monitoring Jobs</a>.</p>
     */
    inline const Aws::String& GetEndTimeOffset() const { return m_endTimeOffset; }
    inline bool EndTimeOffsetHasBeenSet() const { return m_endTimeOffsetHasBeenSet; }
    template<typename EndTimeOffsetT = Aws::String>
    void SetEndTimeOffset(EndTimeOffsetT&& value) { m_endTimeOffsetHasBeenSet = true; m_endTimeOffset = std::forward<EndTimeOffsetT>(value); }
    template<typename EndTimeOffsetT = Aws::String>
    EndpointInput& WithEndTimeOffset(EndTimeOffsetT&& value) { SetEndTimeOffset(std::forward<EndTimeOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of the input data to exclude from the analysis.</p>
     */
    inline const Aws::String& GetExcludeFeaturesAttribute() const { return m_excludeFeaturesAttribute; }
    inline bool ExcludeFeaturesAttributeHasBeenSet() const { return m_excludeFeaturesAttributeHasBeenSet; }
    template<typename ExcludeFeaturesAttributeT = Aws::String>
    void SetExcludeFeaturesAttribute(ExcludeFeaturesAttributeT&& value) { m_excludeFeaturesAttributeHasBeenSet = true; m_excludeFeaturesAttribute = std::forward<ExcludeFeaturesAttributeT>(value); }
    template<typename ExcludeFeaturesAttributeT = Aws::String>
    EndpointInput& WithExcludeFeaturesAttribute(ExcludeFeaturesAttributeT&& value) { SetExcludeFeaturesAttribute(std::forward<ExcludeFeaturesAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    ProcessingS3InputMode m_s3InputMode{ProcessingS3InputMode::NOT_SET};
    bool m_s3InputModeHasBeenSet = false;

    ProcessingS3DataDistributionType m_s3DataDistributionType{ProcessingS3DataDistributionType::NOT_SET};
    bool m_s3DataDistributionTypeHasBeenSet = false;

    Aws::String m_featuresAttribute;
    bool m_featuresAttributeHasBeenSet = false;

    Aws::String m_inferenceAttribute;
    bool m_inferenceAttributeHasBeenSet = false;

    Aws::String m_probabilityAttribute;
    bool m_probabilityAttributeHasBeenSet = false;

    double m_probabilityThresholdAttribute{0.0};
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
