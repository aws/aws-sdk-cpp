/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RemediationGuidanceContext.h>
#include <aws/securityhub/model/RemediationGuidanceExamples.h>
#include <aws/securityhub/model/RemediationGuidanceMetadata.h>
#include <aws/securityhub/model/RemediationGuidanceSpecification.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>A remediation guidebook outlining guidance in resolving the remediation
 * target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationGuidance">AWS
 * API Reference</a></p>
 */
class RemediationGuidance {
 public:
  AWS_SECURITYHUB_API RemediationGuidance() = default;
  AWS_SECURITYHUB_API RemediationGuidance(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationGuidance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the remediation target type.</p>
   */
  inline const Aws::String& GetTargetTypeName() const { return m_targetTypeName; }
  inline bool TargetTypeNameHasBeenSet() const { return m_targetTypeNameHasBeenSet; }
  template <typename TargetTypeNameT = Aws::String>
  void SetTargetTypeName(TargetTypeNameT&& value) {
    m_targetTypeNameHasBeenSet = true;
    m_targetTypeName = std::forward<TargetTypeNameT>(value);
  }
  template <typename TargetTypeNameT = Aws::String>
  RemediationGuidance& WithTargetTypeName(TargetTypeNameT&& value) {
    SetTargetTypeName(std::forward<TargetTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation pattern of the remediation target.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  RemediationGuidance& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The guidance version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  RemediationGuidance& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The context behind the remediation target's existence and guidance.</p>
   */
  inline const RemediationGuidanceContext& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = RemediationGuidanceContext>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = RemediationGuidanceContext>
  RemediationGuidance& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specification of the remediation target guidance. This outlines required
   * resource parameters and permissions, remediation steps, and the end state.</p>
   */
  inline const RemediationGuidanceSpecification& GetSpecification() const { return m_specification; }
  inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
  template <typename SpecificationT = RemediationGuidanceSpecification>
  void SetSpecification(SpecificationT&& value) {
    m_specificationHasBeenSet = true;
    m_specification = std::forward<SpecificationT>(value);
  }
  template <typename SpecificationT = RemediationGuidanceSpecification>
  RemediationGuidance& WithSpecification(SpecificationT&& value) {
    SetSpecification(std::forward<SpecificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provided remediation guidance examples in different formats that can be run
   * for remediating the target.</p>
   */
  inline const RemediationGuidanceExamples& GetExamples() const { return m_examples; }
  inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
  template <typename ExamplesT = RemediationGuidanceExamples>
  void SetExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples = std::forward<ExamplesT>(value);
  }
  template <typename ExamplesT = RemediationGuidanceExamples>
  RemediationGuidance& WithExamples(ExamplesT&& value) {
    SetExamples(std::forward<ExamplesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata of the remediation guidance.</p>
   */
  inline const RemediationGuidanceMetadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = RemediationGuidanceMetadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = RemediationGuidanceMetadata>
  RemediationGuidance& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetTypeName;

  Aws::String m_pattern;

  Aws::String m_version;

  RemediationGuidanceContext m_context;

  RemediationGuidanceSpecification m_specification;

  RemediationGuidanceExamples m_examples;

  RemediationGuidanceMetadata m_metadata;
  bool m_targetTypeNameHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_specificationHasBeenSet = false;
  bool m_examplesHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
