﻿/**
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
   * <p>The severity of the finding.</p> <p>The finding provider can provide the
   * initial severity. The finding provider can only update the severity if it hasn't
   * been updated using <code>BatchUpdateFindings</code>.</p> <p>The finding must
   * have either <code>Label</code> or <code>Normalized</code> populated. If only one
   * of these attributes is populated, then Security Hub automatically populates the
   * other one. If neither attribute is populated, then the finding is invalid.
   * <code>Label</code> is the preferred attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Severity">AWS
   * API Reference</a></p>
   */
  class Severity
  {
  public:
    AWS_SECURITYHUB_API Severity() = default;
    AWS_SECURITYHUB_API Severity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Severity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Deprecated. This attribute isn't included in findings. Instead of providing
     * <code>Product</code>, provide <code>Original</code>.</p> <p>The native severity
     * as defined by the Amazon Web Services service or integrated partner product that
     * generated the finding.</p>
     */
    inline double GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    inline void SetProduct(double value) { m_productHasBeenSet = true; m_product = value; }
    inline Severity& WithProduct(double value) { SetProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul> <p>If you provide
     * <code>Normalized</code> and don't provide <code>Label</code>, then
     * <code>Label</code> is set automatically as follows. </p> <ul> <li> <p>0 -
     * <code>INFORMATIONAL</code> </p> </li> <li> <p>1–39 - <code>LOW</code> </p> </li>
     * <li> <p>40–69 - <code>MEDIUM</code> </p> </li> <li> <p>70–89 - <code>HIGH</code>
     * </p> </li> <li> <p>90–100 - <code>CRITICAL</code> </p> </li> </ul>
     */
    inline SeverityLabel GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(SeverityLabel value) { m_labelHasBeenSet = true; m_label = value; }
    inline Severity& WithLabel(SeverityLabel value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated. The normalized severity of a finding. Instead of providing
     * <code>Normalized</code>, provide <code>Label</code>.</p> <p>The value of
     * <code>Normalized</code> can be an integer between <code>0</code> and
     * <code>100</code>.</p> <p>If you provide <code>Label</code> and don't provide
     * <code>Normalized</code>, then <code>Normalized</code> is set automatically as
     * follows.</p> <ul> <li> <p> <code>INFORMATIONAL</code> - 0</p> </li> <li> <p>
     * <code>LOW</code> - 1</p> </li> <li> <p> <code>MEDIUM</code> - 40</p> </li> <li>
     * <p> <code>HIGH</code> - 70</p> </li> <li> <p> <code>CRITICAL</code> - 90</p>
     * </li> </ul>
     */
    inline int GetNormalized() const { return m_normalized; }
    inline bool NormalizedHasBeenSet() const { return m_normalizedHasBeenSet; }
    inline void SetNormalized(int value) { m_normalizedHasBeenSet = true; m_normalized = value; }
    inline Severity& WithNormalized(int value) { SetNormalized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The native severity from the finding product that generated the finding.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 64.</p>
     */
    inline const Aws::String& GetOriginal() const { return m_original; }
    inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
    template<typename OriginalT = Aws::String>
    void SetOriginal(OriginalT&& value) { m_originalHasBeenSet = true; m_original = std::forward<OriginalT>(value); }
    template<typename OriginalT = Aws::String>
    Severity& WithOriginal(OriginalT&& value) { SetOriginal(std::forward<OriginalT>(value)); return *this;}
    ///@}
  private:

    double m_product{0.0};
    bool m_productHasBeenSet = false;

    SeverityLabel m_label{SeverityLabel::NOT_SET};
    bool m_labelHasBeenSet = false;

    int m_normalized{0};
    bool m_normalizedHasBeenSet = false;

    Aws::String m_original;
    bool m_originalHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
