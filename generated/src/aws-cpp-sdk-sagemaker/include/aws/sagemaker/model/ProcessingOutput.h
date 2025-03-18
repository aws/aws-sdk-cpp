/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3Output.h>
#include <aws/sagemaker/model/ProcessingFeatureStoreOutput.h>
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
   * <p>Describes the results of a processing job. The processing output must specify
   * exactly one of either <code>S3Output</code> or <code>FeatureStoreOutput</code>
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingOutput">AWS
   * API Reference</a></p>
   */
  class ProcessingOutput
  {
  public:
    AWS_SAGEMAKER_API ProcessingOutput() = default;
    AWS_SAGEMAKER_API ProcessingOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the processing job output.</p>
     */
    inline const Aws::String& GetOutputName() const { return m_outputName; }
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
    template<typename OutputNameT = Aws::String>
    void SetOutputName(OutputNameT&& value) { m_outputNameHasBeenSet = true; m_outputName = std::forward<OutputNameT>(value); }
    template<typename OutputNameT = Aws::String>
    ProcessingOutput& WithOutputName(OutputNameT&& value) { SetOutputName(std::forward<OutputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline const ProcessingS3Output& GetS3Output() const { return m_s3Output; }
    inline bool S3OutputHasBeenSet() const { return m_s3OutputHasBeenSet; }
    template<typename S3OutputT = ProcessingS3Output>
    void SetS3Output(S3OutputT&& value) { m_s3OutputHasBeenSet = true; m_s3Output = std::forward<S3OutputT>(value); }
    template<typename S3OutputT = ProcessingS3Output>
    ProcessingOutput& WithS3Output(S3OutputT&& value) { SetS3Output(std::forward<S3OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline const ProcessingFeatureStoreOutput& GetFeatureStoreOutput() const { return m_featureStoreOutput; }
    inline bool FeatureStoreOutputHasBeenSet() const { return m_featureStoreOutputHasBeenSet; }
    template<typename FeatureStoreOutputT = ProcessingFeatureStoreOutput>
    void SetFeatureStoreOutput(FeatureStoreOutputT&& value) { m_featureStoreOutputHasBeenSet = true; m_featureStoreOutput = std::forward<FeatureStoreOutputT>(value); }
    template<typename FeatureStoreOutputT = ProcessingFeatureStoreOutput>
    ProcessingOutput& WithFeatureStoreOutput(FeatureStoreOutputT&& value) { SetFeatureStoreOutput(std::forward<FeatureStoreOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>True</code>, output operations such as data upload are managed
     * natively by the processing job application. When <code>False</code> (default),
     * output operations are managed by Amazon SageMaker.</p>
     */
    inline bool GetAppManaged() const { return m_appManaged; }
    inline bool AppManagedHasBeenSet() const { return m_appManagedHasBeenSet; }
    inline void SetAppManaged(bool value) { m_appManagedHasBeenSet = true; m_appManaged = value; }
    inline ProcessingOutput& WithAppManaged(bool value) { SetAppManaged(value); return *this;}
    ///@}
  private:

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;

    ProcessingS3Output m_s3Output;
    bool m_s3OutputHasBeenSet = false;

    ProcessingFeatureStoreOutput m_featureStoreOutput;
    bool m_featureStoreOutputHasBeenSet = false;

    bool m_appManaged{false};
    bool m_appManagedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
