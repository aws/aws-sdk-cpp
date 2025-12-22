/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

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
 * <p>Contains information about a device that was successfully processed in a
 * batch device operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchDeviceSuccessResponseItem">AWS
 * API Reference</a></p>
 */
class BatchDeviceSuccessResponseItem {
 public:
  AWS_WICKR_API BatchDeviceSuccessResponseItem() = default;
  AWS_WICKR_API BatchDeviceSuccessResponseItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API BatchDeviceSuccessResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The application ID of the device that was successfully processed.</p>
   */
  inline const Aws::String& GetAppId() const { return m_appId; }
  inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
  template <typename AppIdT = Aws::String>
  void SetAppId(AppIdT&& value) {
    m_appIdHasBeenSet = true;
    m_appId = std::forward<AppIdT>(value);
  }
  template <typename AppIdT = Aws::String>
  BatchDeviceSuccessResponseItem& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appId;
  bool m_appIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
