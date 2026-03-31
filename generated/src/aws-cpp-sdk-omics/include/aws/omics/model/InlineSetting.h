/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {

/**
 * <p>A per-run configuration that overrides or merges with fields from
 * <code>DefaultRunSetting</code> for a specific run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/InlineSetting">AWS
 * API Reference</a></p>
 */
class InlineSetting {
 public:
  AWS_OMICS_API InlineSetting() = default;
  AWS_OMICS_API InlineSetting(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API InlineSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A customer-provided unique identifier for this run configuration within the
   * batch. After submission, use <code>ListRunsInBatch</code> to map each
   * <code>runSettingId</code> to the HealthOmics-generated <code>runId</code>.</p>
   */
  inline const Aws::String& GetRunSettingId() const { return m_runSettingId; }
  inline bool RunSettingIdHasBeenSet() const { return m_runSettingIdHasBeenSet; }
  template <typename RunSettingIdT = Aws::String>
  void SetRunSettingId(RunSettingIdT&& value) {
    m_runSettingIdHasBeenSet = true;
    m_runSettingId = std::forward<RunSettingIdT>(value);
  }
  template <typename RunSettingIdT = Aws::String>
  InlineSetting& WithRunSettingId(RunSettingIdT&& value) {
    SetRunSettingId(std::forward<RunSettingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional user-friendly name for this run.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InlineSetting& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Override the destination S3 URI for this run's outputs.</p>
   */
  inline const Aws::String& GetOutputUri() const { return m_outputUri; }
  inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
  template <typename OutputUriT = Aws::String>
  void SetOutputUri(OutputUriT&& value) {
    m_outputUriHasBeenSet = true;
    m_outputUri = std::forward<OutputUriT>(value);
  }
  template <typename OutputUriT = Aws::String>
  InlineSetting& WithOutputUri(OutputUriT&& value) {
    SetOutputUri(std::forward<OutputUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Override the priority for this run.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline InlineSetting& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-run workflow parameters. Merged with
   * <code>defaultRunSetting.parameters</code>; values in this object take precedence
   * when keys overlap.</p>
   */
  inline Aws::Utils::DocumentView GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Utils::Document>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Utils::Document>
  InlineSetting& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected AWS account ID of the owner of the output S3 bucket for this
   * run.</p>
   */
  inline const Aws::String& GetOutputBucketOwnerId() const { return m_outputBucketOwnerId; }
  inline bool OutputBucketOwnerIdHasBeenSet() const { return m_outputBucketOwnerIdHasBeenSet; }
  template <typename OutputBucketOwnerIdT = Aws::String>
  void SetOutputBucketOwnerId(OutputBucketOwnerIdT&& value) {
    m_outputBucketOwnerIdHasBeenSet = true;
    m_outputBucketOwnerId = std::forward<OutputBucketOwnerIdT>(value);
  }
  template <typename OutputBucketOwnerIdT = Aws::String>
  InlineSetting& WithOutputBucketOwnerId(OutputBucketOwnerIdT&& value) {
    SetOutputBucketOwnerId(std::forward<OutputBucketOwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-run AWS tags. Merged with <code>defaultRunSetting.runTags</code>; values
   * in this object take precedence when keys overlap.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRunTags() const { return m_runTags; }
  inline bool RunTagsHasBeenSet() const { return m_runTagsHasBeenSet; }
  template <typename RunTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetRunTags(RunTagsT&& value) {
    m_runTagsHasBeenSet = true;
    m_runTags = std::forward<RunTagsT>(value);
  }
  template <typename RunTagsT = Aws::Map<Aws::String, Aws::String>>
  InlineSetting& WithRunTags(RunTagsT&& value) {
    SetRunTags(std::forward<RunTagsT>(value));
    return *this;
  }
  template <typename RunTagsKeyT = Aws::String, typename RunTagsValueT = Aws::String>
  InlineSetting& AddRunTags(RunTagsKeyT&& key, RunTagsValueT&& value) {
    m_runTagsHasBeenSet = true;
    m_runTags.emplace(std::forward<RunTagsKeyT>(key), std::forward<RunTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runSettingId;

  Aws::String m_name;

  Aws::String m_outputUri;

  int m_priority{0};

  Aws::Utils::Document m_parameters;

  Aws::String m_outputBucketOwnerId;

  Aws::Map<Aws::String, Aws::String> m_runTags;
  bool m_runSettingIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_outputUriHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_outputBucketOwnerIdHasBeenSet = false;
  bool m_runTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
