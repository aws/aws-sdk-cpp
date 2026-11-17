/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

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
 * <p>Configuration for Flow Log Storage Accounts that the setup creates, one in
 * each Region that ingests Flow Logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureAwsManagedFlowLogs">AWS
 * API Reference</a></p>
 */
class AzureAwsManagedFlowLogs {
 public:
  AWS_OBSERVABILITYADMIN_API AzureAwsManagedFlowLogs() = default;
  AWS_OBSERVABILITYADMIN_API AzureAwsManagedFlowLogs(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureAwsManagedFlowLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of days that the created Storage Accounts keep Flow Logs.</p>
   */
  inline int GetRetentionDays() const { return m_retentionDays; }
  inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
  inline void SetRetentionDays(int value) {
    m_retentionDaysHasBeenSet = true;
    m_retentionDays = value;
  }
  inline AzureAwsManagedFlowLogs& WithRetentionDays(int value) {
    SetRetentionDays(value);
    return *this;
  }
  ///@}
 private:
  int m_retentionDays{0};
  bool m_retentionDaysHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
