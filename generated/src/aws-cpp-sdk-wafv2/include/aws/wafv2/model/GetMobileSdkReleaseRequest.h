/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class GetMobileSdkReleaseRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API GetMobileSdkReleaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMobileSdkRelease"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The device platform.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline GetMobileSdkReleaseRequest& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release version. For the latest available version, specify
     * <code>LATEST</code>.</p>
     */
    inline const Aws::String& GetReleaseVersion() const { return m_releaseVersion; }
    inline bool ReleaseVersionHasBeenSet() const { return m_releaseVersionHasBeenSet; }
    template<typename ReleaseVersionT = Aws::String>
    void SetReleaseVersion(ReleaseVersionT&& value) { m_releaseVersionHasBeenSet = true; m_releaseVersion = std::forward<ReleaseVersionT>(value); }
    template<typename ReleaseVersionT = Aws::String>
    GetMobileSdkReleaseRequest& WithReleaseVersion(ReleaseVersionT&& value) { SetReleaseVersion(std::forward<ReleaseVersionT>(value)); return *this;}
    ///@}
  private:

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::String m_releaseVersion;
    bool m_releaseVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
