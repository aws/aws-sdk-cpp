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
  class GenerateEmbedUrlForRegisteredUserWithIdentityResult
  {
  public:
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityResult() = default;
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated embed URL for the registered user.</p>
     */
    inline const Aws::String& GetEmbedUrl() const { return m_embedUrl; }
    template<typename EmbedUrlT = Aws::String>
    void SetEmbedUrl(EmbedUrlT&& value) { m_embedUrlHasBeenSet = true; m_embedUrl = std::forward<EmbedUrlT>(value); }
    template<typename EmbedUrlT = Aws::String>
    GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithEmbedUrl(EmbedUrlT&& value) { SetEmbedUrl(std::forward<EmbedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_embedUrl;
    bool m_embedUrlHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
