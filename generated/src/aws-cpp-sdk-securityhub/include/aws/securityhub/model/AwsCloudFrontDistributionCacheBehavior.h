﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a cache behavior for the distribution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionCacheBehavior">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionCacheBehavior
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionCacheBehavior() = default;
    AWS_SECURITYHUB_API AwsCloudFrontDistributionCacheBehavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionCacheBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline const Aws::String& GetViewerProtocolPolicy() const { return m_viewerProtocolPolicy; }
    inline bool ViewerProtocolPolicyHasBeenSet() const { return m_viewerProtocolPolicyHasBeenSet; }
    template<typename ViewerProtocolPolicyT = Aws::String>
    void SetViewerProtocolPolicy(ViewerProtocolPolicyT&& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = std::forward<ViewerProtocolPolicyT>(value); }
    template<typename ViewerProtocolPolicyT = Aws::String>
    AwsCloudFrontDistributionCacheBehavior& WithViewerProtocolPolicy(ViewerProtocolPolicyT&& value) { SetViewerProtocolPolicy(std::forward<ViewerProtocolPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_viewerProtocolPolicy;
    bool m_viewerProtocolPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
