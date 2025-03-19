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
    AWS_ROUTE53_API ReusableDelegationSetLimit() = default;
    AWS_ROUTE53_API ReusableDelegationSetLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API ReusableDelegationSetLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The limit that you requested:
     * <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>, the maximum number of hosted
     * zones that you can associate with the specified reusable delegation set.</p>
     */
    inline ReusableDelegationSetLimitType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReusableDelegationSetLimitType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ReusableDelegationSetLimit& WithType(ReusableDelegationSetLimitType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value for the <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code>
     * limit.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline ReusableDelegationSetLimit& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    ReusableDelegationSetLimitType m_type{ReusableDelegationSetLimitType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
