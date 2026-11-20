/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/CentralizeWithDataProtection.h>
#include <aws/observabilityadmin/model/EncryptedLogGroupStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Configuration for selecting and handling source log groups for
 * centralization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SourceLogsConfiguration">AWS
 * API Reference</a></p>
 */
class SourceLogsConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API SourceLogsConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API SourceLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API SourceLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The selection criteria that specifies which source log groups to centralize.
   * The selection criteria uses the same format as OAM link filters.</p>
   */
  inline const Aws::String& GetLogGroupSelectionCriteria() const { return m_logGroupSelectionCriteria; }
  inline bool LogGroupSelectionCriteriaHasBeenSet() const { return m_logGroupSelectionCriteriaHasBeenSet; }
  template <typename LogGroupSelectionCriteriaT = Aws::String>
  void SetLogGroupSelectionCriteria(LogGroupSelectionCriteriaT&& value) {
    m_logGroupSelectionCriteriaHasBeenSet = true;
    m_logGroupSelectionCriteria = std::forward<LogGroupSelectionCriteriaT>(value);
  }
  template <typename LogGroupSelectionCriteriaT = Aws::String>
  SourceLogsConfiguration& WithLogGroupSelectionCriteria(LogGroupSelectionCriteriaT&& value) {
    SetLogGroupSelectionCriteria(std::forward<LogGroupSelectionCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The selection criteria that specifies which data sources to centralize. The
   * selection criteria uses the same filter expression format as
   * <code>LogGroupSelectionCriteria</code>, but operates on
   * <code>DataSourceName</code> and <code>DataSourceType</code> operands. When both
   * <code>LogGroupSelectionCriteria</code> and
   * <code>DataSourceSelectionCriteria</code> are specified, a log event must match
   * both criteria to be centralized.</p>
   */
  inline const Aws::String& GetDataSourceSelectionCriteria() const { return m_dataSourceSelectionCriteria; }
  inline bool DataSourceSelectionCriteriaHasBeenSet() const { return m_dataSourceSelectionCriteriaHasBeenSet; }
  template <typename DataSourceSelectionCriteriaT = Aws::String>
  void SetDataSourceSelectionCriteria(DataSourceSelectionCriteriaT&& value) {
    m_dataSourceSelectionCriteriaHasBeenSet = true;
    m_dataSourceSelectionCriteria = std::forward<DataSourceSelectionCriteriaT>(value);
  }
  template <typename DataSourceSelectionCriteriaT = Aws::String>
  SourceLogsConfiguration& WithDataSourceSelectionCriteria(DataSourceSelectionCriteriaT&& value) {
    SetDataSourceSelectionCriteria(std::forward<DataSourceSelectionCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A strategy determining whether to centralize source log groups that are
   * encrypted with customer managed KMS keys (CMK). ALLOW will consider CMK
   * encrypted source log groups for centralization while SKIP will skip CMK
   * encrypted source log groups from centralization.</p>
   */
  inline EncryptedLogGroupStrategy GetEncryptedLogGroupStrategy() const { return m_encryptedLogGroupStrategy; }
  inline bool EncryptedLogGroupStrategyHasBeenSet() const { return m_encryptedLogGroupStrategyHasBeenSet; }
  inline void SetEncryptedLogGroupStrategy(EncryptedLogGroupStrategy value) {
    m_encryptedLogGroupStrategyHasBeenSet = true;
    m_encryptedLogGroupStrategy = value;
  }
  inline SourceLogsConfiguration& WithEncryptedLogGroupStrategy(EncryptedLogGroupStrategy value) {
    SetEncryptedLogGroupStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this centralization rule centralizes log events with data
   * protection applied. If you don't specify this setting, or you set it to
   * <code>DISABLED</code>, the rule centralizes the original log events, including
   * any sensitive data that a data protection policy on the source log group
   * masks.</p> <p>When you set this to <code>ENABLED</code>, the rule centralizes
   * the same masked data that anyone in the source account without the
   * <code>logs:Unmask</code> permission sees. The rule doesn't copy the original
   * values to the destination, so you can't unmask them in the destination account.
   * The rule centralizes log events from source log groups that don't have a data
   * protection policy without changes.</p> <p>The setting applies only to log events
   * that the rule centralizes after you enable it. It doesn't change log events that
   * the rule already centralized.</p>
   */
  inline CentralizeWithDataProtection GetCentralizeWithDataProtection() const { return m_centralizeWithDataProtection; }
  inline bool CentralizeWithDataProtectionHasBeenSet() const { return m_centralizeWithDataProtectionHasBeenSet; }
  inline void SetCentralizeWithDataProtection(CentralizeWithDataProtection value) {
    m_centralizeWithDataProtectionHasBeenSet = true;
    m_centralizeWithDataProtection = value;
  }
  inline SourceLogsConfiguration& WithCentralizeWithDataProtection(CentralizeWithDataProtection value) {
    SetCentralizeWithDataProtection(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupSelectionCriteria;

  Aws::String m_dataSourceSelectionCriteria;

  EncryptedLogGroupStrategy m_encryptedLogGroupStrategy{EncryptedLogGroupStrategy::NOT_SET};

  CentralizeWithDataProtection m_centralizeWithDataProtection{CentralizeWithDataProtection::NOT_SET};
  bool m_logGroupSelectionCriteriaHasBeenSet = false;
  bool m_dataSourceSelectionCriteriaHasBeenSet = false;
  bool m_encryptedLogGroupStrategyHasBeenSet = false;
  bool m_centralizeWithDataProtectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
