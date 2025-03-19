/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class StartContentUploadResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API StartContentUploadResult() = default;
    AWS_CONNECTWISDOMSERVICE_API StartContentUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API StartContentUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The headers to include in the upload.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeadersToInclude() const { return m_headersToInclude; }
    template<typename HeadersToIncludeT = Aws::Map<Aws::String, Aws::String>>
    void SetHeadersToInclude(HeadersToIncludeT&& value) { m_headersToIncludeHasBeenSet = true; m_headersToInclude = std::forward<HeadersToIncludeT>(value); }
    template<typename HeadersToIncludeT = Aws::Map<Aws::String, Aws::String>>
    StartContentUploadResult& WithHeadersToInclude(HeadersToIncludeT&& value) { SetHeadersToInclude(std::forward<HeadersToIncludeT>(value)); return *this;}
    template<typename HeadersToIncludeKeyT = Aws::String, typename HeadersToIncludeValueT = Aws::String>
    StartContentUploadResult& AddHeadersToInclude(HeadersToIncludeKeyT&& key, HeadersToIncludeValueT&& value) {
      m_headersToIncludeHasBeenSet = true; m_headersToInclude.emplace(std::forward<HeadersToIncludeKeyT>(key), std::forward<HeadersToIncludeValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The identifier of the upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    StartContentUploadResult& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the upload.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    StartContentUploadResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetUrlExpiry() const { return m_urlExpiry; }
    template<typename UrlExpiryT = Aws::Utils::DateTime>
    void SetUrlExpiry(UrlExpiryT&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::forward<UrlExpiryT>(value); }
    template<typename UrlExpiryT = Aws::Utils::DateTime>
    StartContentUploadResult& WithUrlExpiry(UrlExpiryT&& value) { SetUrlExpiry(std::forward<UrlExpiryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartContentUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_headersToInclude;
    bool m_headersToIncludeHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_urlExpiry{};
    bool m_urlExpiryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
