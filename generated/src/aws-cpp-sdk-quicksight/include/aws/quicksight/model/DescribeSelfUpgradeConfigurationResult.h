/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelfUpgradeConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class DescribeSelfUpgradeConfigurationResult {
 public:
  AWS_QUICKSIGHT_API DescribeSelfUpgradeConfigurationResult() = default;
  AWS_QUICKSIGHT_API DescribeSelfUpgradeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeSelfUpgradeConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The self-upgrade configuration for the Quick Suite account.</p>
   */
  inline const SelfUpgradeConfiguration& GetSelfUpgradeConfiguration() const { return m_selfUpgradeConfiguration; }
  template <typename SelfUpgradeConfigurationT = SelfUpgradeConfiguration>
  void SetSelfUpgradeConfiguration(SelfUpgradeConfigurationT&& value) {
    m_selfUpgradeConfigurationHasBeenSet = true;
    m_selfUpgradeConfiguration = std::forward<SelfUpgradeConfigurationT>(value);
  }
  template <typename SelfUpgradeConfigurationT = SelfUpgradeConfiguration>
  DescribeSelfUpgradeConfigurationResult& WithSelfUpgradeConfiguration(SelfUpgradeConfigurationT&& value) {
    SetSelfUpgradeConfiguration(std::forward<SelfUpgradeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeSelfUpgradeConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeSelfUpgradeConfigurationResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  SelfUpgradeConfiguration m_selfUpgradeConfiguration;

  Aws::String m_requestId;

  int m_status{0};
  bool m_selfUpgradeConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
