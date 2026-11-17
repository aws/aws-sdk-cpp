/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class CreateRemoteSourceActionRequest : public MgnRequest {
 public:
  AWS_MGN_API CreateRemoteSourceActionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRemoteSourceAction"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the source action.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRemoteSourceActionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the source action.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRemoteSourceActionRequest& WithDescription(DescriptionT&& value) {
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
  CreateRemoteSourceActionRequest& WithSsmParameterName(SsmParameterNameT&& value) {
    SetSsmParameterName(std::forward<SsmParameterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in seconds, that the script can run on each source
   * server.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline CreateRemoteSourceActionRequest& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system of the source servers that the script runs on. Set to
   * <code>linux</code> or <code>windows</code> to run the script only on source
   * servers with that operating system, or <code>all</code> to run it on both.</p>
   */
  inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
  inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
  template <typename OperatingSystemT = Aws::String>
  void SetOperatingSystem(OperatingSystemT&& value) {
    m_operatingSystemHasBeenSet = true;
    m_operatingSystem = std::forward<OperatingSystemT>(value);
  }
  template <typename OperatingSystemT = Aws::String>
  CreateRemoteSourceActionRequest& WithOperatingSystem(OperatingSystemT&& value) {
    SetOperatingSystem(std::forward<OperatingSystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to assign to the source action.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateRemoteSourceActionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRemoteSourceActionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreateRemoteSourceActionRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_ssmParameterName;

  int m_timeoutSeconds{0};

  Aws::String m_operatingSystem;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_accountID;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ssmParameterNameHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_operatingSystemHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_accountIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
