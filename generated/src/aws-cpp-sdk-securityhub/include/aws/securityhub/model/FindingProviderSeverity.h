/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SeverityLabel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The severity assigned to a finding by the finding provider. This object may
   * include one or more of the following attributes:</p> <ul> <li> <p>
   * <code>Label</code> </p> </li> <li> <p> <code>Normalized</code> </p> </li> <li>
   * <p> <code>Original</code> </p> </li> <li> <p> <code>Product</code> </p> </li>
   * </ul> <p>If a <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
   * <code>BatchImportFindings</code> </a> request for a new finding only provides
   * <code>Label</code> or only provides <code>Normalized</code>, Security Hub
   * automatically populates the value of the other field.</p> <p>The
   * <code>Normalized</code> and <code>Product</code> attributes are included in the
   * <code>FindingProviderSeverity</code> structure to preserve the historical
   * information associated with the finding, even if the top-level
   * <code>Severity</code> object is later modified using the <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
   * <code>BatchUpdateFindings</code> </a> operation.</p> <p>If the top-level
   * <code>Finding.Severity</code> object is present, but
   * <code>Finding.FindingProviderFields</code> isn't present, Security Hub creates
   * the <code>FindingProviderFields.Severity</code> object and copies the entire
   * <code>Finding.Severity</code> object into it. This ensures that the original,
   * provider-supplied details are retained within the
   * <code>FindingProviderFields.Severity</code> object, even if the top-level
   * <code>Severity</code> object is overwritten. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingProviderSeverity">AWS
   * API Reference</a></p>
   */
  class FindingProviderSeverity
  {
  public:
    AWS_SECURITYHUB_API FindingProviderSeverity() = default;
    AWS_SECURITYHUB_API FindingProviderSeverity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingProviderSeverity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The severity label assigned to the finding by the finding provider.</p>
     */
    inline SeverityLabel GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(SeverityLabel value) { m_labelHasBeenSet = true; m_label = value; }
    inline FindingProviderSeverity& WithLabel(SeverityLabel value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding provider's original value for the severity.</p> <p>Length
     * Constraints: Minimum length of 1. Maximum length of 64.</p>
     */
    inline const Aws::String& GetOriginal() const { return m_original; }
    inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
    template<typename OriginalT = Aws::String>
    void SetOriginal(OriginalT&& value) { m_originalHasBeenSet = true; m_original = std::forward<OriginalT>(value); }
    template<typename OriginalT = Aws::String>
    FindingProviderSeverity& WithOriginal(OriginalT&& value) { SetOriginal(std::forward<OriginalT>(value)); return *this;}
    ///@}
  private:

    SeverityLabel m_label{SeverityLabel::NOT_SET};
    bool m_labelHasBeenSet = false;

    Aws::String m_original;
    bool m_originalHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
