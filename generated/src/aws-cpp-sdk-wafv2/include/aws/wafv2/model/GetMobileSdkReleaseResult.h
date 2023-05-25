/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/MobileSdkRelease.h>
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
  class GetMobileSdkReleaseResult
  {
  public:
    AWS_WAFV2_API GetMobileSdkReleaseResult();
    AWS_WAFV2_API GetMobileSdkReleaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetMobileSdkReleaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information for a specified SDK release, including release notes and
     * tags.</p>
     */
    inline const MobileSdkRelease& GetMobileSdkRelease() const{ return m_mobileSdkRelease; }

    /**
     * <p>Information for a specified SDK release, including release notes and
     * tags.</p>
     */
    inline void SetMobileSdkRelease(const MobileSdkRelease& value) { m_mobileSdkRelease = value; }

    /**
     * <p>Information for a specified SDK release, including release notes and
     * tags.</p>
     */
    inline void SetMobileSdkRelease(MobileSdkRelease&& value) { m_mobileSdkRelease = std::move(value); }

    /**
     * <p>Information for a specified SDK release, including release notes and
     * tags.</p>
     */
    inline GetMobileSdkReleaseResult& WithMobileSdkRelease(const MobileSdkRelease& value) { SetMobileSdkRelease(value); return *this;}

    /**
     * <p>Information for a specified SDK release, including release notes and
     * tags.</p>
     */
    inline GetMobileSdkReleaseResult& WithMobileSdkRelease(MobileSdkRelease&& value) { SetMobileSdkRelease(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMobileSdkReleaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMobileSdkReleaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMobileSdkReleaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MobileSdkRelease m_mobileSdkRelease;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
