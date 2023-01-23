/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  /**
   * <p>Output returned from the <code>GetDashboardEmbedUrl</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GetDashboardEmbedUrlResponse">AWS
   * API Reference</a></p>
   */
  class GetDashboardEmbedUrlResult
  {
  public:
    AWS_QUICKSIGHT_API GetDashboardEmbedUrlResult();
    AWS_QUICKSIGHT_API GetDashboardEmbedUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API GetDashboardEmbedUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline const Aws::String& GetEmbedUrl() const{ return m_embedUrl; }

    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline void SetEmbedUrl(const Aws::String& value) { m_embedUrl = value; }

    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline void SetEmbedUrl(Aws::String&& value) { m_embedUrl = std::move(value); }

    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline void SetEmbedUrl(const char* value) { m_embedUrl.assign(value); }

    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline GetDashboardEmbedUrlResult& WithEmbedUrl(const Aws::String& value) { SetEmbedUrl(value); return *this;}

    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline GetDashboardEmbedUrlResult& WithEmbedUrl(Aws::String&& value) { SetEmbedUrl(std::move(value)); return *this;}

    /**
     * <p>A single-use URL that you can put into your server-side webpage to embed your
     * dashboard. This URL is valid for 5 minutes. The API operation provides the URL
     * with an <code>auth_code</code> value that enables one (and only one) sign-on to
     * a user session that is valid for 10 hours. </p>
     */
    inline GetDashboardEmbedUrlResult& WithEmbedUrl(const char* value) { SetEmbedUrl(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline GetDashboardEmbedUrlResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GetDashboardEmbedUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GetDashboardEmbedUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GetDashboardEmbedUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_embedUrl;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
