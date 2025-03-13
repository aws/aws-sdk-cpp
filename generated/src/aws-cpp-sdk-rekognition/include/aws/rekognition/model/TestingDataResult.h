/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/TestingData.h>
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
   * <p>Sagemaker Groundtruth format manifest files for the input, output and
   * validation datasets that are used and created during testing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TestingDataResult">AWS
   * API Reference</a></p>
   */
  class TestingDataResult
  {
  public:
    AWS_REKOGNITION_API TestingDataResult() = default;
    AWS_REKOGNITION_API TestingDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TestingDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline const TestingData& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = TestingData>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = TestingData>
    TestingDataResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline const TestingData& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = TestingData>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = TestingData>
    TestingDataResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline const ValidationData& GetValidation() const { return m_validation; }
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
    template<typename ValidationT = ValidationData>
    void SetValidation(ValidationT&& value) { m_validationHasBeenSet = true; m_validation = std::forward<ValidationT>(value); }
    template<typename ValidationT = ValidationData>
    TestingDataResult& WithValidation(ValidationT&& value) { SetValidation(std::forward<ValidationT>(value)); return *this;}
    ///@}
  private:

    TestingData m_input;
    bool m_inputHasBeenSet = false;

    TestingData m_output;
    bool m_outputHasBeenSet = false;

    ValidationData m_validation;
    bool m_validationHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
