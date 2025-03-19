/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/LoggingFilter.h>
#include <aws/wafv2/model/LogType.h>
#include <aws/wafv2/model/LogScope.h>
#include <aws/wafv2/model/FieldToMatch.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Defines an association between logging destinations and a web ACL resource,
   * for logging from WAF. As part of the association, you can specify parts of the
   * standard logging fields to keep out of the logs and you can specify filters so
   * that you log only a subset of the logging records. </p> <p>If you configure data
   * protection for the web ACL, the protection applies to the data that WAF sends to
   * the logs. </p>  <p>You can define one logging destination per web ACL.</p>
   *  <p>You can access information about the traffic that WAF inspects using
   * the following steps:</p> <ol> <li> <p>Create your logging destination. You can
   * use an Amazon CloudWatch Logs log group, an Amazon Simple Storage Service
   * (Amazon S3) bucket, or an Amazon Kinesis Data Firehose. </p> <p>The name that
   * you give the destination must start with <code>aws-waf-logs-</code>. Depending
   * on the type of destination, you might need to configure additional settings or
   * permissions. </p> <p>For configuration requirements and pricing information for
   * each destination type, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
   * web ACL traffic</a> in the <i>WAF Developer Guide</i>.</p> </li> <li>
   * <p>Associate your logging destination to your web ACL using a
   * <code>PutLoggingConfiguration</code> request.</p> </li> </ol> <p>When you
   * successfully enable logging using a <code>PutLoggingConfiguration</code>
   * request, WAF creates an additional role or policy that is required to write logs
   * to the logging destination. For an Amazon CloudWatch Logs log group, WAF creates
   * a resource policy on the log group. For an Amazon S3 bucket, WAF creates a
   * bucket policy. For an Amazon Kinesis Data Firehose, WAF creates a service-linked
   * role.</p> <p>For additional information about web ACL logging, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging.html">Logging
   * web ACL traffic information</a> in the <i>WAF Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_WAFV2_API LoggingConfiguration() = default;
    AWS_WAFV2_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LoggingConfiguration& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetLogDestinationConfigs() const { return m_logDestinationConfigs; }
    inline bool LogDestinationConfigsHasBeenSet() const { return m_logDestinationConfigsHasBeenSet; }
    template<typename LogDestinationConfigsT = Aws::Vector<Aws::String>>
    void SetLogDestinationConfigs(LogDestinationConfigsT&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = std::forward<LogDestinationConfigsT>(value); }
    template<typename LogDestinationConfigsT = Aws::Vector<Aws::String>>
    LoggingConfiguration& WithLogDestinationConfigs(LogDestinationConfigsT&& value) { SetLogDestinationConfigs(std::forward<LogDestinationConfigsT>(value)); return *this;}
    template<typename LogDestinationConfigsT = Aws::String>
    LoggingConfiguration& AddLogDestinationConfigs(LogDestinationConfigsT&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.emplace_back(std::forward<LogDestinationConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parts of the request that you want to keep out of the logs.</p> <p>For
     * example, if you redact the <code>SingleHeader</code> field, the
     * <code>HEADER</code> field in the logs will be <code>REDACTED</code> for all
     * rules that use the <code>SingleHeader</code> <code>FieldToMatch</code> setting.
     * </p> <p>If you configure data protection for the web ACL, the protection applies
     * to the data that WAF sends to the logs. </p> <p>Redaction applies only to the
     * component that's specified in the rule's <code>FieldToMatch</code> setting, so
     * the <code>SingleHeader</code> redaction doesn't apply to rules that use the
     * <code>Headers</code> <code>FieldToMatch</code>.</p>  <p>You can specify
     * only the following fields for redaction: <code>UriPath</code>,
     * <code>QueryString</code>, <code>SingleHeader</code>, and
     * <code>Method</code>.</p>   <p>This setting has no impact on request
     * sampling. You can only exclude fields from request sampling by disabling
     * sampling in the web ACL visibility configuration or by configuring data
     * protection for the web ACL.</p> 
     */
    inline const Aws::Vector<FieldToMatch>& GetRedactedFields() const { return m_redactedFields; }
    inline bool RedactedFieldsHasBeenSet() const { return m_redactedFieldsHasBeenSet; }
    template<typename RedactedFieldsT = Aws::Vector<FieldToMatch>>
    void SetRedactedFields(RedactedFieldsT&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = std::forward<RedactedFieldsT>(value); }
    template<typename RedactedFieldsT = Aws::Vector<FieldToMatch>>
    LoggingConfiguration& WithRedactedFields(RedactedFieldsT&& value) { SetRedactedFields(std::forward<RedactedFieldsT>(value)); return *this;}
    template<typename RedactedFieldsT = FieldToMatch>
    LoggingConfiguration& AddRedactedFields(RedactedFieldsT&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.emplace_back(std::forward<RedactedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the logging configuration was created by Firewall Manager,
     * as part of an WAF policy configuration. If true, only Firewall Manager can
     * modify or delete the configuration. </p> <p>The logging configuration can be
     * created by Firewall Manager for use with any web ACL that Firewall Manager is
     * using for an WAF policy. Web ACLs that Firewall Manager creates and uses have
     * their <code>ManagedByFirewallManager</code> property set to true. Web ACLs that
     * were created by a customer account and then retrofitted by Firewall Manager for
     * use by a policy have their <code>RetrofittedByFirewallManager</code> property
     * set to true. For either case, any corresponding logging configuration will
     * indicate <code>ManagedByFirewallManager</code>.</p>
     */
    inline bool GetManagedByFirewallManager() const { return m_managedByFirewallManager; }
    inline bool ManagedByFirewallManagerHasBeenSet() const { return m_managedByFirewallManagerHasBeenSet; }
    inline void SetManagedByFirewallManager(bool value) { m_managedByFirewallManagerHasBeenSet = true; m_managedByFirewallManager = value; }
    inline LoggingConfiguration& WithManagedByFirewallManager(bool value) { SetManagedByFirewallManager(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline const LoggingFilter& GetLoggingFilter() const { return m_loggingFilter; }
    inline bool LoggingFilterHasBeenSet() const { return m_loggingFilterHasBeenSet; }
    template<typename LoggingFilterT = LoggingFilter>
    void SetLoggingFilter(LoggingFilterT&& value) { m_loggingFilterHasBeenSet = true; m_loggingFilter = std::forward<LoggingFilterT>(value); }
    template<typename LoggingFilterT = LoggingFilter>
    LoggingConfiguration& WithLoggingFilter(LoggingFilterT&& value) { SetLoggingFilter(std::forward<LoggingFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to distinguish between various logging options. Currently, there is one
     * option.</p> <p>Default: <code>WAF_LOGS</code> </p>
     */
    inline LogType GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(LogType value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline LoggingConfiguration& WithLogType(LogType value) { SetLogType(value); return *this;}
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
    inline LoggingConfiguration& WithLogScope(LogScope value) { SetLogScope(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_logDestinationConfigs;
    bool m_logDestinationConfigsHasBeenSet = false;

    Aws::Vector<FieldToMatch> m_redactedFields;
    bool m_redactedFieldsHasBeenSet = false;

    bool m_managedByFirewallManager{false};
    bool m_managedByFirewallManagerHasBeenSet = false;

    LoggingFilter m_loggingFilter;
    bool m_loggingFilterHasBeenSet = false;

    LogType m_logType{LogType::NOT_SET};
    bool m_logTypeHasBeenSet = false;

    LogScope m_logScope{LogScope::NOT_SET};
    bool m_logScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
