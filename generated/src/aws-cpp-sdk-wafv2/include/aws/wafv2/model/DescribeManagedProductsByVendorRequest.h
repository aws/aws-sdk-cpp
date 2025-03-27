/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class DescribeManagedProductsByVendorRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API DescribeManagedProductsByVendorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeManagedProductsByVendor"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the managed rule group vendor. You use this, along with the rule
     * group name, to identify a rule group.</p>
     */
    inline const Aws::String& GetVendorName() const { return m_vendorName; }
    inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
    template<typename VendorNameT = Aws::String>
    void SetVendorName(VendorNameT&& value) { m_vendorNameHasBeenSet = true; m_vendorName = std::forward<VendorNameT>(value); }
    template<typename VendorNameT = Aws::String>
    DescribeManagedProductsByVendorRequest& WithVendorName(VendorNameT&& value) { SetVendorName(std::forward<VendorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. For an Amplify application, use
     * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline DescribeManagedProductsByVendorRequest& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}
  private:

    Aws::String m_vendorName;
    bool m_vendorNameHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
