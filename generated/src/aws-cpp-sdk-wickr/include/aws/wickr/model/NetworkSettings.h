/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/ReadReceiptConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains network-level configuration settings that apply to all users and
 * security groups within a Wickr network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/NetworkSettings">AWS
 * API Reference</a></p>
 */
class NetworkSettings {
 public:
  AWS_WICKR_API NetworkSettings() = default;
  AWS_WICKR_API NetworkSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API NetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Allows Wickr clients to send anonymized performance and usage metrics to the
   * Wickr backend server for service improvement and troubleshooting.</p>
   */
  inline bool GetEnableClientMetrics() const { return m_enableClientMetrics; }
  inline bool EnableClientMetricsHasBeenSet() const { return m_enableClientMetricsHasBeenSet; }
  inline void SetEnableClientMetrics(bool value) {
    m_enableClientMetricsHasBeenSet = true;
    m_enableClientMetrics = value;
  }
  inline NetworkSettings& WithEnableClientMetrics(bool value) {
    SetEnableClientMetrics(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for read receipts at the network level, controlling the default
   * behavior for whether senders can see when their messages have been read.</p>
   */
  inline const ReadReceiptConfig& GetReadReceiptConfig() const { return m_readReceiptConfig; }
  inline bool ReadReceiptConfigHasBeenSet() const { return m_readReceiptConfigHasBeenSet; }
  template <typename ReadReceiptConfigT = ReadReceiptConfig>
  void SetReadReceiptConfig(ReadReceiptConfigT&& value) {
    m_readReceiptConfigHasBeenSet = true;
    m_readReceiptConfig = std::forward<ReadReceiptConfigT>(value);
  }
  template <typename ReadReceiptConfigT = ReadReceiptConfig>
  NetworkSettings& WithReadReceiptConfig(ReadReceiptConfigT&& value) {
    SetReadReceiptConfig(std::forward<ReadReceiptConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the data retention feature is enabled for the network. When
   * true, messages are captured by the data retention bot for compliance and
   * archiving purposes.</p>
   */
  inline bool GetDataRetention() const { return m_dataRetention; }
  inline bool DataRetentionHasBeenSet() const { return m_dataRetentionHasBeenSet; }
  inline void SetDataRetention(bool value) {
    m_dataRetentionHasBeenSet = true;
    m_dataRetention = value;
  }
  inline NetworkSettings& WithDataRetention(bool value) {
    SetDataRetention(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableClientMetrics{false};

  ReadReceiptConfig m_readReceiptConfig;

  bool m_dataRetention{false};
  bool m_enableClientMetricsHasBeenSet = false;
  bool m_readReceiptConfigHasBeenSet = false;
  bool m_dataRetentionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
