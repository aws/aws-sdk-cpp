/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIPromptType.h>
#include <aws/qconnect/model/CrossRegionStatus.h>
#include <aws/qconnect/model/ModelLifecycle.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The summary of a model available to an Amazon Q in Connect
 * assistant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ModelSummary">AWS
 * API Reference</a></p>
 */
class ModelSummary {
 public:
  AWS_QCONNECT_API ModelSummary() = default;
  AWS_QCONNECT_API ModelSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the model.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  ModelSummary& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the model.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  ModelSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cross-region availability status of the model. <code>NONE</code>
   * indicates the model is only available in a single region, <code>REGIONAL</code>
   * indicates the model is available through regional inference, and
   * <code>GLOBAL</code> indicates the model is available through global cross-region
   * inference.</p>
   */
  inline CrossRegionStatus GetCrossRegionStatus() const { return m_crossRegionStatus; }
  inline bool CrossRegionStatusHasBeenSet() const { return m_crossRegionStatusHasBeenSet; }
  inline void SetCrossRegionStatus(CrossRegionStatus value) {
    m_crossRegionStatusHasBeenSet = true;
    m_crossRegionStatus = value;
  }
  inline ModelSummary& WithCrossRegionStatus(CrossRegionStatus value) {
    SetCrossRegionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the model supports prompt caching.</p>
   */
  inline bool GetSupportsPromptCaching() const { return m_supportsPromptCaching; }
  inline bool SupportsPromptCachingHasBeenSet() const { return m_supportsPromptCachingHasBeenSet; }
  inline void SetSupportsPromptCaching(bool value) {
    m_supportsPromptCachingHasBeenSet = true;
    m_supportsPromptCaching = value;
  }
  inline ModelSummary& WithSupportsPromptCaching(bool value) {
    SetSupportsPromptCaching(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of AI Prompt types that the model supports.</p>
   */
  inline const Aws::Vector<AIPromptType>& GetSupportedAIPromptTypes() const { return m_supportedAIPromptTypes; }
  inline bool SupportedAIPromptTypesHasBeenSet() const { return m_supportedAIPromptTypesHasBeenSet; }
  template <typename SupportedAIPromptTypesT = Aws::Vector<AIPromptType>>
  void SetSupportedAIPromptTypes(SupportedAIPromptTypesT&& value) {
    m_supportedAIPromptTypesHasBeenSet = true;
    m_supportedAIPromptTypes = std::forward<SupportedAIPromptTypesT>(value);
  }
  template <typename SupportedAIPromptTypesT = Aws::Vector<AIPromptType>>
  ModelSummary& WithSupportedAIPromptTypes(SupportedAIPromptTypesT&& value) {
    SetSupportedAIPromptTypes(std::forward<SupportedAIPromptTypesT>(value));
    return *this;
  }
  inline ModelSummary& AddSupportedAIPromptTypes(AIPromptType value) {
    m_supportedAIPromptTypesHasBeenSet = true;
    m_supportedAIPromptTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle of the model. <code>ACTIVE</code> indicates the model
   * is recommended for use and <code>LEGACY</code> indicates the model is still
   * usable but is deprecated.</p>
   */
  inline ModelLifecycle GetModelLifecycle() const { return m_modelLifecycle; }
  inline bool ModelLifecycleHasBeenSet() const { return m_modelLifecycleHasBeenSet; }
  inline void SetModelLifecycle(ModelLifecycle value) {
    m_modelLifecycleHasBeenSet = true;
    m_modelLifecycle = value;
  }
  inline ModelSummary& WithModelLifecycle(ModelLifecycle value) {
    SetModelLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the model lifecycle will transition from
   * <code>ACTIVE</code> to <code>LEGACY</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetLegacyTimestamp() const { return m_legacyTimestamp; }
  inline bool LegacyTimestampHasBeenSet() const { return m_legacyTimestampHasBeenSet; }
  template <typename LegacyTimestampT = Aws::Utils::DateTime>
  void SetLegacyTimestamp(LegacyTimestampT&& value) {
    m_legacyTimestampHasBeenSet = true;
    m_legacyTimestamp = std::forward<LegacyTimestampT>(value);
  }
  template <typename LegacyTimestampT = Aws::Utils::DateTime>
  ModelSummary& WithLegacyTimestamp(LegacyTimestampT&& value) {
    SetLegacyTimestamp(std::forward<LegacyTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the model will reach end of life and no longer be
   * available for use.</p>
   */
  inline const Aws::Utils::DateTime& GetEndOfLifeTimestamp() const { return m_endOfLifeTimestamp; }
  inline bool EndOfLifeTimestampHasBeenSet() const { return m_endOfLifeTimestampHasBeenSet; }
  template <typename EndOfLifeTimestampT = Aws::Utils::DateTime>
  void SetEndOfLifeTimestamp(EndOfLifeTimestampT&& value) {
    m_endOfLifeTimestampHasBeenSet = true;
    m_endOfLifeTimestamp = std::forward<EndOfLifeTimestampT>(value);
  }
  template <typename EndOfLifeTimestampT = Aws::Utils::DateTime>
  ModelSummary& WithEndOfLifeTimestamp(EndOfLifeTimestampT&& value) {
    SetEndOfLifeTimestamp(std::forward<EndOfLifeTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  Aws::String m_displayName;

  CrossRegionStatus m_crossRegionStatus{CrossRegionStatus::NOT_SET};

  bool m_supportsPromptCaching{false};

  Aws::Vector<AIPromptType> m_supportedAIPromptTypes;

  ModelLifecycle m_modelLifecycle{ModelLifecycle::NOT_SET};

  Aws::Utils::DateTime m_legacyTimestamp{};

  Aws::Utils::DateTime m_endOfLifeTimestamp{};
  bool m_modelIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_crossRegionStatusHasBeenSet = false;
  bool m_supportsPromptCachingHasBeenSet = false;
  bool m_supportedAIPromptTypesHasBeenSet = false;
  bool m_modelLifecycleHasBeenSet = false;
  bool m_legacyTimestampHasBeenSet = false;
  bool m_endOfLifeTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
