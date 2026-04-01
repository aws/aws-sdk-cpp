/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/TemplateVariableSource.h>
#include <aws/pinpoint-sms-voice-v2/model/TemplateVariableType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>Contains metadata about a template variable.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TemplateVariableMetadata">AWS
 * API Reference</a></p>
 */
class TemplateVariableMetadata {
 public:
  AWS_PINPOINTSMSVOICEV2_API TemplateVariableMetadata() = default;
  AWS_PINPOINTSMSVOICEV2_API TemplateVariableMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API TemplateVariableMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the variable.</p>
   */
  inline TemplateVariableType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TemplateVariableType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TemplateVariableMetadata& WithType(TemplateVariableType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the variable is required.</p>
   */
  inline bool GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  inline void SetRequired(bool value) {
    m_requiredHasBeenSet = true;
    m_required = value;
  }
  inline TemplateVariableMetadata& WithRequired(bool value) {
    SetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the variable.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TemplateVariableMetadata& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length for string variables.</p>
   */
  inline int GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline TemplateVariableMetadata& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum value for numeric variables.</p>
   */
  inline int GetMinValue() const { return m_minValue; }
  inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
  inline void SetMinValue(int value) {
    m_minValueHasBeenSet = true;
    m_minValue = value;
  }
  inline TemplateVariableMetadata& WithMinValue(int value) {
    SetMinValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum value for numeric variables.</p>
   */
  inline int GetMaxValue() const { return m_maxValue; }
  inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
  inline void SetMaxValue(int value) {
    m_maxValueHasBeenSet = true;
    m_maxValue = value;
  }
  inline TemplateVariableMetadata& WithMaxValue(int value) {
    SetMaxValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value for the variable.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  TemplateVariableMetadata& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The regex pattern the variable value must match.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  TemplateVariableMetadata& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A sample value for the variable.</p>
   */
  inline const Aws::String& GetSample() const { return m_sample; }
  inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }
  template <typename SampleT = Aws::String>
  void SetSample(SampleT&& value) {
    m_sampleHasBeenSet = true;
    m_sample = std::forward<SampleT>(value);
  }
  template <typename SampleT = Aws::String>
  TemplateVariableMetadata& WithSample(SampleT&& value) {
    SetSample(std::forward<SampleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the variable, either <code>CUSTOMER</code> or
   * <code>SYSTEM</code>.</p>
   */
  inline TemplateVariableSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(TemplateVariableSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline TemplateVariableMetadata& WithSource(TemplateVariableSource value) {
    SetSource(value);
    return *this;
  }
  ///@}
 private:
  TemplateVariableType m_type{TemplateVariableType::NOT_SET};

  bool m_required{false};

  Aws::String m_description;

  int m_maxLength{0};

  int m_minValue{0};

  int m_maxValue{0};

  Aws::String m_defaultValue;

  Aws::String m_pattern;

  Aws::String m_sample;

  TemplateVariableSource m_source{TemplateVariableSource::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_requiredHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_minValueHasBeenSet = false;
  bool m_maxValueHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_sampleHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
