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
    AWS_WAFV2_API DescribeManagedProductsByVendorResult();
    AWS_WAFV2_API DescribeManagedProductsByVendorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DescribeManagedProductsByVendorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline const Aws::Vector<ManagedProductDescriptor>& GetManagedProducts() const{ return m_managedProducts; }

    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline void SetManagedProducts(const Aws::Vector<ManagedProductDescriptor>& value) { m_managedProducts = value; }

    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline void SetManagedProducts(Aws::Vector<ManagedProductDescriptor>&& value) { m_managedProducts = std::move(value); }

    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline DescribeManagedProductsByVendorResult& WithManagedProducts(const Aws::Vector<ManagedProductDescriptor>& value) { SetManagedProducts(value); return *this;}

    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline DescribeManagedProductsByVendorResult& WithManagedProducts(Aws::Vector<ManagedProductDescriptor>&& value) { SetManagedProducts(std::move(value)); return *this;}

    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline DescribeManagedProductsByVendorResult& AddManagedProducts(const ManagedProductDescriptor& value) { m_managedProducts.push_back(value); return *this; }

    /**
     * <p>High-level information for the managed rule groups owned by the specified
     * vendor. </p>
     */
    inline DescribeManagedProductsByVendorResult& AddManagedProducts(ManagedProductDescriptor&& value) { m_managedProducts.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeManagedProductsByVendorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeManagedProductsByVendorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeManagedProductsByVendorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ManagedProductDescriptor> m_managedProducts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
