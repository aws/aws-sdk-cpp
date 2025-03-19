/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3Input.h>
#include <aws/sagemaker/model/DatasetDefinition.h>
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
   * <p>The inputs for a processing job. The processing input must specify exactly
   * one of either <code>S3Input</code> or <code>DatasetDefinition</code>
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingInput">AWS
   * API Reference</a></p>
   */
  class ProcessingInput
  {
  public:
    AWS_SAGEMAKER_API ProcessingInput() = default;
    AWS_SAGEMAKER_API ProcessingInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the processing job input.</p>
     */
    inline const Aws::String& GetInputName() const { return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    template<typename InputNameT = Aws::String>
    void SetInputName(InputNameT&& value) { m_inputNameHasBeenSet = true; m_inputName = std::forward<InputNameT>(value); }
    template<typename InputNameT = Aws::String>
    ProcessingInput& WithInputName(InputNameT&& value) { SetInputName(std::forward<InputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>True</code>, input operations such as data download are managed
     * natively by the processing job application. When <code>False</code> (default),
     * input operations are managed by Amazon SageMaker.</p>
     */
    inline bool GetAppManaged() const { return m_appManaged; }
    inline bool AppManagedHasBeenSet() const { return m_appManagedHasBeenSet; }
    inline void SetAppManaged(bool value) { m_appManagedHasBeenSet = true; m_appManaged = value; }
    inline ProcessingInput& WithAppManaged(bool value) { SetAppManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for downloading input data from Amazon S3 into the processing
     * container.</p>
     */
    inline const ProcessingS3Input& GetS3Input() const { return m_s3Input; }
    inline bool S3InputHasBeenSet() const { return m_s3InputHasBeenSet; }
    template<typename S3InputT = ProcessingS3Input>
    void SetS3Input(S3InputT&& value) { m_s3InputHasBeenSet = true; m_s3Input = std::forward<S3InputT>(value); }
    template<typename S3InputT = ProcessingS3Input>
    ProcessingInput& WithS3Input(S3InputT&& value) { SetS3Input(std::forward<S3InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for a Dataset Definition input. </p>
     */
    inline const DatasetDefinition& GetDatasetDefinition() const { return m_datasetDefinition; }
    inline bool DatasetDefinitionHasBeenSet() const { return m_datasetDefinitionHasBeenSet; }
    template<typename DatasetDefinitionT = DatasetDefinition>
    void SetDatasetDefinition(DatasetDefinitionT&& value) { m_datasetDefinitionHasBeenSet = true; m_datasetDefinition = std::forward<DatasetDefinitionT>(value); }
    template<typename DatasetDefinitionT = DatasetDefinition>
    ProcessingInput& WithDatasetDefinition(DatasetDefinitionT&& value) { SetDatasetDefinition(std::forward<DatasetDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    bool m_appManaged{false};
    bool m_appManagedHasBeenSet = false;

    ProcessingS3Input m_s3Input;
    bool m_s3InputHasBeenSet = false;

    DatasetDefinition m_datasetDefinition;
    bool m_datasetDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
