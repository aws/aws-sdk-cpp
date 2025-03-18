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
  class DescribeAllManagedProductsResult
  {
  public:
    AWS_WAFV2_API DescribeAllManagedProductsResult() = default;
    AWS_WAFV2_API DescribeAllManagedProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DescribeAllManagedProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline const Aws::Vector<ManagedProductDescriptor>& GetManagedProducts() const { return m_managedProducts; }
    template<typename ManagedProductsT = Aws::Vector<ManagedProductDescriptor>>
    void SetManagedProducts(ManagedProductsT&& value) { m_managedProductsHasBeenSet = true; m_managedProducts = std::forward<ManagedProductsT>(value); }
    template<typename ManagedProductsT = Aws::Vector<ManagedProductDescriptor>>
    DescribeAllManagedProductsResult& WithManagedProducts(ManagedProductsT&& value) { SetManagedProducts(std::forward<ManagedProductsT>(value)); return *this;}
    template<typename ManagedProductsT = ManagedProductDescriptor>
    DescribeAllManagedProductsResult& AddManagedProducts(ManagedProductsT&& value) { m_managedProductsHasBeenSet = true; m_managedProducts.emplace_back(std::forward<ManagedProductsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAllManagedProductsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
