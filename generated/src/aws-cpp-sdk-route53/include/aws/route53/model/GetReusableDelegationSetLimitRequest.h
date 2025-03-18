/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/model/ReusableDelegationSetLimitType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetLimitRequest">AWS
   * API Reference</a></p>
   */
  class GetReusableDelegationSetLimitRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetReusableDelegationSetLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReusableDelegationSetLimit"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify <code>MAX_ZONES_BY_REUSABLE_DELEGATION_SET</code> to get the maximum
     * number of hosted zones that you can associate with the specified reusable
     * delegation set.</p>
     */
    inline ReusableDelegationSetLimitType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReusableDelegationSetLimitType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetReusableDelegationSetLimitRequest& WithType(ReusableDelegationSetLimitType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the delegation set that you want to get the limit for.</p>
     */
    inline const Aws::String& GetDelegationSetId() const { return m_delegationSetId; }
    inline bool DelegationSetIdHasBeenSet() const { return m_delegationSetIdHasBeenSet; }
    template<typename DelegationSetIdT = Aws::String>
    void SetDelegationSetId(DelegationSetIdT&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = std::forward<DelegationSetIdT>(value); }
    template<typename DelegationSetIdT = Aws::String>
    GetReusableDelegationSetLimitRequest& WithDelegationSetId(DelegationSetIdT&& value) { SetDelegationSetId(std::forward<DelegationSetIdT>(value)); return *this;}
    ///@}
  private:

    ReusableDelegationSetLimitType m_type{ReusableDelegationSetLimitType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
