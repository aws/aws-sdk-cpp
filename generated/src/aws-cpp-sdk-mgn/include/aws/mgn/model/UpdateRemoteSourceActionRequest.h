/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class UpdateRemoteSourceActionRequest : public MgnRequest {
 public:
  AWS_MGN_API UpdateRemoteSourceActionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRemoteSourceAction"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the source action to update.</p>
   */
  inline const Aws::String& GetRemoteSourceActionID() const { return m_remoteSourceActionID; }
  inline bool RemoteSourceActionIDHasBeenSet() const { return m_remoteSourceActionIDHasBeenSet; }
  template <typename RemoteSourceActionIDT = Aws::String>
  void SetRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    m_remoteSourceActionIDHasBeenSet = true;
    m_remoteSourceActionID = std::forward<RemoteSourceActionIDT>(value);
  }
  template <typename RemoteSourceActionIDT = Aws::String>
  UpdateRemoteSourceActionRequest& WithRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    SetRemoteSourceActionID(std::forward<RemoteSourceActionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the source action.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRemoteSourceActionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the source action.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRemoteSourceActionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS Systems Manager Parameter Store parameter name.</p>
   */
  inline const Aws::String& GetSsmParameterName() const { return m_ssmParameterName; }
  inline bool SsmParameterNameHasBeenSet() const { return m_ssmParameterNameHasBeenSet; }
  template <typename SsmParameterNameT = Aws::String>
  void SetSsmParameterName(SsmParameterNameT&& value) {
    m_ssmParameterNameHasBeenSet = true;
    m_ssmParameterName = std::forward<SsmParameterNameT>(value);
  }
  template <typename SsmParameterNameT = Aws::String>
  UpdateRemoteSourceActionRequest& WithSsmParameterName(SsmParameterNameT&& value) {
    SetSsmParameterName(std::forward<SsmParameterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated maximum time, in seconds, that the script can run on each source
   * server.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline UpdateRemoteSourceActionRequest& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated operating system of the source servers that the script runs on.
   * Set to <code>linux</code> or <code>windows</code> to run the script only on
   * source servers with that operating system, or <code>all</code> to run it on
   * both.</p>
   */
  inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
  inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
  template <typename OperatingSystemT = Aws::String>
  void SetOperatingSystem(OperatingSystemT&& value) {
    m_operatingSystemHasBeenSet = true;
    m_operatingSystem = std::forward<OperatingSystemT>(value);
  }
  template <typename OperatingSystemT = Aws::String>
  UpdateRemoteSourceActionRequest& WithOperatingSystem(OperatingSystemT&& value) {
    SetOperatingSystem(std::forward<OperatingSystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account ID.</p>
   */
  inline const Aws::String& GetAccountID() const { return m_accountID; }
  inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
  template <typename AccountIDT = Aws::String>
  void SetAccountID(AccountIDT&& value) {
    m_accountIDHasBeenSet = true;
    m_accountID = std::forward<AccountIDT>(value);
  }
  template <typename AccountIDT = Aws::String>
  UpdateRemoteSourceActionRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_remoteSourceActionID;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_ssmParameterName;

  int m_timeoutSeconds{0};

  Aws::String m_operatingSystem;

  Aws::String m_accountID;
  bool m_remoteSourceActionIDHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ssmParameterNameHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_operatingSystemHasBeenSet = false;
  bool m_accountIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
