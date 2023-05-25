/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents an amount of money in United States dollars.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/USD">AWS API
   * Reference</a></p>
   */
  class USD
  {
  public:
    AWS_SAGEMAKER_API USD();
    AWS_SAGEMAKER_API USD(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API USD& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The whole number of dollars in the amount.</p>
     */
    inline int GetDollars() const{ return m_dollars; }

    /**
     * <p>The whole number of dollars in the amount.</p>
     */
    inline bool DollarsHasBeenSet() const { return m_dollarsHasBeenSet; }

    /**
     * <p>The whole number of dollars in the amount.</p>
     */
    inline void SetDollars(int value) { m_dollarsHasBeenSet = true; m_dollars = value; }

    /**
     * <p>The whole number of dollars in the amount.</p>
     */
    inline USD& WithDollars(int value) { SetDollars(value); return *this;}


    /**
     * <p>The fractional portion, in cents, of the amount. </p>
     */
    inline int GetCents() const{ return m_cents; }

    /**
     * <p>The fractional portion, in cents, of the amount. </p>
     */
    inline bool CentsHasBeenSet() const { return m_centsHasBeenSet; }

    /**
     * <p>The fractional portion, in cents, of the amount. </p>
     */
    inline void SetCents(int value) { m_centsHasBeenSet = true; m_cents = value; }

    /**
     * <p>The fractional portion, in cents, of the amount. </p>
     */
    inline USD& WithCents(int value) { SetCents(value); return *this;}


    /**
     * <p>Fractions of a cent, in tenths.</p>
     */
    inline int GetTenthFractionsOfACent() const{ return m_tenthFractionsOfACent; }

    /**
     * <p>Fractions of a cent, in tenths.</p>
     */
    inline bool TenthFractionsOfACentHasBeenSet() const { return m_tenthFractionsOfACentHasBeenSet; }

    /**
     * <p>Fractions of a cent, in tenths.</p>
     */
    inline void SetTenthFractionsOfACent(int value) { m_tenthFractionsOfACentHasBeenSet = true; m_tenthFractionsOfACent = value; }

    /**
     * <p>Fractions of a cent, in tenths.</p>
     */
    inline USD& WithTenthFractionsOfACent(int value) { SetTenthFractionsOfACent(value); return *this;}

  private:

    int m_dollars;
    bool m_dollarsHasBeenSet = false;

    int m_cents;
    bool m_centsHasBeenSet = false;

    int m_tenthFractionsOfACent;
    bool m_tenthFractionsOfACentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
