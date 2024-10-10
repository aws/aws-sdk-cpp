/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>You can use presigned URLs to grant time-limited access to objects in Amazon
   * S3 without updating your bucket policy. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-presigned-url.html">Working
   * with presigned URLs</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/S3PresignedUrl">AWS
   * API Reference</a></p>
   */
  class S3PresignedUrl
  {
  public:
    AWS_SOCIALMESSAGING_API S3PresignedUrl();
    AWS_SOCIALMESSAGING_API S3PresignedUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API S3PresignedUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The presign url to the object.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline S3PresignedUrl& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline S3PresignedUrl& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline S3PresignedUrl& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of headers and their values. You must specify the
     * <code>Content-Type</code> header when using
     * <code>PostWhatsAppMessageMedia</code>. For a list of common headers, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTCommonRequestHeaders.html">Common
     * Request Headers</a> in the <i>Amazon S3 API Reference</i> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline S3PresignedUrl& WithHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaders(value); return *this;}
    inline S3PresignedUrl& WithHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaders(std::move(value)); return *this;}
    inline S3PresignedUrl& AddHeaders(const Aws::String& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers.emplace(key, value); return *this; }
    inline S3PresignedUrl& AddHeaders(Aws::String&& key, const Aws::String& value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), value); return *this; }
    inline S3PresignedUrl& AddHeaders(const Aws::String& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(key, std::move(value)); return *this; }
    inline S3PresignedUrl& AddHeaders(Aws::String&& key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), std::move(value)); return *this; }
    inline S3PresignedUrl& AddHeaders(const char* key, Aws::String&& value) { m_headersHasBeenSet = true; m_headers.emplace(key, std::move(value)); return *this; }
    inline S3PresignedUrl& AddHeaders(Aws::String&& key, const char* value) { m_headersHasBeenSet = true; m_headers.emplace(std::move(key), value); return *this; }
    inline S3PresignedUrl& AddHeaders(const char* key, const char* value) { m_headersHasBeenSet = true; m_headers.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
