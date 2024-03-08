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
    AWS_REKOGNITION_API TrainingDataResult();
    AWS_REKOGNITION_API TrainingDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TrainingDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The training data that you supplied.</p>
     */
    inline const TrainingData& GetInput() const{ return m_input; }

    /**
     * <p>The training data that you supplied.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The training data that you supplied.</p>
     */
    inline void SetInput(const TrainingData& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The training data that you supplied.</p>
     */
    inline void SetInput(TrainingData&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The training data that you supplied.</p>
     */
    inline TrainingDataResult& WithInput(const TrainingData& value) { SetInput(value); return *this;}

    /**
     * <p>The training data that you supplied.</p>
     */
    inline TrainingDataResult& WithInput(TrainingData&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline const TrainingData& GetOutput() const{ return m_output; }

    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline void SetOutput(const TrainingData& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline void SetOutput(TrainingData&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline TrainingDataResult& WithOutput(const TrainingData& value) { SetOutput(value); return *this;}

    /**
     * <p>Reference to images (assets) that were actually used during training with
     * trained model predictions.</p>
     */
    inline TrainingDataResult& WithOutput(TrainingData&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline const ValidationData& GetValidation() const{ return m_validation; }

    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }

    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline void SetValidation(const ValidationData& value) { m_validationHasBeenSet = true; m_validation = value; }

    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline void SetValidation(ValidationData&& value) { m_validationHasBeenSet = true; m_validation = std::move(value); }

    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline TrainingDataResult& WithValidation(const ValidationData& value) { SetValidation(value); return *this;}

    /**
     * <p>A manifest that you supplied for training, with validation results for each
     * line.</p>
     */
    inline TrainingDataResult& WithValidation(ValidationData&& value) { SetValidation(std::move(value)); return *this;}

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
