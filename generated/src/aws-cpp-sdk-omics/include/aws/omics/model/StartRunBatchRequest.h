/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/BatchRunSettings.h>
#include <aws/omics/model/DefaultRunSetting.h>

#include <utility>

namespace Aws {
namespace Omics {
namespace Model {

/**
 */
class StartRunBatchRequest : public OmicsRequest {
 public:
  AWS_OMICS_API StartRunBatchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartRunBatch"; }

  AWS_OMICS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An optional user-friendly name for the run batch.</p>
   */
  inline const Aws::String& GetBatchName() const { return m_batchName; }
  inline bool BatchNameHasBeenSet() const { return m_batchNameHasBeenSet; }
  template <typename BatchNameT = Aws::String>
  void SetBatchName(BatchNameT&& value) {
    m_batchNameHasBeenSet = true;
    m_batchName = std::forward<BatchNameT>(value);
  }
  template <typename BatchNameT = Aws::String>
  StartRunBatchRequest& WithBatchName(BatchNameT&& value) {
    SetBatchName(std::forward<BatchNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A client token used to deduplicate retry requests and prevent duplicate
   * batches from being created.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartRunBatchRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS tags to associate with the batch resource. These tags are not inherited
   * by individual runs. To tag individual runs, use
   * <code>defaultRunSetting.runTags</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartRunBatchRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartRunBatchRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Shared configuration applied to all runs in the batch. See
   * <code>DefaultRunSetting</code>.</p>
   */
  inline const DefaultRunSetting& GetDefaultRunSetting() const { return m_defaultRunSetting; }
  inline bool DefaultRunSettingHasBeenSet() const { return m_defaultRunSettingHasBeenSet; }
  template <typename DefaultRunSettingT = DefaultRunSetting>
  void SetDefaultRunSetting(DefaultRunSettingT&& value) {
    m_defaultRunSettingHasBeenSet = true;
    m_defaultRunSetting = std::forward<DefaultRunSettingT>(value);
  }
  template <typename DefaultRunSettingT = DefaultRunSetting>
  StartRunBatchRequest& WithDefaultRunSetting(DefaultRunSettingT&& value) {
    SetDefaultRunSetting(std::forward<DefaultRunSettingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The individual run configurations. Specify exactly one of
   * <code>inlineSettings</code> or <code>s3UriSettings</code>. See
   * <code>BatchRunSettings</code>.</p>
   */
  inline const BatchRunSettings& GetBatchRunSettings() const { return m_batchRunSettings; }
  inline bool BatchRunSettingsHasBeenSet() const { return m_batchRunSettingsHasBeenSet; }
  template <typename BatchRunSettingsT = BatchRunSettings>
  void SetBatchRunSettings(BatchRunSettingsT&& value) {
    m_batchRunSettingsHasBeenSet = true;
    m_batchRunSettings = std::forward<BatchRunSettingsT>(value);
  }
  template <typename BatchRunSettingsT = BatchRunSettings>
  StartRunBatchRequest& WithBatchRunSettings(BatchRunSettingsT&& value) {
    SetBatchRunSettings(std::forward<BatchRunSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_batchName;

  Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;

  DefaultRunSetting m_defaultRunSetting;

  BatchRunSettings m_batchRunSettings;
  bool m_batchNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_defaultRunSettingHasBeenSet = false;
  bool m_batchRunSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
