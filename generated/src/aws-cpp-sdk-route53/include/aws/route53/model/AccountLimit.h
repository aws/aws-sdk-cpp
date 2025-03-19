/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/AccountLimitType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/AccountLimit">AWS
   * API Reference</a></p>
   */
  class AccountLimit
  {
  public:
    AWS_ROUTE53_API AccountLimit() = default;
    AWS_ROUTE53_API AccountLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API AccountLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_HEALTH_CHECKS_BY_OWNER</b>: The maximum number of health checks
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_HOSTED_ZONES_BY_OWNER</b>: The maximum number of hosted zones that you
     * can create using the current account.</p> </li> <li> <p>
     * <b>MAX_REUSABLE_DELEGATION_SETS_BY_OWNER</b>: The maximum number of reusable
     * delegation sets that you can create using the current account.</p> </li> <li>
     * <p> <b>MAX_TRAFFIC_POLICIES_BY_OWNER</b>: The maximum number of traffic policies
     * that you can create using the current account.</p> </li> <li> <p>
     * <b>MAX_TRAFFIC_POLICY_INSTANCES_BY_OWNER</b>: The maximum number of traffic
     * policy instances that you can create using the current account. (Traffic policy
     * instances are referred to as traffic flow policy records in the Amazon Route 53
     * console.)</p> </li> </ul>
     */
    inline AccountLimitType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AccountLimitType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AccountLimit& WithType(AccountLimitType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value for the limit that is specified by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AccountLimit.html#Route53-Type-AccountLimit-Type">Type</a>.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline AccountLimit& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    AccountLimitType m_type{AccountLimitType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
