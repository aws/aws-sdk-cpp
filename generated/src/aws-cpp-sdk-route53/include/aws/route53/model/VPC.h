/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/VPCRegion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>(Private hosted zones only) A complex type that contains information about an
   * Amazon VPC.</p> <p>If you associate a private hosted zone with an Amazon VPC
   * when you make a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateHostedZone.html">CreateHostedZone</a>
   * request, the following parameters are also required.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/VPC">AWS API
   * Reference</a></p>
   */
  class VPC
  {
  public:
    AWS_ROUTE53_API VPC() = default;
    AWS_ROUTE53_API VPC(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API VPC& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>(Private hosted zones only) The region that an Amazon VPC was created in.</p>
     */
    inline VPCRegion GetVPCRegion() const { return m_vPCRegion; }
    inline bool VPCRegionHasBeenSet() const { return m_vPCRegionHasBeenSet; }
    inline void SetVPCRegion(VPCRegion value) { m_vPCRegionHasBeenSet = true; m_vPCRegion = value; }
    inline VPC& WithVPCRegion(VPCRegion value) { SetVPCRegion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetVPCId() const { return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    template<typename VPCIdT = Aws::String>
    void SetVPCId(VPCIdT&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::forward<VPCIdT>(value); }
    template<typename VPCIdT = Aws::String>
    VPC& WithVPCId(VPCIdT&& value) { SetVPCId(std::forward<VPCIdT>(value)); return *this;}
    ///@}
  private:

    VPCRegion m_vPCRegion{VPCRegion::NOT_SET};
    bool m_vPCRegionHasBeenSet = false;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
