/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/marketplace-entitlement/model/GetEntitlementFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace Model
{

  /**
   * <p>The GetEntitlementsRequest contains parameters for the GetEntitlements
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlementsRequest">AWS
   * API Reference</a></p>
   */
  class GetEntitlementsRequest : public MarketplaceEntitlementServiceRequest
  {
  public:
    AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEntitlements"; }

    AWS_MARKETPLACEENTITLEMENTSERVICE_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACEENTITLEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    GetEntitlementsRequest& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p> <p> <code>CustomerIdentifier</code>
     * and <code>CustomerAWSAccountID</code> are mutually exclusive. You can't specify
     * both in the same request. </p>
     */
    inline const Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>>
    GetEntitlementsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    inline GetEntitlementsRequest& AddFilter(GetEntitlementFilterName key, Aws::Vector<Aws::String> value) {
      m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEntitlementsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to retrieve from the GetEntitlements operation.
     * For pagination, use the NextToken field in subsequent calls to
     * GetEntitlements.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetEntitlementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
