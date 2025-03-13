/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/LogType.h>
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
  class GetLoggingConfigurationRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API GetLoggingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLoggingConfiguration"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetLoggingConfigurationRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to distinguish between various logging options. Currently, there is one
     * option.</p> <p>Default: <code>WAF_LOGS</code> </p>
     */
    inline LogType GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(LogType value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline GetLoggingConfigurationRequest& WithLogType(LogType value) { SetLogType(value); return *this;}
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
    inline LogScope GetLogScope() const { return m_logScope; }
    inline bool LogScopeHasBeenSet() const { return m_logScopeHasBeenSet; }
    inline void SetLogScope(LogScope value) { m_logScopeHasBeenSet = true; m_logScope = value; }
    inline GetLoggingConfigurationRequest& WithLogScope(LogScope value) { SetLogScope(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    LogType m_logType{LogType::NOT_SET};
    bool m_logTypeHasBeenSet = false;

    LogScope m_logScope{LogScope::NOT_SET};
    bool m_logScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
