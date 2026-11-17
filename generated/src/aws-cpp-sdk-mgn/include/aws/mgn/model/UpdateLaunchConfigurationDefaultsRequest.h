/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SourceServerVolumeConfiguration.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class UpdateLaunchConfigurationDefaultsRequest : public MgnRequest {
 public:
  AWS_MGN_API UpdateLaunchConfigurationDefaultsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchConfigurationDefaults"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Request to update the launch configuration defaults by Source Server ID.</p>
   */
  inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
  inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
  template <typename SourceServerIDT = Aws::String>
  void SetSourceServerID(SourceServerIDT&& value) {
    m_sourceServerIDHasBeenSet = true;
    m_sourceServerID = std::forward<SourceServerIDT>(value);
  }
  template <typename SourceServerIDT = Aws::String>
  UpdateLaunchConfigurationDefaultsRequest& WithSourceServerID(SourceServerIDT&& value) {
    SetSourceServerID(std::forward<SourceServerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Request to update the launch configuration defaults by Account ID.</p>
   */
  inline const Aws::String& GetAccountID() const { return m_accountID; }
  inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
  template <typename AccountIDT = Aws::String>
  void SetAccountID(AccountIDT&& value) {
    m_accountIDHasBeenSet = true;
    m_accountID = std::forward<AccountIDT>(value);
  }
  template <typename AccountIDT = Aws::String>
  UpdateLaunchConfigurationDefaultsRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Disks up to this size, in GiB, use the small volume configuration, and larger
   * disks use the large one. <code>0</code> means every disk uses the large one. If
   * you omit it, the current value is kept.</p>
   */
  inline long long GetSmallVolumeMaxSize() const { return m_smallVolumeMaxSize; }
  inline bool SmallVolumeMaxSizeHasBeenSet() const { return m_smallVolumeMaxSizeHasBeenSet; }
  inline void SetSmallVolumeMaxSize(long long value) {
    m_smallVolumeMaxSizeHasBeenSet = true;
    m_smallVolumeMaxSize = value;
  }
  inline UpdateLaunchConfigurationDefaultsRequest& WithSmallVolumeMaxSize(long long value) {
    SetSmallVolumeMaxSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Volume configuration for disks up to <code>smallVolumeMaxSize</code>. If you
   * omit it, the current one is kept. If you send it, it replaces the current one:
   * fields you omit are cleared, and an empty configuration, <code>{}</code>, clears
   * all of them.</p>
   */
  inline const SourceServerVolumeConfiguration& GetSmallVolumeConfiguration() const { return m_smallVolumeConfiguration; }
  inline bool SmallVolumeConfigurationHasBeenSet() const { return m_smallVolumeConfigurationHasBeenSet; }
  template <typename SmallVolumeConfigurationT = SourceServerVolumeConfiguration>
  void SetSmallVolumeConfiguration(SmallVolumeConfigurationT&& value) {
    m_smallVolumeConfigurationHasBeenSet = true;
    m_smallVolumeConfiguration = std::forward<SmallVolumeConfigurationT>(value);
  }
  template <typename SmallVolumeConfigurationT = SourceServerVolumeConfiguration>
  UpdateLaunchConfigurationDefaultsRequest& WithSmallVolumeConfiguration(SmallVolumeConfigurationT&& value) {
    SetSmallVolumeConfiguration(std::forward<SmallVolumeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Volume configuration for disks larger than <code>smallVolumeMaxSize</code>.
   * If you omit it, the current one is kept. If you send it, it replaces the current
   * one: fields you omit are cleared, and an empty configuration, <code>{}</code>,
   * clears all of them.</p>
   */
  inline const SourceServerVolumeConfiguration& GetLargeVolumeConfiguration() const { return m_largeVolumeConfiguration; }
  inline bool LargeVolumeConfigurationHasBeenSet() const { return m_largeVolumeConfigurationHasBeenSet; }
  template <typename LargeVolumeConfigurationT = SourceServerVolumeConfiguration>
  void SetLargeVolumeConfiguration(LargeVolumeConfigurationT&& value) {
    m_largeVolumeConfigurationHasBeenSet = true;
    m_largeVolumeConfiguration = std::forward<LargeVolumeConfigurationT>(value);
  }
  template <typename LargeVolumeConfigurationT = SourceServerVolumeConfiguration>
  UpdateLaunchConfigurationDefaultsRequest& WithLargeVolumeConfiguration(LargeVolumeConfigurationT&& value) {
    SetLargeVolumeConfiguration(std::forward<LargeVolumeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceServerID;

  Aws::String m_accountID;

  long long m_smallVolumeMaxSize{0};

  SourceServerVolumeConfiguration m_smallVolumeConfiguration;

  SourceServerVolumeConfiguration m_largeVolumeConfiguration;
  bool m_sourceServerIDHasBeenSet = false;
  bool m_accountIDHasBeenSet = false;
  bool m_smallVolumeMaxSizeHasBeenSet = false;
  bool m_smallVolumeConfigurationHasBeenSet = false;
  bool m_largeVolumeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
