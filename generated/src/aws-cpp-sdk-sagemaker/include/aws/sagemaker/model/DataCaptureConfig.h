/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CaptureContentTypeHeader.h>
#include <aws/sagemaker/model/CaptureOption.h>
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
   * <p>Configuration to control how SageMaker AI captures inference
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataCaptureConfig">AWS
   * API Reference</a></p>
   */
  class DataCaptureConfig
  {
  public:
    AWS_SAGEMAKER_API DataCaptureConfig();
    AWS_SAGEMAKER_API DataCaptureConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataCaptureConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether data capture should be enabled or disabled (defaults to enabled).</p>
     */
    inline bool GetEnableCapture() const{ return m_enableCapture; }
    inline bool EnableCaptureHasBeenSet() const { return m_enableCaptureHasBeenSet; }
    inline void SetEnableCapture(bool value) { m_enableCaptureHasBeenSet = true; m_enableCapture = value; }
    inline DataCaptureConfig& WithEnableCapture(bool value) { SetEnableCapture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of requests SageMaker AI will capture. A lower value is
     * recommended for Endpoints with high traffic.</p>
     */
    inline int GetInitialSamplingPercentage() const{ return m_initialSamplingPercentage; }
    inline bool InitialSamplingPercentageHasBeenSet() const { return m_initialSamplingPercentageHasBeenSet; }
    inline void SetInitialSamplingPercentage(int value) { m_initialSamplingPercentageHasBeenSet = true; m_initialSamplingPercentage = value; }
    inline DataCaptureConfig& WithInitialSamplingPercentage(int value) { SetInitialSamplingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location used to capture the data.</p>
     */
    inline const Aws::String& GetDestinationS3Uri() const{ return m_destinationS3Uri; }
    inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }
    inline void SetDestinationS3Uri(const Aws::String& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = value; }
    inline void SetDestinationS3Uri(Aws::String&& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = std::move(value); }
    inline void SetDestinationS3Uri(const char* value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri.assign(value); }
    inline DataCaptureConfig& WithDestinationS3Uri(const Aws::String& value) { SetDestinationS3Uri(value); return *this;}
    inline DataCaptureConfig& WithDestinationS3Uri(Aws::String&& value) { SetDestinationS3Uri(std::move(value)); return *this;}
    inline DataCaptureConfig& WithDestinationS3Uri(const char* value) { SetDestinationS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Key Management Service key that
     * SageMaker AI uses to encrypt the captured data at rest using Amazon S3
     * server-side encryption.</p> <p>The KmsKeyId can be any of the following formats:
     * </p> <ul> <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p>
     * </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias name ARN:
     * <code>arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DataCaptureConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DataCaptureConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DataCaptureConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies data Model Monitor will capture. You can configure whether to
     * collect only input, only output, or both</p>
     */
    inline const Aws::Vector<CaptureOption>& GetCaptureOptions() const{ return m_captureOptions; }
    inline bool CaptureOptionsHasBeenSet() const { return m_captureOptionsHasBeenSet; }
    inline void SetCaptureOptions(const Aws::Vector<CaptureOption>& value) { m_captureOptionsHasBeenSet = true; m_captureOptions = value; }
    inline void SetCaptureOptions(Aws::Vector<CaptureOption>&& value) { m_captureOptionsHasBeenSet = true; m_captureOptions = std::move(value); }
    inline DataCaptureConfig& WithCaptureOptions(const Aws::Vector<CaptureOption>& value) { SetCaptureOptions(value); return *this;}
    inline DataCaptureConfig& WithCaptureOptions(Aws::Vector<CaptureOption>&& value) { SetCaptureOptions(std::move(value)); return *this;}
    inline DataCaptureConfig& AddCaptureOptions(const CaptureOption& value) { m_captureOptionsHasBeenSet = true; m_captureOptions.push_back(value); return *this; }
    inline DataCaptureConfig& AddCaptureOptions(CaptureOption&& value) { m_captureOptionsHasBeenSet = true; m_captureOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration specifying how to treat different headers. If no headers are
     * specified SageMaker AI will by default base64 encode when capturing the
     * data.</p>
     */
    inline const CaptureContentTypeHeader& GetCaptureContentTypeHeader() const{ return m_captureContentTypeHeader; }
    inline bool CaptureContentTypeHeaderHasBeenSet() const { return m_captureContentTypeHeaderHasBeenSet; }
    inline void SetCaptureContentTypeHeader(const CaptureContentTypeHeader& value) { m_captureContentTypeHeaderHasBeenSet = true; m_captureContentTypeHeader = value; }
    inline void SetCaptureContentTypeHeader(CaptureContentTypeHeader&& value) { m_captureContentTypeHeaderHasBeenSet = true; m_captureContentTypeHeader = std::move(value); }
    inline DataCaptureConfig& WithCaptureContentTypeHeader(const CaptureContentTypeHeader& value) { SetCaptureContentTypeHeader(value); return *this;}
    inline DataCaptureConfig& WithCaptureContentTypeHeader(CaptureContentTypeHeader&& value) { SetCaptureContentTypeHeader(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enableCapture;
    bool m_enableCaptureHasBeenSet = false;

    int m_initialSamplingPercentage;
    bool m_initialSamplingPercentageHasBeenSet = false;

    Aws::String m_destinationS3Uri;
    bool m_destinationS3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<CaptureOption> m_captureOptions;
    bool m_captureOptionsHasBeenSet = false;

    CaptureContentTypeHeader m_captureContentTypeHeader;
    bool m_captureContentTypeHeaderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
