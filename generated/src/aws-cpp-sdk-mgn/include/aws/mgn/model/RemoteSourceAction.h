/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>A source action, which references a script in AWS Systems Manager Parameter
 * Store that Application Migration Service runs on source servers through a
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RemoteSourceAction">AWS
 * API Reference</a></p>
 */
class RemoteSourceAction {
 public:
  AWS_MGN_API RemoteSourceAction() = default;
  AWS_MGN_API RemoteSourceAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API RemoteSourceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the source action.</p>
   */
  inline const Aws::String& GetRemoteSourceActionID() const { return m_remoteSourceActionID; }
  inline bool RemoteSourceActionIDHasBeenSet() const { return m_remoteSourceActionIDHasBeenSet; }
  template <typename RemoteSourceActionIDT = Aws::String>
  void SetRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    m_remoteSourceActionIDHasBeenSet = true;
    m_remoteSourceActionID = std::forward<RemoteSourceActionIDT>(value);
  }
  template <typename RemoteSourceActionIDT = Aws::String>
  RemoteSourceAction& WithRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    SetRemoteSourceActionID(std::forward<RemoteSourceActionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source action.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RemoteSourceAction& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

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
  RemoteSourceAction& WithName(NameT&& value) {
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
  RemoteSourceAction& WithDescription(DescriptionT&& value) {
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
  RemoteSourceAction& WithSsmParameterName(SsmParameterNameT&& value) {
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
  inline RemoteSourceAction& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system of the source servers that the script runs on. Absent
   * when the script runs on both Linux and Windows.</p>
   */
  inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
  inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
  template <typename OperatingSystemT = Aws::String>
  void SetOperatingSystem(OperatingSystemT&& value) {
    m_operatingSystemHasBeenSet = true;
    m_operatingSystem = std::forward<OperatingSystemT>(value);
  }
  template <typename OperatingSystemT = Aws::String>
  RemoteSourceAction& WithOperatingSystem(OperatingSystemT&& value) {
    SetOperatingSystem(std::forward<OperatingSystemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags assigned to the source action.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RemoteSourceAction& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RemoteSourceAction& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_remoteSourceActionID;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_ssmParameterName;

  int m_timeoutSeconds{0};

  Aws::String m_operatingSystem;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_remoteSourceActionIDHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ssmParameterNameHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_operatingSystemHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
