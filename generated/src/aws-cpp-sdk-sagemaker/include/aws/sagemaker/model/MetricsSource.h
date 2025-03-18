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
   * <p>Details about the metrics source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricsSource">AWS
   * API Reference</a></p>
   */
  class MetricsSource
  {
  public:
    AWS_SAGEMAKER_API MetricsSource() = default;
    AWS_SAGEMAKER_API MetricsSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MetricsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric source content type.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    MetricsSource& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash key used for the metrics source.</p>
     */
    inline const Aws::String& GetContentDigest() const { return m_contentDigest; }
    inline bool ContentDigestHasBeenSet() const { return m_contentDigestHasBeenSet; }
    template<typename ContentDigestT = Aws::String>
    void SetContentDigest(ContentDigestT&& value) { m_contentDigestHasBeenSet = true; m_contentDigest = std::forward<ContentDigestT>(value); }
    template<typename ContentDigestT = Aws::String>
    MetricsSource& WithContentDigest(ContentDigestT&& value) { SetContentDigest(std::forward<ContentDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI for the metrics source.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    MetricsSource& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_contentDigest;
    bool m_contentDigestHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
