/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/LogType.h>
#include <aws/network-firewall/model/LogDestinationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Defines where Network Firewall sends logs for the firewall for one log type.
   * This is used in <a>LoggingConfiguration</a>. You can send each type of log to an
   * Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
   * stream.</p> <p>Network Firewall generates logs for stateful rule groups. You can
   * save alert and flow log types. The stateful rules engine records flow logs for
   * all network traffic that it receives. It records alert logs for traffic that
   * matches stateful rules that have the rule action set to <code>DROP</code> or
   * <code>ALERT</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/LogDestinationConfig">AWS
   * API Reference</a></p>
   */
  class LogDestinationConfig
  {
  public:
    AWS_NETWORKFIREWALL_API LogDestinationConfig();
    AWS_NETWORKFIREWALL_API LogDestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API LogDestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of log to send. Alert logs report traffic that matches a
     * <a>StatefulRule</a> with an action setting that sends an alert log message. Flow
     * logs are standard network traffic flow logs. </p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>The type of log to send. Alert logs report traffic that matches a
     * <a>StatefulRule</a> with an action setting that sends an alert log message. Flow
     * logs are standard network traffic flow logs. </p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>The type of log to send. Alert logs report traffic that matches a
     * <a>StatefulRule</a> with an action setting that sends an alert log message. Flow
     * logs are standard network traffic flow logs. </p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>The type of log to send. Alert logs report traffic that matches a
     * <a>StatefulRule</a> with an action setting that sends an alert log message. Flow
     * logs are standard network traffic flow logs. </p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>The type of log to send. Alert logs report traffic that matches a
     * <a>StatefulRule</a> with an action setting that sends an alert log message. Flow
     * logs are standard network traffic flow logs. </p>
     */
    inline LogDestinationConfig& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>The type of log to send. Alert logs report traffic that matches a
     * <a>StatefulRule</a> with an action setting that sends an alert log message. Flow
     * logs are standard network traffic flow logs. </p>
     */
    inline LogDestinationConfig& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }

    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }

    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }

    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }

    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline LogDestinationConfig& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}

    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline LogDestinationConfig& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}


    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogDestination() const{ return m_logDestination; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline void SetLogDestination(const Aws::Map<Aws::String, Aws::String>& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline void SetLogDestination(Aws::Map<Aws::String, Aws::String>&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& WithLogDestination(const Aws::Map<Aws::String, Aws::String>& value) { SetLogDestination(value); return *this;}

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& WithLogDestination(Aws::Map<Aws::String, Aws::String>&& value) { SetLogDestination(std::move(value)); return *this;}

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(const Aws::String& key, const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, value); return *this; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(Aws::String&& key, const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(std::move(key), value); return *this; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(const Aws::String& key, Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(Aws::String&& key, Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(const char* key, Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(Aws::String&& key, const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(std::move(key), value); return *this; }

    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. The following example
     * specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and the
     * prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Kinesis Data Firehose
     * delivery stream, provide the name of the delivery stream, with key
     * <code>deliveryStream</code>. The following example specifies a delivery stream
     * named <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline LogDestinationConfig& AddLogDestination(const char* key, const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, value); return *this; }

  private:

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    LogDestinationType m_logDestinationType;
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_logDestination;
    bool m_logDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
