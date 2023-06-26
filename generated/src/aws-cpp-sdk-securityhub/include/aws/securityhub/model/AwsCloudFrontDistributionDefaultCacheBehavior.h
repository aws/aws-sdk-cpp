/**
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
   * <p>Contains information about the default cache configuration for the CloudFront
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionDefaultCacheBehavior">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionDefaultCacheBehavior
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDefaultCacheBehavior();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDefaultCacheBehavior(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionDefaultCacheBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline const Aws::String& GetViewerProtocolPolicy() const{ return m_viewerProtocolPolicy; }

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline bool ViewerProtocolPolicyHasBeenSet() const { return m_viewerProtocolPolicyHasBeenSet; }

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline void SetViewerProtocolPolicy(const Aws::String& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = value; }

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline void SetViewerProtocolPolicy(Aws::String&& value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy = std::move(value); }

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline void SetViewerProtocolPolicy(const char* value) { m_viewerProtocolPolicyHasBeenSet = true; m_viewerProtocolPolicy.assign(value); }

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline AwsCloudFrontDistributionDefaultCacheBehavior& WithViewerProtocolPolicy(const Aws::String& value) { SetViewerProtocolPolicy(value); return *this;}

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline AwsCloudFrontDistributionDefaultCacheBehavior& WithViewerProtocolPolicy(Aws::String&& value) { SetViewerProtocolPolicy(std::move(value)); return *this;}

    /**
     * <p>The protocol that viewers can use to access the files in an origin. You can
     * specify the following options:</p> <ul> <li> <p> <code>allow-all</code> -
     * Viewers can use HTTP or HTTPS.</p> </li> <li> <p> <code>redirect-to-https</code>
     * - CloudFront responds to HTTP requests with an HTTP status code of 301 (Moved
     * Permanently) and the HTTPS URL. The viewer then uses the new URL to
     * resubmit.</p> </li> <li> <p> <code>https-only</code> - CloudFront responds to
     * HTTP request with an HTTP status code of 403 (Forbidden).</p> </li> </ul>
     */
    inline AwsCloudFrontDistributionDefaultCacheBehavior& WithViewerProtocolPolicy(const char* value) { SetViewerProtocolPolicy(value); return *this;}

  private:

    Aws::String m_viewerProtocolPolicy;
    bool m_viewerProtocolPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
