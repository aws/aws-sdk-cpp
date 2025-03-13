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
    AWS_WAFV2_API GetMobileSdkReleaseResult() = default;
    AWS_WAFV2_API GetMobileSdkReleaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetMobileSdkReleaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information for a specified SDK release, including release notes and
     * tags.</p>
     */
    inline const MobileSdkRelease& GetMobileSdkRelease() const { return m_mobileSdkRelease; }
    template<typename MobileSdkReleaseT = MobileSdkRelease>
    void SetMobileSdkRelease(MobileSdkReleaseT&& value) { m_mobileSdkReleaseHasBeenSet = true; m_mobileSdkRelease = std::forward<MobileSdkReleaseT>(value); }
    template<typename MobileSdkReleaseT = MobileSdkRelease>
    GetMobileSdkReleaseResult& WithMobileSdkRelease(MobileSdkReleaseT&& value) { SetMobileSdkRelease(std::forward<MobileSdkReleaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMobileSdkReleaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MobileSdkRelease m_mobileSdkRelease;
    bool m_mobileSdkReleaseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
