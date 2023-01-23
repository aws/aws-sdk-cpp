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
   * <p>Contains details regarding the file source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FileSource">AWS
   * API Reference</a></p>
   */
  class FileSource
  {
  public:
    AWS_SAGEMAKER_API FileSource();
    AWS_SAGEMAKER_API FileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline FileSource& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline FileSource& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The type of content stored in the file source.</p>
     */
    inline FileSource& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The digest of the file source.</p>
     */
    inline const Aws::String& GetContentDigest() const{ return m_contentDigest; }

    /**
     * <p>The digest of the file source.</p>
     */
    inline bool ContentDigestHasBeenSet() const { return m_contentDigestHasBeenSet; }

    /**
     * <p>The digest of the file source.</p>
     */
    inline void SetContentDigest(const Aws::String& value) { m_contentDigestHasBeenSet = true; m_contentDigest = value; }

    /**
     * <p>The digest of the file source.</p>
     */
    inline void SetContentDigest(Aws::String&& value) { m_contentDigestHasBeenSet = true; m_contentDigest = std::move(value); }

    /**
     * <p>The digest of the file source.</p>
     */
    inline void SetContentDigest(const char* value) { m_contentDigestHasBeenSet = true; m_contentDigest.assign(value); }

    /**
     * <p>The digest of the file source.</p>
     */
    inline FileSource& WithContentDigest(const Aws::String& value) { SetContentDigest(value); return *this;}

    /**
     * <p>The digest of the file source.</p>
     */
    inline FileSource& WithContentDigest(Aws::String&& value) { SetContentDigest(std::move(value)); return *this;}

    /**
     * <p>The digest of the file source.</p>
     */
    inline FileSource& WithContentDigest(const char* value) { SetContentDigest(value); return *this;}


    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline FileSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline FileSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI for the file source.</p>
     */
    inline FileSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

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
