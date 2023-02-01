/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/LoggingFilter.h>
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
   * that you log only a subset of the logging records. </p>  <p>You can define
   * one logging destination per web ACL.</p>  <p>You can access information
   * about the traffic that WAF inspects using the following steps:</p> <ol> <li>
   * <p>Create your logging destination. You can use an Amazon CloudWatch Logs log
   * group, an Amazon Simple Storage Service (Amazon S3) bucket, or an Amazon Kinesis
   * Data Firehose. </p> <p>The name that you give the destination must start with
   * <code>aws-waf-logs-</code>. Depending on the type of destination, you might need
   * to configure additional settings or permissions. </p> <p>For configuration
   * requirements and pricing information for each destination type, see <a
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
    AWS_WAFV2_API LoggingConfiguration();
    AWS_WAFV2_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline LoggingConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline LoggingConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL that you want to associate with
     * <code>LogDestinationConfigs</code>.</p>
     */
    inline LoggingConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetLogDestinationConfigs() const{ return m_logDestinationConfigs; }

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline bool LogDestinationConfigsHasBeenSet() const { return m_logDestinationConfigsHasBeenSet; }

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline void SetLogDestinationConfigs(const Aws::Vector<Aws::String>& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = value; }

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline void SetLogDestinationConfigs(Aws::Vector<Aws::String>&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs = std::move(value); }

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline LoggingConfiguration& WithLogDestinationConfigs(const Aws::Vector<Aws::String>& value) { SetLogDestinationConfigs(value); return *this;}

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline LoggingConfiguration& WithLogDestinationConfigs(Aws::Vector<Aws::String>&& value) { SetLogDestinationConfigs(std::move(value)); return *this;}

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline LoggingConfiguration& AddLogDestinationConfigs(const Aws::String& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(value); return *this; }

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline LoggingConfiguration& AddLogDestinationConfigs(Aws::String&& value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(std::move(value)); return *this; }

    /**
     * <p>The logging destination configuration that you want to associate with the web
     * ACL.</p>  <p>You can associate one logging destination to a web ACL.</p>
     * 
     */
    inline LoggingConfiguration& AddLogDestinationConfigs(const char* value) { m_logDestinationConfigsHasBeenSet = true; m_logDestinationConfigs.push_back(value); return *this; }


    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline const Aws::Vector<FieldToMatch>& GetRedactedFields() const{ return m_redactedFields; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline bool RedactedFieldsHasBeenSet() const { return m_redactedFieldsHasBeenSet; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline void SetRedactedFields(const Aws::Vector<FieldToMatch>& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = value; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline void SetRedactedFields(Aws::Vector<FieldToMatch>&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields = std::move(value); }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline LoggingConfiguration& WithRedactedFields(const Aws::Vector<FieldToMatch>& value) { SetRedactedFields(value); return *this;}

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline LoggingConfiguration& WithRedactedFields(Aws::Vector<FieldToMatch>&& value) { SetRedactedFields(std::move(value)); return *this;}

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline LoggingConfiguration& AddRedactedFields(const FieldToMatch& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.push_back(value); return *this; }

    /**
     * <p>The parts of the request that you want to keep out of the logs. For example,
     * if you redact the <code>SingleHeader</code> field, the <code>HEADER</code> field
     * in the logs will be <code>xxx</code>. </p>  <p>You can specify only the
     * following fields for redaction: <code>UriPath</code>, <code>QueryString</code>,
     * <code>SingleHeader</code>, <code>Method</code>, and <code>JsonBody</code>.</p>
     * 
     */
    inline LoggingConfiguration& AddRedactedFields(FieldToMatch&& value) { m_redactedFieldsHasBeenSet = true; m_redactedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the logging configuration was created by Firewall Manager,
     * as part of an WAF policy configuration. If true, only Firewall Manager can
     * modify or delete the configuration. </p>
     */
    inline bool GetManagedByFirewallManager() const{ return m_managedByFirewallManager; }

    /**
     * <p>Indicates whether the logging configuration was created by Firewall Manager,
     * as part of an WAF policy configuration. If true, only Firewall Manager can
     * modify or delete the configuration. </p>
     */
    inline bool ManagedByFirewallManagerHasBeenSet() const { return m_managedByFirewallManagerHasBeenSet; }

    /**
     * <p>Indicates whether the logging configuration was created by Firewall Manager,
     * as part of an WAF policy configuration. If true, only Firewall Manager can
     * modify or delete the configuration. </p>
     */
    inline void SetManagedByFirewallManager(bool value) { m_managedByFirewallManagerHasBeenSet = true; m_managedByFirewallManager = value; }

    /**
     * <p>Indicates whether the logging configuration was created by Firewall Manager,
     * as part of an WAF policy configuration. If true, only Firewall Manager can
     * modify or delete the configuration. </p>
     */
    inline LoggingConfiguration& WithManagedByFirewallManager(bool value) { SetManagedByFirewallManager(value); return *this;}


    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline const LoggingFilter& GetLoggingFilter() const{ return m_loggingFilter; }

    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline bool LoggingFilterHasBeenSet() const { return m_loggingFilterHasBeenSet; }

    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline void SetLoggingFilter(const LoggingFilter& value) { m_loggingFilterHasBeenSet = true; m_loggingFilter = value; }

    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline void SetLoggingFilter(LoggingFilter&& value) { m_loggingFilterHasBeenSet = true; m_loggingFilter = std::move(value); }

    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline LoggingConfiguration& WithLoggingFilter(const LoggingFilter& value) { SetLoggingFilter(value); return *this;}

    /**
     * <p>Filtering that specifies which web requests are kept in the logs and which
     * are dropped. You can filter on the rule action and on the web request labels
     * that were applied by matching rules during web ACL evaluation. </p>
     */
    inline LoggingConfiguration& WithLoggingFilter(LoggingFilter&& value) { SetLoggingFilter(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_logDestinationConfigs;
    bool m_logDestinationConfigsHasBeenSet = false;

    Aws::Vector<FieldToMatch> m_redactedFields;
    bool m_redactedFieldsHasBeenSet = false;

    bool m_managedByFirewallManager;
    bool m_managedByFirewallManagerHasBeenSet = false;

    LoggingFilter m_loggingFilter;
    bool m_loggingFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
