/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZoneLimitType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneLimit">AWS
   * API Reference</a></p>
   */
  class HostedZoneLimit
  {
  public:
    AWS_ROUTE53_API HostedZoneLimit() = default;
    AWS_ROUTE53_API HostedZoneLimit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HostedZoneLimit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The limit that you requested. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline HostedZoneLimitType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HostedZoneLimitType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HostedZoneLimit& WithType(HostedZoneLimitType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value for the limit that is specified by <code>Type</code>.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline HostedZoneLimit& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    HostedZoneLimitType m_type{HostedZoneLimitType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
