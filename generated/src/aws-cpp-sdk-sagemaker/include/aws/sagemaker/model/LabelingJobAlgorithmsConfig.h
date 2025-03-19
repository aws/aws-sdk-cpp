/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobResourceConfig.h>
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
   * <p>Provides configuration information for auto-labeling of your data objects. A
   * <code>LabelingJobAlgorithmsConfig</code> object must be supplied in order to use
   * auto-labeling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobAlgorithmsConfig">AWS
   * API Reference</a></p>
   */
  class LabelingJobAlgorithmsConfig
  {
  public:
    AWS_SAGEMAKER_API LabelingJobAlgorithmsConfig() = default;
    AWS_SAGEMAKER_API LabelingJobAlgorithmsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobAlgorithmsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the algorithm used for
     * auto-labeling. You must select one of the following ARNs:</p> <ul> <li> <p>
     * <i>Image classification</i> </p> <p>
     * <code>arn:aws:sagemaker:<i>region</i>:027400017018:labeling-job-algorithm-specification/image-classification</code>
     * </p> </li> <li> <p> <i>Text classification</i> </p> <p>
     * <code>arn:aws:sagemaker:<i>region</i>:027400017018:labeling-job-algorithm-specification/text-classification</code>
     * </p> </li> <li> <p> <i>Object detection</i> </p> <p>
     * <code>arn:aws:sagemaker:<i>region</i>:027400017018:labeling-job-algorithm-specification/object-detection</code>
     * </p> </li> <li> <p> <i>Semantic Segmentation</i> </p> <p>
     * <code>arn:aws:sagemaker:<i>region</i>:027400017018:labeling-job-algorithm-specification/semantic-segmentation</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetLabelingJobAlgorithmSpecificationArn() const { return m_labelingJobAlgorithmSpecificationArn; }
    inline bool LabelingJobAlgorithmSpecificationArnHasBeenSet() const { return m_labelingJobAlgorithmSpecificationArnHasBeenSet; }
    template<typename LabelingJobAlgorithmSpecificationArnT = Aws::String>
    void SetLabelingJobAlgorithmSpecificationArn(LabelingJobAlgorithmSpecificationArnT&& value) { m_labelingJobAlgorithmSpecificationArnHasBeenSet = true; m_labelingJobAlgorithmSpecificationArn = std::forward<LabelingJobAlgorithmSpecificationArnT>(value); }
    template<typename LabelingJobAlgorithmSpecificationArnT = Aws::String>
    LabelingJobAlgorithmsConfig& WithLabelingJobAlgorithmSpecificationArn(LabelingJobAlgorithmSpecificationArnT&& value) { SetLabelingJobAlgorithmSpecificationArn(std::forward<LabelingJobAlgorithmSpecificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>At the end of an auto-label job Ground Truth sends the Amazon Resource Name
     * (ARN) of the final model used for auto-labeling. You can use this model as the
     * starting point for subsequent similar jobs by providing the ARN of the model
     * here. </p>
     */
    inline const Aws::String& GetInitialActiveLearningModelArn() const { return m_initialActiveLearningModelArn; }
    inline bool InitialActiveLearningModelArnHasBeenSet() const { return m_initialActiveLearningModelArnHasBeenSet; }
    template<typename InitialActiveLearningModelArnT = Aws::String>
    void SetInitialActiveLearningModelArn(InitialActiveLearningModelArnT&& value) { m_initialActiveLearningModelArnHasBeenSet = true; m_initialActiveLearningModelArn = std::forward<InitialActiveLearningModelArnT>(value); }
    template<typename InitialActiveLearningModelArnT = Aws::String>
    LabelingJobAlgorithmsConfig& WithInitialActiveLearningModelArn(InitialActiveLearningModelArnT&& value) { SetInitialActiveLearningModelArn(std::forward<InitialActiveLearningModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information for a labeling job.</p>
     */
    inline const LabelingJobResourceConfig& GetLabelingJobResourceConfig() const { return m_labelingJobResourceConfig; }
    inline bool LabelingJobResourceConfigHasBeenSet() const { return m_labelingJobResourceConfigHasBeenSet; }
    template<typename LabelingJobResourceConfigT = LabelingJobResourceConfig>
    void SetLabelingJobResourceConfig(LabelingJobResourceConfigT&& value) { m_labelingJobResourceConfigHasBeenSet = true; m_labelingJobResourceConfig = std::forward<LabelingJobResourceConfigT>(value); }
    template<typename LabelingJobResourceConfigT = LabelingJobResourceConfig>
    LabelingJobAlgorithmsConfig& WithLabelingJobResourceConfig(LabelingJobResourceConfigT&& value) { SetLabelingJobResourceConfig(std::forward<LabelingJobResourceConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelingJobAlgorithmSpecificationArn;
    bool m_labelingJobAlgorithmSpecificationArnHasBeenSet = false;

    Aws::String m_initialActiveLearningModelArn;
    bool m_initialActiveLearningModelArnHasBeenSet = false;

    LabelingJobResourceConfig m_labelingJobResourceConfig;
    bool m_labelingJobResourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
