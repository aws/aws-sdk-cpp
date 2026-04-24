/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>Contains the configuration that determines how a PromQL alarm evaluates its
 * contributors, including the query to run and the durations that define when
 * contributors transition between states.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AlarmPromQLCriteria">AWS
 * API Reference</a></p>
 */
class AlarmPromQLCriteria {
 public:
  AWS_CLOUDWATCH_API AlarmPromQLCriteria() = default;
  AWS_CLOUDWATCH_API AlarmPromQLCriteria(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API AlarmPromQLCriteria& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The PromQL query that the alarm evaluates. The query must return a result of
   * vector type. Each entry in the vector result represents an alarm
   * contributor.</p>
   */
  inline const Aws::String& GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = Aws::String>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = Aws::String>
  AlarmPromQLCriteria& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, that a contributor must be continuously breaching
   * before it transitions to the <code>ALARM</code> state.</p>
   */
  inline int64_t GetPendingPeriod() const { return m_pendingPeriod; }
  inline bool PendingPeriodHasBeenSet() const { return m_pendingPeriodHasBeenSet; }
  inline void SetPendingPeriod(int64_t value) {
    m_pendingPeriodHasBeenSet = true;
    m_pendingPeriod = value;
  }
  inline AlarmPromQLCriteria& WithPendingPeriod(int64_t value) {
    SetPendingPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration, in seconds, that a contributor must continuously not be
   * breaching before it transitions back to the <code>OK</code> state.</p>
   */
  inline int64_t GetRecoveryPeriod() const { return m_recoveryPeriod; }
  inline bool RecoveryPeriodHasBeenSet() const { return m_recoveryPeriodHasBeenSet; }
  inline void SetRecoveryPeriod(int64_t value) {
    m_recoveryPeriodHasBeenSet = true;
    m_recoveryPeriod = value;
  }
  inline AlarmPromQLCriteria& WithRecoveryPeriod(int64_t value) {
    SetRecoveryPeriod(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_query;

  int64_t m_pendingPeriod{0};

  int64_t m_recoveryPeriod{0};
  bool m_queryHasBeenSet = false;
  bool m_pendingPeriodHasBeenSet = false;
  bool m_recoveryPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
