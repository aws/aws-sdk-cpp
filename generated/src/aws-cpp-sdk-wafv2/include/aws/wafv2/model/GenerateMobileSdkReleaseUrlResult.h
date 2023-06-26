﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{
  class GenerateMobileSdkReleaseUrlResult
  {
  public:
    AWS_WAFV2_API GenerateMobileSdkReleaseUrlResult();
    AWS_WAFV2_API GenerateMobileSdkReleaseUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GenerateMobileSdkReleaseUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline GenerateMobileSdkReleaseUrlResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline GenerateMobileSdkReleaseUrlResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The presigned download URL for the specified SDK release.</p>
     */
    inline GenerateMobileSdkReleaseUrlResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GenerateMobileSdkReleaseUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GenerateMobileSdkReleaseUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GenerateMobileSdkReleaseUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
