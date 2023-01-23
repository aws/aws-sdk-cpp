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
    AWS_REKOGNITION_API TestingDataResult();
    AWS_REKOGNITION_API TestingDataResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TestingDataResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline const TestingData& GetInput() const{ return m_input; }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline void SetInput(const TestingData& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline void SetInput(TestingData&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline TestingDataResult& WithInput(const TestingData& value) { SetInput(value); return *this;}

    /**
     * <p>The testing dataset that was supplied for training.</p>
     */
    inline TestingDataResult& WithInput(TestingData&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline const TestingData& GetOutput() const{ return m_output; }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline void SetOutput(const TestingData& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline void SetOutput(TestingData&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline TestingDataResult& WithOutput(const TestingData& value) { SetOutput(value); return *this;}

    /**
     * <p>The subset of the dataset that was actually tested. Some images (assets)
     * might not be tested due to file formatting and other issues. </p>
     */
    inline TestingDataResult& WithOutput(TestingData&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline const ValidationData& GetValidation() const{ return m_validation; }

    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }

    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline void SetValidation(const ValidationData& value) { m_validationHasBeenSet = true; m_validation = value; }

    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline void SetValidation(ValidationData&& value) { m_validationHasBeenSet = true; m_validation = std::move(value); }

    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline TestingDataResult& WithValidation(const ValidationData& value) { SetValidation(value); return *this;}

    /**
     * <p>The location of the data validation manifest. The data validation manifest is
     * created for the test dataset during model training.</p>
     */
    inline TestingDataResult& WithValidation(ValidationData&& value) { SetValidation(std::move(value)); return *this;}

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
