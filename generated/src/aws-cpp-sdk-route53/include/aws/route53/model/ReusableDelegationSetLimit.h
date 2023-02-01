/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ReusableDelegationSetLimitType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the type of limit that you specified in the
   * request and the current value for that limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ReusableDelegationSetLimit">AWS
   * API Reference</a></p>
   */
  class ReusableDelegationSetLimit
  {
  public:
    AWS_ROUTE53_API ReusableDelegationSetLimit();
    AWS_ROUTE53_API ReusableDelegationSetLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API ReusableDelegationSetLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline const ReusableDelegationSetLimitType& GetType() const{ return m_type; }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline void SetType(const ReusableDelegationSetLimitType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline void SetType(ReusableDelegationSetLimitType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline ReusableDelegationSetLimit& WithType(const ReusableDelegationSetLimitType& value) { SetType(value); return *this;}

    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline ReusableDelegationSetLimit& WithType(ReusableDelegationSetLimitType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline ReusableDelegationSetLimit& WithValue(long long value) { SetValue(value); return *this;}

  private:

    ReusableDelegationSetLimitType m_type;
    bool m_typeHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
