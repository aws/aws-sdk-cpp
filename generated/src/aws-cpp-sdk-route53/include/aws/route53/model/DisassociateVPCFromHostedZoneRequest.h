/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPC.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the VPC that you want to
   * disassociate from a specified private hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DisassociateVPCFromHostedZoneRequest">AWS
   * API Reference</a></p>
   */
  class DisassociateVPCFromHostedZoneRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API DisassociateVPCFromHostedZoneRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateVPCFromHostedZone"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the private hosted zone that you want to disassociate a VPC
     * from.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    DisassociateVPCFromHostedZoneRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the VPC that you're
     * disassociating from the specified hosted zone.</p>
     */
    inline const VPC& GetVPC() const { return m_vPC; }
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }
    template<typename VPCT = VPC>
    void SetVPC(VPCT&& value) { m_vPCHasBeenSet = true; m_vPC = std::forward<VPCT>(value); }
    template<typename VPCT = VPC>
    DisassociateVPCFromHostedZoneRequest& WithVPC(VPCT&& value) { SetVPC(std::forward<VPCT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Optional:</i> A comment about the disassociation request.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    DisassociateVPCFromHostedZoneRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    VPC m_vPC;
    bool m_vPCHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
