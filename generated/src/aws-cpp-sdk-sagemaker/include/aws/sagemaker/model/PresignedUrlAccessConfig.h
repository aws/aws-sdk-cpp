/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configuration for accessing hub content through presigned URLs, including
   * license agreement acceptance and URL validation settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PresignedUrlAccessConfig">AWS
   * API Reference</a></p>
   */
  class PresignedUrlAccessConfig
  {
  public:
    AWS_SAGEMAKER_API PresignedUrlAccessConfig() = default;
    AWS_SAGEMAKER_API PresignedUrlAccessConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PresignedUrlAccessConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates acceptance of the End User License Agreement (EULA) for gated
     * models. Set to true to acknowledge acceptance of the license terms required for
     * accessing gated content.</p>
     */
    inline bool GetAcceptEula() const { return m_acceptEula; }
    inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }
    inline void SetAcceptEula(bool value) { m_acceptEulaHasBeenSet = true; m_acceptEula = value; }
    inline PresignedUrlAccessConfig& WithAcceptEula(bool value) { SetAcceptEula(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected S3 URL prefix for validation purposes. This parameter helps
     * ensure consistency between the resolved S3 URIs and the deployment
     * configuration, reducing potential compatibility issues.</p>
     */
    inline const Aws::String& GetExpectedS3Url() const { return m_expectedS3Url; }
    inline bool ExpectedS3UrlHasBeenSet() const { return m_expectedS3UrlHasBeenSet; }
    template<typename ExpectedS3UrlT = Aws::String>
    void SetExpectedS3Url(ExpectedS3UrlT&& value) { m_expectedS3UrlHasBeenSet = true; m_expectedS3Url = std::forward<ExpectedS3UrlT>(value); }
    template<typename ExpectedS3UrlT = Aws::String>
    PresignedUrlAccessConfig& WithExpectedS3Url(ExpectedS3UrlT&& value) { SetExpectedS3Url(std::forward<ExpectedS3UrlT>(value)); return *this;}
    ///@}
  private:

    bool m_acceptEula{false};
    bool m_acceptEulaHasBeenSet = false;

    Aws::String m_expectedS3Url;
    bool m_expectedS3UrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
