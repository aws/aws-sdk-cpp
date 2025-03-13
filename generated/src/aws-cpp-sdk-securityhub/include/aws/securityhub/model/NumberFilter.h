/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>A number filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NumberFilter">AWS
   * API Reference</a></p>
   */
  class NumberFilter
  {
  public:
    AWS_SECURITYHUB_API NumberFilter() = default;
    AWS_SECURITYHUB_API NumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline double GetGte() const { return m_gte; }
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }
    inline void SetGte(double value) { m_gteHasBeenSet = true; m_gte = value; }
    inline NumberFilter& WithGte(double value) { SetGte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline double GetLte() const { return m_lte; }
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }
    inline void SetLte(double value) { m_lteHasBeenSet = true; m_lte = value; }
    inline NumberFilter& WithLte(double value) { SetLte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline double GetEq() const { return m_eq; }
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }
    inline void SetEq(double value) { m_eqHasBeenSet = true; m_eq = value; }
    inline NumberFilter& WithEq(double value) { SetEq(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The greater-than condition to be applied to a single field when querying for
     * findings. </p>
     */
    inline double GetGt() const { return m_gt; }
    inline bool GtHasBeenSet() const { return m_gtHasBeenSet; }
    inline void SetGt(double value) { m_gtHasBeenSet = true; m_gt = value; }
    inline NumberFilter& WithGt(double value) { SetGt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The less-than condition to be applied to a single field when querying for
     * findings. </p>
     */
    inline double GetLt() const { return m_lt; }
    inline bool LtHasBeenSet() const { return m_ltHasBeenSet; }
    inline void SetLt(double value) { m_ltHasBeenSet = true; m_lt = value; }
    inline NumberFilter& WithLt(double value) { SetLt(value); return *this;}
    ///@}
  private:

    double m_gte{0.0};
    bool m_gteHasBeenSet = false;

    double m_lte{0.0};
    bool m_lteHasBeenSet = false;

    double m_eq{0.0};
    bool m_eqHasBeenSet = false;

    double m_gt{0.0};
    bool m_gtHasBeenSet = false;

    double m_lt{0.0};
    bool m_ltHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
