/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/LogScope.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class ListLoggingConfigurationsRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API ListLoggingConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLoggingConfigurations"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, an Amazon Cognito
     * user pool, an App Runner service, or an Amazon Web Services Verified Access
     * instance. </p> <p>To work with CloudFront, you must also specify the Region US
     * East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the Region when
     * you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline ListLoggingConfigurationsRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline ListLoggingConfigurationsRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline ListLoggingConfigurationsRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListLoggingConfigurationsRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListLoggingConfigurationsRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you want WAF to return for this request.
     * If more objects are available, in the response, WAF provides a
     * <code>NextMarker</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListLoggingConfigurationsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the logging configuration, which must be set to
     * <code>CUSTOMER</code> for the configurations that you manage. </p> <p>The log
     * scope <code>SECURITY_LAKE</code> indicates a configuration that is managed
     * through Amazon Security Lake. You can use Security Lake to collect log and event
     * data from various sources for normalization, analysis, and management. For
     * information, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Collecting
     * data from Amazon Web Services services</a> in the <i>Amazon Security Lake user
     * guide</i>. </p> <p>Default: <code>CUSTOMER</code> </p>
     */
    inline const LogScope& GetLogScope() const{ return m_logScope; }
    inline bool LogScopeHasBeenSet() const { return m_logScopeHasBeenSet; }
    inline void SetLogScope(const LogScope& value) { m_logScopeHasBeenSet = true; m_logScope = value; }
    inline void SetLogScope(LogScope&& value) { m_logScopeHasBeenSet = true; m_logScope = std::move(value); }
    inline ListLoggingConfigurationsRequest& WithLogScope(const LogScope& value) { SetLogScope(value); return *this;}
    inline ListLoggingConfigurationsRequest& WithLogScope(LogScope&& value) { SetLogScope(std::move(value)); return *this;}
    ///@}
  private:

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    LogScope m_logScope;
    bool m_logScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
