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
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityResult();
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API GenerateEmbedUrlForRegisteredUserWithIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated embed URL for the registered user.</p>
     */
    inline const Aws::String& GetEmbedUrl() const{ return m_embedUrl; }
    inline void SetEmbedUrl(const Aws::String& value) { m_embedUrl = value; }
    inline void SetEmbedUrl(Aws::String&& value) { m_embedUrl = std::move(value); }
    inline void SetEmbedUrl(const char* value) { m_embedUrl.assign(value); }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithEmbedUrl(const Aws::String& value) { SetEmbedUrl(value); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithEmbedUrl(Aws::String&& value) { SetEmbedUrl(std::move(value)); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithEmbedUrl(const char* value) { SetEmbedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateEmbedUrlForRegisteredUserWithIdentityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_embedUrl;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
