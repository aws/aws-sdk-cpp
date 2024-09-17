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
   * Amazon S3 bucket, a CloudWatch log group, or a Firehose delivery stream.</p>
   * <p>Network Firewall generates logs for stateful rule groups. You can save alert,
   * flow, and TLS log types. </p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The type of log to record. You can record the following types of logs from
     * your Network Firewall stateful engine.</p> <ul> <li> <p> <code>ALERT</code> -
     * Logs for traffic that matches your stateful rules and that have an action that
     * sends an alert. A stateful rule sends alerts for the rule actions DROP, ALERT,
     * and REJECT. For more information, see <a>StatefulRule</a>.</p> </li> <li> <p>
     * <code>FLOW</code> - Standard network traffic flow logs. The stateful rules
     * engine records flow logs for all network traffic that it receives. Each flow log
     * record captures the network flow for a specific standard stateless rule
     * group.</p> </li> <li> <p> <code>TLS</code> - Logs for events that are related to
     * TLS inspection. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection-configurations.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p> </li> </ul>
     */
    inline const LogType& GetLogType() const{ return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }
    inline LogDestinationConfig& WithLogType(const LogType& value) { SetLogType(value); return *this;}
    inline LogDestinationConfig& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of storage destination to send these logs to. You can send logs to
     * an Amazon S3 bucket, a CloudWatch log group, or a Firehose delivery stream.</p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }
    inline LogDestinationConfig& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}
    inline LogDestinationConfig& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The named location for the logs, provided in a key:value mapping that is
     * specific to the chosen destination type. </p> <ul> <li> <p>For an Amazon S3
     * bucket, provide the name of the bucket, with key <code>bucketName</code>, and
     * optionally provide a prefix, with key <code>prefix</code>. </p> <p>The following
     * example specifies an Amazon S3 bucket named <code>DOC-EXAMPLE-BUCKET</code> and
     * the prefix <code>alerts</code>: </p> <p> <code>"LogDestination": { "bucketName":
     * "DOC-EXAMPLE-BUCKET", "prefix": "alerts" }</code> </p> </li> <li> <p>For a
     * CloudWatch log group, provide the name of the CloudWatch log group, with key
     * <code>logGroup</code>. The following example specifies a log group named
     * <code>alert-log-group</code>: </p> <p> <code>"LogDestination": { "logGroup":
     * "alert-log-group" }</code> </p> </li> <li> <p>For a Firehose delivery stream,
     * provide the name of the delivery stream, with key <code>deliveryStream</code>.
     * The following example specifies a delivery stream named
     * <code>alert-delivery-stream</code>: </p> <p> <code>"LogDestination": {
     * "deliveryStream": "alert-delivery-stream" }</code> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogDestination() const{ return m_logDestination; }
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
    inline void SetLogDestination(const Aws::Map<Aws::String, Aws::String>& value) { m_logDestinationHasBeenSet = true; m_logDestination = value; }
    inline void SetLogDestination(Aws::Map<Aws::String, Aws::String>&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::move(value); }
    inline LogDestinationConfig& WithLogDestination(const Aws::Map<Aws::String, Aws::String>& value) { SetLogDestination(value); return *this;}
    inline LogDestinationConfig& WithLogDestination(Aws::Map<Aws::String, Aws::String>&& value) { SetLogDestination(std::move(value)); return *this;}
    inline LogDestinationConfig& AddLogDestination(const Aws::String& key, const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, value); return *this; }
    inline LogDestinationConfig& AddLogDestination(Aws::String&& key, const Aws::String& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(std::move(key), value); return *this; }
    inline LogDestinationConfig& AddLogDestination(const Aws::String& key, Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, std::move(value)); return *this; }
    inline LogDestinationConfig& AddLogDestination(Aws::String&& key, Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(std::move(key), std::move(value)); return *this; }
    inline LogDestinationConfig& AddLogDestination(const char* key, Aws::String&& value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, std::move(value)); return *this; }
    inline LogDestinationConfig& AddLogDestination(Aws::String&& key, const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(std::move(key), value); return *this; }
    inline LogDestinationConfig& AddLogDestination(const char* key, const char* value) { m_logDestinationHasBeenSet = true; m_logDestination.emplace(key, value); return *this; }
    ///@}
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
