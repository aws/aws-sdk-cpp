/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPC.h>
#include <aws/route53/model/HostedZoneConfig.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to create a public
   * or private hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHostedZoneRequest">AWS
   * API Reference</a></p>
   */
  class CreateHostedZoneRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateHostedZoneRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHostedZone"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain. Specify a fully qualified domain name, for example,
     * <i>www.example.com</i>. The trailing dot is optional; Amazon Route 53 assumes
     * that the domain name is fully qualified. This means that Route 53 treats
     * <i>www.example.com</i> (without a trailing dot) and <i>www.example.com.</i>
     * (with a trailing dot) as identical.</p> <p>If you're creating a public hosted
     * zone, this is the name you have registered with your DNS registrar. If your
     * domain name is registered with a registrar other than Route 53, change the name
     * servers for your domain to the set of <code>NameServers</code> that
     * <code>CreateHostedZone</code> returns in <code>DelegationSet</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateHostedZoneRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Private hosted zones only) A complex type that contains information about
     * the Amazon VPC that you're associating with this hosted zone.</p> <p>You can
     * specify only one Amazon VPC when you create a private hosted zone. If you are
     * associating a VPC with a hosted zone with this request, the paramaters
     * <code>VPCId</code> and <code>VPCRegion</code> are also required.</p> <p>To
     * associate additional Amazon VPCs with the hosted zone, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_AssociateVPCWithHostedZone.html">AssociateVPCWithHostedZone</a>
     * after you create a hosted zone.</p>
     */
    inline const VPC& GetVPC() const { return m_vPC; }
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }
    template<typename VPCT = VPC>
    void SetVPC(VPCT&& value) { m_vPCHasBeenSet = true; m_vPC = std::forward<VPCT>(value); }
    template<typename VPCT = VPC>
    CreateHostedZoneRequest& WithVPC(VPCT&& value) { SetVPC(std::forward<VPCT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHostedZone</code> requests to be retried without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateHostedZone</code> request. <code>CallerReference</code> can be any
     * unique string, for example, a date/time stamp.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    CreateHostedZoneRequest& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) A complex type that contains the following optional values:</p>
     * <ul> <li> <p>For public and private hosted zones, an optional comment</p> </li>
     * <li> <p>For private hosted zones, an optional <code>PrivateZone</code>
     * element</p> </li> </ul> <p>If you don't specify a comment or the
     * <code>PrivateZone</code> element, omit <code>HostedZoneConfig</code> and the
     * other elements.</p>
     */
    inline const HostedZoneConfig& GetHostedZoneConfig() const { return m_hostedZoneConfig; }
    inline bool HostedZoneConfigHasBeenSet() const { return m_hostedZoneConfigHasBeenSet; }
    template<typename HostedZoneConfigT = HostedZoneConfig>
    void SetHostedZoneConfig(HostedZoneConfigT&& value) { m_hostedZoneConfigHasBeenSet = true; m_hostedZoneConfig = std::forward<HostedZoneConfigT>(value); }
    template<typename HostedZoneConfigT = HostedZoneConfig>
    CreateHostedZoneRequest& WithHostedZoneConfig(HostedZoneConfigT&& value) { SetHostedZoneConfig(std::forward<HostedZoneConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to associate a reusable delegation set with this hosted zone, the
     * ID that Amazon Route 53 assigned to the reusable delegation set when you created
     * it. For more information about reusable delegation sets, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateReusableDelegationSet.html">CreateReusableDelegationSet</a>.</p>
     * <p>If you are using a reusable delegation set to create a public hosted zone for
     * a subdomain, make sure that the parent hosted zone doesn't use one or more of
     * the same name servers. If you have overlapping nameservers, the operation will
     * cause a <code>ConflictingDomainsExist</code> error.</p>
     */
    inline const Aws::String& GetDelegationSetId() const { return m_delegationSetId; }
    inline bool DelegationSetIdHasBeenSet() const { return m_delegationSetIdHasBeenSet; }
    template<typename DelegationSetIdT = Aws::String>
    void SetDelegationSetId(DelegationSetIdT&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = std::forward<DelegationSetIdT>(value); }
    template<typename DelegationSetIdT = Aws::String>
    CreateHostedZoneRequest& WithDelegationSetId(DelegationSetIdT&& value) { SetDelegationSetId(std::forward<DelegationSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VPC m_vPC;
    bool m_vPCHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    HostedZoneConfig m_hostedZoneConfig;
    bool m_hostedZoneConfigHasBeenSet = false;

    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
