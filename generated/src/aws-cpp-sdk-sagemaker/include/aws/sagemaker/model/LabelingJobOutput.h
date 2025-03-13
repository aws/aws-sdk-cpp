/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the location of the output produced by the labeling job.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobOutput">AWS
   * API Reference</a></p>
   */
  class LabelingJobOutput
  {
  public:
    AWS_SAGEMAKER_API LabelingJobOutput() = default;
    AWS_SAGEMAKER_API LabelingJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket location of the manifest file for labeled data. </p>
     */
    inline const Aws::String& GetOutputDatasetS3Uri() const { return m_outputDatasetS3Uri; }
    inline bool OutputDatasetS3UriHasBeenSet() const { return m_outputDatasetS3UriHasBeenSet; }
    template<typename OutputDatasetS3UriT = Aws::String>
    void SetOutputDatasetS3Uri(OutputDatasetS3UriT&& value) { m_outputDatasetS3UriHasBeenSet = true; m_outputDatasetS3Uri = std::forward<OutputDatasetS3UriT>(value); }
    template<typename OutputDatasetS3UriT = Aws::String>
    LabelingJobOutput& WithOutputDatasetS3Uri(OutputDatasetS3UriT&& value) { SetOutputDatasetS3Uri(std::forward<OutputDatasetS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the most recent SageMaker model trained as
     * part of automated data labeling. </p>
     */
    inline const Aws::String& GetFinalActiveLearningModelArn() const { return m_finalActiveLearningModelArn; }
    inline bool FinalActiveLearningModelArnHasBeenSet() const { return m_finalActiveLearningModelArnHasBeenSet; }
    template<typename FinalActiveLearningModelArnT = Aws::String>
    void SetFinalActiveLearningModelArn(FinalActiveLearningModelArnT&& value) { m_finalActiveLearningModelArnHasBeenSet = true; m_finalActiveLearningModelArn = std::forward<FinalActiveLearningModelArnT>(value); }
    template<typename FinalActiveLearningModelArnT = Aws::String>
    LabelingJobOutput& WithFinalActiveLearningModelArn(FinalActiveLearningModelArnT&& value) { SetFinalActiveLearningModelArn(std::forward<FinalActiveLearningModelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputDatasetS3Uri;
    bool m_outputDatasetS3UriHasBeenSet = false;

    Aws::String m_finalActiveLearningModelArn;
    bool m_finalActiveLearningModelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
