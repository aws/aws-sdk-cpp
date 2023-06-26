/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ServiceNetworkServiceAssociationSummary.h>
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
namespace VPCLattice
{
namespace Model
{
  class ListServiceNetworkServiceAssociationsResult
  {
  public:
    AWS_VPCLATTICE_API ListServiceNetworkServiceAssociationsResult();
    AWS_VPCLATTICE_API ListServiceNetworkServiceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API ListServiceNetworkServiceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<ServiceNetworkServiceAssociationSummary>& GetItems() const{ return m_items; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetItems(const Aws::Vector<ServiceNetworkServiceAssociationSummary>& value) { m_items = value; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetItems(Aws::Vector<ServiceNetworkServiceAssociationSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>Information about the associations.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& WithItems(const Aws::Vector<ServiceNetworkServiceAssociationSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& WithItems(Aws::Vector<ServiceNetworkServiceAssociationSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& AddItems(const ServiceNetworkServiceAssociationSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Information about the associations.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& AddItems(ServiceNetworkServiceAssociationSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline ListServiceNetworkServiceAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListServiceNetworkServiceAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListServiceNetworkServiceAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListServiceNetworkServiceAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ServiceNetworkServiceAssociationSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
