/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/TrainingData.h>
#include <aws/rekognition/model/ValidationData.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The data validation manifest created for the training dataset during model
   * training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TrainingDataResult">AWS
   * API Reference</a></p>
   */
  class TrainingDataResult
  {
  public:
    AWS_REKOGNITION_API TrainingDataResult() = default;
    AWS_REKOGNITION_API TrainingDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TrainingDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The training data that you supplied.</p>
     */
    inline const TrainingData& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = TrainingData>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = TrainingData>
    TrainingDataResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline const TrainingData& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = TrainingData>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = TrainingData>
    TrainingDataResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline const ValidationData& GetValidation() const { return m_validation; }
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
    template<typename ValidationT = ValidationData>
    void SetValidation(ValidationT&& value) { m_validationHasBeenSet = true; m_validation = std::forward<ValidationT>(value); }
    template<typename ValidationT = ValidationData>
    TrainingDataResult& WithValidation(ValidationT&& value) { SetValidation(std::forward<ValidationT>(value)); return *this;}
    ///@}
  private:

    TrainingData m_input;
    bool m_inputHasBeenSet = false;

    TrainingData m_output;
    bool m_outputHasBeenSet = false;

    ValidationData m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
