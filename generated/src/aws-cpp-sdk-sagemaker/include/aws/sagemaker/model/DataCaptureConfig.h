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
    AWS_SAGEMAKER_API DataCaptureConfig() = default;
    AWS_SAGEMAKER_API DataCaptureConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataCaptureConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether data capture should be enabled or disabled (defaults to enabled).</p>
     */
    inline bool GetEnableCapture() const { return m_enableCapture; }
    inline bool EnableCaptureHasBeenSet() const { return m_enableCaptureHasBeenSet; }
    inline void SetEnableCapture(bool value) { m_enableCaptureHasBeenSet = true; m_enableCapture = value; }
    inline DataCaptureConfig& WithEnableCapture(bool value) { SetEnableCapture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of requests SageMaker AI will capture. A lower value is
     * recommended for Endpoints with high traffic.</p>
     */
    inline int GetInitialSamplingPercentage() const { return m_initialSamplingPercentage; }
    inline bool InitialSamplingPercentageHasBeenSet() const { return m_initialSamplingPercentageHasBeenSet; }
    inline void SetInitialSamplingPercentage(int value) { m_initialSamplingPercentageHasBeenSet = true; m_initialSamplingPercentage = value; }
    inline DataCaptureConfig& WithInitialSamplingPercentage(int value) { SetInitialSamplingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location used to capture the data.</p>
     */
    inline const Aws::String& GetDestinationS3Uri() const { return m_destinationS3Uri; }
    inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }
    template<typename DestinationS3UriT = Aws::String>
    void SetDestinationS3Uri(DestinationS3UriT&& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = std::forward<DestinationS3UriT>(value); }
    template<typename DestinationS3UriT = Aws::String>
    DataCaptureConfig& WithDestinationS3Uri(DestinationS3UriT&& value) { SetDestinationS3Uri(std::forward<DestinationS3UriT>(value)); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DataCaptureConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies data Model Monitor will capture. You can configure whether to
     * collect only input, only output, or both</p>
     */
    inline const Aws::Vector<CaptureOption>& GetCaptureOptions() const { return m_captureOptions; }
    inline bool CaptureOptionsHasBeenSet() const { return m_captureOptionsHasBeenSet; }
    template<typename CaptureOptionsT = Aws::Vector<CaptureOption>>
    void SetCaptureOptions(CaptureOptionsT&& value) { m_captureOptionsHasBeenSet = true; m_captureOptions = std::forward<CaptureOptionsT>(value); }
    template<typename CaptureOptionsT = Aws::Vector<CaptureOption>>
    DataCaptureConfig& WithCaptureOptions(CaptureOptionsT&& value) { SetCaptureOptions(std::forward<CaptureOptionsT>(value)); return *this;}
    template<typename CaptureOptionsT = CaptureOption>
    DataCaptureConfig& AddCaptureOptions(CaptureOptionsT&& value) { m_captureOptionsHasBeenSet = true; m_captureOptions.emplace_back(std::forward<CaptureOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration specifying how to treat different headers. If no headers are
     * specified SageMaker AI will by default base64 encode when capturing the
     * data.</p>
     */
    inline const CaptureContentTypeHeader& GetCaptureContentTypeHeader() const { return m_captureContentTypeHeader; }
    inline bool CaptureContentTypeHeaderHasBeenSet() const { return m_captureContentTypeHeaderHasBeenSet; }
    template<typename CaptureContentTypeHeaderT = CaptureContentTypeHeader>
    void SetCaptureContentTypeHeader(CaptureContentTypeHeaderT&& value) { m_captureContentTypeHeaderHasBeenSet = true; m_captureContentTypeHeader = std::forward<CaptureContentTypeHeaderT>(value); }
    template<typename CaptureContentTypeHeaderT = CaptureContentTypeHeader>
    DataCaptureConfig& WithCaptureContentTypeHeader(CaptureContentTypeHeaderT&& value) { SetCaptureContentTypeHeader(std::forward<CaptureContentTypeHeaderT>(value)); return *this;}
    ///@}
  private:

    bool m_enableCapture{false};
    bool m_enableCaptureHasBeenSet = false;

    int m_initialSamplingPercentage{0};
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
