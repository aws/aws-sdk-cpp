/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SeverityLabel.h>
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
   * <p>Updates to the severity information for a finding.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SeverityUpdate">AWS
   * API Reference</a></p>
   */
  class SeverityUpdate
  {
  public:
    AWS_SECURITYHUB_API SeverityUpdate() = default;
    AWS_SECURITYHUB_API SeverityUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SeverityUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The normalized severity for the finding. This attribute is to be deprecated
     * in favor of <code>Label</code>.</p> <p>If you provide <code>Normalized</code>
     * and don't provide <code>Label</code>, <code>Label</code> is set automatically as
     * follows.</p> <ul> <li> <p>0 - <code>INFORMATIONAL</code> </p> </li> <li> <p>1–39
     * - <code>LOW</code> </p> </li> <li> <p>40–69 - <code>MEDIUM</code> </p> </li>
     * <li> <p>70–89 - <code>HIGH</code> </p> </li> <li> <p>90–100 -
     * <code>CRITICAL</code> </p> </li> </ul>
     */
    inline int GetNormalized() const { return m_normalized; }
    inline bool NormalizedHasBeenSet() const { return m_normalizedHasBeenSet; }
    inline void SetNormalized(int value) { m_normalizedHasBeenSet = true; m_normalized = value; }
    inline SeverityUpdate& WithNormalized(int value) { SetNormalized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The native severity as defined by the Amazon Web Services service or
     * integrated partner product that generated the finding.</p>
     */
    inline double GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    inline void SetProduct(double value) { m_productHasBeenSet = true; m_product = value; }
    inline SeverityUpdate& WithProduct(double value) { SetProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity value of the finding. The allowed values are the following.</p>
     * <ul> <li> <p> <code>INFORMATIONAL</code> - No issue was found.</p> </li> <li>
     * <p> <code>LOW</code> - The issue does not require action on its own.</p> </li>
     * <li> <p> <code>MEDIUM</code> - The issue must be addressed but not urgently.</p>
     * </li> <li> <p> <code>HIGH</code> - The issue must be addressed as a
     * priority.</p> </li> <li> <p> <code>CRITICAL</code> - The issue must be
     * remediated immediately to avoid it escalating.</p> </li> </ul>
     */
    inline SeverityLabel GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(SeverityLabel value) { m_labelHasBeenSet = true; m_label = value; }
    inline SeverityUpdate& WithLabel(SeverityLabel value) { SetLabel(value); return *this;}
    ///@}
  private:

    int m_normalized{0};
    bool m_normalizedHasBeenSet = false;

    double m_product{0.0};
    bool m_productHasBeenSet = false;

    SeverityLabel m_label{SeverityLabel::NOT_SET};
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
