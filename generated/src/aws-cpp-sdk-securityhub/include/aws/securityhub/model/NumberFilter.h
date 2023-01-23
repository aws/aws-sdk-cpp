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
    AWS_SECURITYHUB_API NumberFilter();
    AWS_SECURITYHUB_API NumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline double GetGte() const{ return m_gte; }

    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline bool GteHasBeenSet() const { return m_gteHasBeenSet; }

    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline void SetGte(double value) { m_gteHasBeenSet = true; m_gte = value; }

    /**
     * <p>The greater-than-equal condition to be applied to a single field when
     * querying for findings. </p>
     */
    inline NumberFilter& WithGte(double value) { SetGte(value); return *this;}


    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline double GetLte() const{ return m_lte; }

    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline bool LteHasBeenSet() const { return m_lteHasBeenSet; }

    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline void SetLte(double value) { m_lteHasBeenSet = true; m_lte = value; }

    /**
     * <p>The less-than-equal condition to be applied to a single field when querying
     * for findings. </p>
     */
    inline NumberFilter& WithLte(double value) { SetLte(value); return *this;}


    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline double GetEq() const{ return m_eq; }

    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline bool EqHasBeenSet() const { return m_eqHasBeenSet; }

    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline void SetEq(double value) { m_eqHasBeenSet = true; m_eq = value; }

    /**
     * <p>The equal-to condition to be applied to a single field when querying for
     * findings.</p>
     */
    inline NumberFilter& WithEq(double value) { SetEq(value); return *this;}

  private:

    double m_gte;
    bool m_gteHasBeenSet = false;

    double m_lte;
    bool m_lteHasBeenSet = false;

    double m_eq;
    bool m_eqHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
