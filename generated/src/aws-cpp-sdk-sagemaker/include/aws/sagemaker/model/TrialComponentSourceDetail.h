/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingJob.h>
#include <aws/sagemaker/model/ProcessingJob.h>
#include <aws/sagemaker/model/TransformJob.h>
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
   * <p>Detailed information about the source of a trial component. Either
   * <code>ProcessingJob</code> or <code>TrainingJob</code> is
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentSourceDetail">AWS
   * API Reference</a></p>
   */
  class TrialComponentSourceDetail
  {
  public:
    AWS_SAGEMAKER_API TrialComponentSourceDetail();
    AWS_SAGEMAKER_API TrialComponentSourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentSourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline TrialComponentSourceDetail& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline TrialComponentSourceDetail& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline TrialComponentSourceDetail& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a training job that's the source of a trial component.</p>
     */
    inline const TrainingJob& GetTrainingJob() const{ return m_trainingJob; }
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }
    inline void SetTrainingJob(const TrainingJob& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }
    inline void SetTrainingJob(TrainingJob&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }
    inline TrialComponentSourceDetail& WithTrainingJob(const TrainingJob& value) { SetTrainingJob(value); return *this;}
    inline TrialComponentSourceDetail& WithTrainingJob(TrainingJob&& value) { SetTrainingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a processing job that's the source of a trial
     * component.</p>
     */
    inline const ProcessingJob& GetProcessingJob() const{ return m_processingJob; }
    inline bool ProcessingJobHasBeenSet() const { return m_processingJobHasBeenSet; }
    inline void SetProcessingJob(const ProcessingJob& value) { m_processingJobHasBeenSet = true; m_processingJob = value; }
    inline void SetProcessingJob(ProcessingJob&& value) { m_processingJobHasBeenSet = true; m_processingJob = std::move(value); }
    inline TrialComponentSourceDetail& WithProcessingJob(const ProcessingJob& value) { SetProcessingJob(value); return *this;}
    inline TrialComponentSourceDetail& WithProcessingJob(ProcessingJob&& value) { SetProcessingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a transform job that's the source of a trial component.</p>
     */
    inline const TransformJob& GetTransformJob() const{ return m_transformJob; }
    inline bool TransformJobHasBeenSet() const { return m_transformJobHasBeenSet; }
    inline void SetTransformJob(const TransformJob& value) { m_transformJobHasBeenSet = true; m_transformJob = value; }
    inline void SetTransformJob(TransformJob&& value) { m_transformJobHasBeenSet = true; m_transformJob = std::move(value); }
    inline TrialComponentSourceDetail& WithTransformJob(const TransformJob& value) { SetTransformJob(value); return *this;}
    inline TrialComponentSourceDetail& WithTransformJob(TransformJob&& value) { SetTransformJob(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    TrainingJob m_trainingJob;
    bool m_trainingJobHasBeenSet = false;

    ProcessingJob m_processingJob;
    bool m_processingJobHasBeenSet = false;

    TransformJob m_transformJob;
    bool m_transformJobHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
