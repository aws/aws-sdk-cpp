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
    AWS_WAFV2_API DescribeAllManagedProductsResult();
    AWS_WAFV2_API DescribeAllManagedProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DescribeAllManagedProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline const Aws::Vector<ManagedProductDescriptor>& GetManagedProducts() const{ return m_managedProducts; }

    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline void SetManagedProducts(const Aws::Vector<ManagedProductDescriptor>& value) { m_managedProducts = value; }

    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline void SetManagedProducts(Aws::Vector<ManagedProductDescriptor>&& value) { m_managedProducts = std::move(value); }

    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline DescribeAllManagedProductsResult& WithManagedProducts(const Aws::Vector<ManagedProductDescriptor>& value) { SetManagedProducts(value); return *this;}

    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline DescribeAllManagedProductsResult& WithManagedProducts(Aws::Vector<ManagedProductDescriptor>&& value) { SetManagedProducts(std::move(value)); return *this;}

    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline DescribeAllManagedProductsResult& AddManagedProducts(const ManagedProductDescriptor& value) { m_managedProducts.push_back(value); return *this; }

    /**
     * <p>High-level information for the Amazon Web Services Managed Rules rule groups
     * and Amazon Web Services Marketplace managed rule groups. </p>
     */
    inline DescribeAllManagedProductsResult& AddManagedProducts(ManagedProductDescriptor&& value) { m_managedProducts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAllManagedProductsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAllManagedProductsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAllManagedProductsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ManagedProductDescriptor> m_managedProducts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
