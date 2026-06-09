/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Defines data recovery targets for a resilience policy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DataRecoveryTargets">AWS
 * API Reference</a></p>
 */
class DataRecoveryTargets {
 public:
  AWS_RESILIENCEHUBV2_API DataRecoveryTargets() = default;
  AWS_RESILIENCEHUBV2_API DataRecoveryTargets(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DataRecoveryTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target time between backups, in minutes.</p>
   */
  inline int GetTimeBetweenBackupsInMinutes() const { return m_timeBetweenBackupsInMinutes; }
  inline bool TimeBetweenBackupsInMinutesHasBeenSet() const { return m_timeBetweenBackupsInMinutesHasBeenSet; }
  inline void SetTimeBetweenBackupsInMinutes(int value) {
    m_timeBetweenBackupsInMinutesHasBeenSet = true;
    m_timeBetweenBackupsInMinutes = value;
  }
  inline DataRecoveryTargets& WithTimeBetweenBackupsInMinutes(int value) {
    SetTimeBetweenBackupsInMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_timeBetweenBackupsInMinutes{0};
  bool m_timeBetweenBackupsInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
