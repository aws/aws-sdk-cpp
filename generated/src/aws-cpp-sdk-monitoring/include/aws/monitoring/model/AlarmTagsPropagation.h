/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Includes the alarm's tags in the notifications that the alarm sends to Amazon
 * SNS topics and Lambda functions. The tags are also included in the alarm's
 * state-change events in Amazon EventBridge. Other types of alarm actions don't
 * receive the tags.</p> <p>By default, the alarm's tags aren't included.</p>
 * <p>Use this to route or filter notifications and events by tag, such as by team
 * or environment. You can also use it to read the alarm's tags without looking
 * them up separately.</p> <p>To limit which tags are included, specify either
 * <code>IncludedTagKeys</code> or <code>ExcludedTagKeys</code>. You can't specify
 * both. If you specify neither, all of the alarm's tags are included. This
 * includes tags that you add to the alarm later.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AlarmTagsPropagation">AWS
 * API Reference</a></p>
 */
class AlarmTagsPropagation {
 public:
  AWS_CLOUDWATCH_API AlarmTagsPropagation() = default;
  AWS_CLOUDWATCH_API AlarmTagsPropagation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API AlarmTagsPropagation& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Set to <code>true</code> to include the alarm's tags. Set to
   * <code>false</code> to stop including them.</p> <p>When this is
   * <code>true</code>, you must have the <code>cloudwatch:ListTagsForResource</code>
   * permission on the alarm to create or update it.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline AlarmTagsPropagation& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag keys to include. Only the alarm's tags with these keys are
   * included.</p> <p>You can specify 1 to 50 tag keys. Each tag key must be 1 to 128
   * characters long.</p> <p>You can't specify both <code>IncludedTagKeys</code> and
   * <code>ExcludedTagKeys</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedTagKeys() const { return m_includedTagKeys; }
  inline bool IncludedTagKeysHasBeenSet() const { return m_includedTagKeysHasBeenSet; }
  template <typename IncludedTagKeysT = Aws::Vector<Aws::String>>
  void SetIncludedTagKeys(IncludedTagKeysT&& value) {
    m_includedTagKeysHasBeenSet = true;
    m_includedTagKeys = std::forward<IncludedTagKeysT>(value);
  }
  template <typename IncludedTagKeysT = Aws::Vector<Aws::String>>
  AlarmTagsPropagation& WithIncludedTagKeys(IncludedTagKeysT&& value) {
    SetIncludedTagKeys(std::forward<IncludedTagKeysT>(value));
    return *this;
  }
  template <typename IncludedTagKeysT = Aws::String>
  AlarmTagsPropagation& AddIncludedTagKeys(IncludedTagKeysT&& value) {
    m_includedTagKeysHasBeenSet = true;
    m_includedTagKeys.emplace_back(std::forward<IncludedTagKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag keys to exclude. All of the alarm's tags except those with these keys
   * are included.</p> <p>You can specify 1 to 50 tag keys. Each tag key must be 1 to
   * 128 characters long.</p> <p>You can't specify both <code>IncludedTagKeys</code>
   * and <code>ExcludedTagKeys</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedTagKeys() const { return m_excludedTagKeys; }
  inline bool ExcludedTagKeysHasBeenSet() const { return m_excludedTagKeysHasBeenSet; }
  template <typename ExcludedTagKeysT = Aws::Vector<Aws::String>>
  void SetExcludedTagKeys(ExcludedTagKeysT&& value) {
    m_excludedTagKeysHasBeenSet = true;
    m_excludedTagKeys = std::forward<ExcludedTagKeysT>(value);
  }
  template <typename ExcludedTagKeysT = Aws::Vector<Aws::String>>
  AlarmTagsPropagation& WithExcludedTagKeys(ExcludedTagKeysT&& value) {
    SetExcludedTagKeys(std::forward<ExcludedTagKeysT>(value));
    return *this;
  }
  template <typename ExcludedTagKeysT = Aws::String>
  AlarmTagsPropagation& AddExcludedTagKeys(ExcludedTagKeysT&& value) {
    m_excludedTagKeysHasBeenSet = true;
    m_excludedTagKeys.emplace_back(std::forward<ExcludedTagKeysT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Vector<Aws::String> m_includedTagKeys;

  Aws::Vector<Aws::String> m_excludedTagKeys;
  bool m_enabledHasBeenSet = false;
  bool m_includedTagKeysHasBeenSet = false;
  bool m_excludedTagKeysHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
