/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelfUpgradeStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The self-upgrade configuration for the Quick Suite account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SelfUpgradeConfiguration">AWS
 * API Reference</a></p>
 */
class SelfUpgradeConfiguration {
 public:
  AWS_QUICKSIGHT_API SelfUpgradeConfiguration() = default;
  AWS_QUICKSIGHT_API SelfUpgradeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SelfUpgradeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Status set for the self-upgrade configuration for the Quick Suite account. It
   * can contain the following values:</p> <ul> <li> <p> <code>AUTO_APPROVAL</code>:
   * All the self-upgrade requests will be auto approved.</p> </li> <li> <p>
   * <code>ADMIN_APPROVAL</code>: All the self-upgrade requests will require admin
   * approval.</p> </li> </ul>
   */
  inline SelfUpgradeStatus GetSelfUpgradeStatus() const { return m_selfUpgradeStatus; }
  inline bool SelfUpgradeStatusHasBeenSet() const { return m_selfUpgradeStatusHasBeenSet; }
  inline void SetSelfUpgradeStatus(SelfUpgradeStatus value) {
    m_selfUpgradeStatusHasBeenSet = true;
    m_selfUpgradeStatus = value;
  }
  inline SelfUpgradeConfiguration& WithSelfUpgradeStatus(SelfUpgradeStatus value) {
    SetSelfUpgradeStatus(value);
    return *this;
  }
  ///@}
 private:
  SelfUpgradeStatus m_selfUpgradeStatus{SelfUpgradeStatus::NOT_SET};
  bool m_selfUpgradeStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
