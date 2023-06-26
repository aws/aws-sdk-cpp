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
    AWS_SAGEMAKER_API ProcessingOutput();
    AWS_SAGEMAKER_API ProcessingOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the processing job output.</p>
     */
    inline const Aws::String& GetOutputName() const{ return m_outputName; }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline void SetOutputName(const Aws::String& value) { m_outputNameHasBeenSet = true; m_outputName = value; }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline void SetOutputName(Aws::String&& value) { m_outputNameHasBeenSet = true; m_outputName = std::move(value); }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline void SetOutputName(const char* value) { m_outputNameHasBeenSet = true; m_outputName.assign(value); }

    /**
     * <p>The name for the processing job output.</p>
     */
    inline ProcessingOutput& WithOutputName(const Aws::String& value) { SetOutputName(value); return *this;}

    /**
     * <p>The name for the processing job output.</p>
     */
    inline ProcessingOutput& WithOutputName(Aws::String&& value) { SetOutputName(std::move(value)); return *this;}

    /**
     * <p>The name for the processing job output.</p>
     */
    inline ProcessingOutput& WithOutputName(const char* value) { SetOutputName(value); return *this;}


    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline const ProcessingS3Output& GetS3Output() const{ return m_s3Output; }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline bool S3OutputHasBeenSet() const { return m_s3OutputHasBeenSet; }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline void SetS3Output(const ProcessingS3Output& value) { m_s3OutputHasBeenSet = true; m_s3Output = value; }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline void SetS3Output(ProcessingS3Output&& value) { m_s3OutputHasBeenSet = true; m_s3Output = std::move(value); }

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline ProcessingOutput& WithS3Output(const ProcessingS3Output& value) { SetS3Output(value); return *this;}

    /**
     * <p>Configuration for processing job outputs in Amazon S3.</p>
     */
    inline ProcessingOutput& WithS3Output(ProcessingS3Output&& value) { SetS3Output(std::move(value)); return *this;}


    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline const ProcessingFeatureStoreOutput& GetFeatureStoreOutput() const{ return m_featureStoreOutput; }

    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline bool FeatureStoreOutputHasBeenSet() const { return m_featureStoreOutputHasBeenSet; }

    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline void SetFeatureStoreOutput(const ProcessingFeatureStoreOutput& value) { m_featureStoreOutputHasBeenSet = true; m_featureStoreOutput = value; }

    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline void SetFeatureStoreOutput(ProcessingFeatureStoreOutput&& value) { m_featureStoreOutputHasBeenSet = true; m_featureStoreOutput = std::move(value); }

    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline ProcessingOutput& WithFeatureStoreOutput(const ProcessingFeatureStoreOutput& value) { SetFeatureStoreOutput(value); return *this;}

    /**
     * <p>Configuration for processing job outputs in Amazon SageMaker Feature Store.
     * This processing output type is only supported when <code>AppManaged</code> is
     * specified. </p>
     */
    inline ProcessingOutput& WithFeatureStoreOutput(ProcessingFeatureStoreOutput&& value) { SetFeatureStoreOutput(std::move(value)); return *this;}


    /**
     * <p>When <code>True</code>, output operations such as data upload are managed
     * natively by the processing job application. When <code>False</code> (default),
     * output operations are managed by Amazon SageMaker.</p>
     */
    inline bool GetAppManaged() const{ return m_appManaged; }

    /**
     * <p>When <code>True</code>, output operations such as data upload are managed
     * natively by the processing job application. When <code>False</code> (default),
     * output operations are managed by Amazon SageMaker.</p>
     */
    inline bool AppManagedHasBeenSet() const { return m_appManagedHasBeenSet; }

    /**
     * <p>When <code>True</code>, output operations such as data upload are managed
     * natively by the processing job application. When <code>False</code> (default),
     * output operations are managed by Amazon SageMaker.</p>
     */
    inline void SetAppManaged(bool value) { m_appManagedHasBeenSet = true; m_appManaged = value; }

    /**
     * <p>When <code>True</code>, output operations such as data upload are managed
     * natively by the processing job application. When <code>False</code> (default),
     * output operations are managed by Amazon SageMaker.</p>
     */
    inline ProcessingOutput& WithAppManaged(bool value) { SetAppManaged(value); return *this;}

  private:

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;

    ProcessingS3Output m_s3Output;
    bool m_s3OutputHasBeenSet = false;

    ProcessingFeatureStoreOutput m_featureStoreOutput;
    bool m_featureStoreOutputHasBeenSet = false;

    bool m_appManaged;
    bool m_appManagedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
