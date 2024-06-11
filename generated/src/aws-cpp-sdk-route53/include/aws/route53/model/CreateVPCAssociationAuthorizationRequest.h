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
   * <p>A complex type that contains information about the request to authorize
   * associating a VPC with your private hosted zone. Authorization is only required
   * when a private hosted zone and a VPC were created by using different
   * accounts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateVPCAssociationAuthorizationRequest">AWS
   * API Reference</a></p>
   */
  class CreateVPCAssociationAuthorizationRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateVPCAssociationAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVPCAssociationAuthorization"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the private hosted zone that you want to authorize associating a
     * VPC with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline CreateVPCAssociationAuthorizationRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline CreateVPCAssociationAuthorizationRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline CreateVPCAssociationAuthorizationRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the VPC ID and region for the VPC that you want
     * to authorize associating with your hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }
    inline bool VPCHasBeenSet() const { return m_vPCHasBeenSet; }
    inline void SetVPC(const VPC& value) { m_vPCHasBeenSet = true; m_vPC = value; }
    inline void SetVPC(VPC&& value) { m_vPCHasBeenSet = true; m_vPC = std::move(value); }
    inline CreateVPCAssociationAuthorizationRequest& WithVPC(const VPC& value) { SetVPC(value); return *this;}
    inline CreateVPCAssociationAuthorizationRequest& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    VPC m_vPC;
    bool m_vPCHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
