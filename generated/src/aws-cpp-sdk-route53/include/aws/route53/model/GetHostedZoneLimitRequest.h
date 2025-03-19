/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/HostedZoneLimitType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the request to create a hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneLimitRequest">AWS
   * API Reference</a></p>
   */
  class GetHostedZoneLimitRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetHostedZoneLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHostedZoneLimit"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The limit that you want to get. Valid values include the following:</p> <ul>
     * <li> <p> <b>MAX_RRSETS_BY_ZONE</b>: The maximum number of records that you can
     * create in the specified hosted zone.</p> </li> <li> <p>
     * <b>MAX_VPCS_ASSOCIATED_BY_ZONE</b>: The maximum number of Amazon VPCs that you
     * can associate with the specified private hosted zone.</p> </li> </ul>
     */
    inline HostedZoneLimitType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HostedZoneLimitType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetHostedZoneLimitRequest& WithType(HostedZoneLimitType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the hosted zone that you want to get a limit for.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    GetHostedZoneLimitRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}
  private:

    HostedZoneLimitType m_type{HostedZoneLimitType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
