/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/ManagedProductDescriptor.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{
  class DescribeManagedProductsByVendorResult
  {
  public:
    AWS_WAFV2_API DescribeManagedProductsByVendorResult() = default;
    AWS_WAFV2_API DescribeManagedProductsByVendorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DescribeManagedProductsByVendorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline const Aws::Vector<ManagedProductDescriptor>& GetManagedProducts() const { return m_managedProducts; }
    template<typename ManagedProductsT = Aws::Vector<ManagedProductDescriptor>>
    void SetManagedProducts(ManagedProductsT&& value) { m_managedProductsHasBeenSet = true; m_managedProducts = std::forward<ManagedProductsT>(value); }
    template<typename ManagedProductsT = Aws::Vector<ManagedProductDescriptor>>
    DescribeManagedProductsByVendorResult& WithManagedProducts(ManagedProductsT&& value) { SetManagedProducts(std::forward<ManagedProductsT>(value)); return *this;}
    template<typename ManagedProductsT = ManagedProductDescriptor>
    DescribeManagedProductsByVendorResult& AddManagedProducts(ManagedProductsT&& value) { m_managedProductsHasBeenSet = true; m_managedProducts.emplace_back(std::forward<ManagedProductsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeManagedProductsByVendorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedProductDescriptor> m_managedProducts;
    bool m_managedProductsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
