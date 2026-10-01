/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ExposureImpact.h>
#include <aws/securityhub/model/ExposureSeverity.h>

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
 * <p>Provides details about an exposure finding and the effect the specific
 * remediation target has on it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ExposureFinding">AWS
 * API Reference</a></p>
 */
class ExposureFinding {
 public:
  AWS_SECURITYHUB_API ExposureFinding() = default;
  AWS_SECURITYHUB_API ExposureFinding(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ExposureFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier (ID) of the Security Hub exposure finding, found under
   * the <code>metadata.uid</code> field of the finding.</p>
   */
  inline const Aws::String& GetMetadataUid() const { return m_metadataUid; }
  inline bool MetadataUidHasBeenSet() const { return m_metadataUidHasBeenSet; }
  template <typename MetadataUidT = Aws::String>
  void SetMetadataUid(MetadataUidT&& value) {
    m_metadataUidHasBeenSet = true;
    m_metadataUid = std::forward<MetadataUidT>(value);
  }
  template <typename MetadataUidT = Aws::String>
  ExposureFinding& WithMetadataUid(MetadataUidT&& value) {
    SetMetadataUid(std::forward<MetadataUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the exposure finding.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  ExposureFinding& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the exposure finding before the remediation target is
   * resolved.</p>
   */
  inline ExposureSeverity GetPreviousSeverity() const { return m_previousSeverity; }
  inline bool PreviousSeverityHasBeenSet() const { return m_previousSeverityHasBeenSet; }
  inline void SetPreviousSeverity(ExposureSeverity value) {
    m_previousSeverityHasBeenSet = true;
    m_previousSeverity = value;
  }
  inline ExposureFinding& WithPreviousSeverity(ExposureSeverity value) {
    SetPreviousSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the exposure finding after the remediation target is
   * resolved.</p>
   */
  inline ExposureSeverity GetProjectedSeverity() const { return m_projectedSeverity; }
  inline bool ProjectedSeverityHasBeenSet() const { return m_projectedSeverityHasBeenSet; }
  inline void SetProjectedSeverity(ExposureSeverity value) {
    m_projectedSeverityHasBeenSet = true;
    m_projectedSeverity = value;
  }
  inline ExposureFinding& WithProjectedSeverity(ExposureSeverity value) {
    SetProjectedSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The impact resolving a remediation target has on the exposure finding.</p>
   * <ul> <li> <p> <code>Reduces</code> specifies that resolving the remediation
   * target lowers the severity of the exposure finding, but does not resolve it.</p>
   * </li> <li> <p> <code>Resolves</code> specifies that resolving the remediation
   * target resolves the exposure finding.</p> </li> <li> <p> <code>Unchanged</code>
   * specifies that resolving the remediation target does not change the severity of
   * the exposure finding.</p> </li> </ul>
   */
  inline ExposureImpact GetImpact() const { return m_impact; }
  inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
  inline void SetImpact(ExposureImpact value) {
    m_impactHasBeenSet = true;
    m_impact = value;
  }
  inline ExposureFinding& WithImpact(ExposureImpact value) {
    SetImpact(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataUid;

  Aws::String m_title;

  ExposureSeverity m_previousSeverity{ExposureSeverity::NOT_SET};

  ExposureSeverity m_projectedSeverity{ExposureSeverity::NOT_SET};

  ExposureImpact m_impact{ExposureImpact::NOT_SET};
  bool m_metadataUidHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_previousSeverityHasBeenSet = false;
  bool m_projectedSeverityHasBeenSet = false;
  bool m_impactHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
