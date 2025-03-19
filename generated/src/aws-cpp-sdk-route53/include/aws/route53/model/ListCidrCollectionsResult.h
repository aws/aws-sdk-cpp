/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/CollectionSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  class ListCidrCollectionsResult
  {
  public:
    AWS_ROUTE53_API ListCidrCollectionsResult() = default;
    AWS_ROUTE53_API ListCidrCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListCidrCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCidrCollectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline const Aws::Vector<CollectionSummary>& GetCidrCollections() const { return m_cidrCollections; }
    template<typename CidrCollectionsT = Aws::Vector<CollectionSummary>>
    void SetCidrCollections(CidrCollectionsT&& value) { m_cidrCollectionsHasBeenSet = true; m_cidrCollections = std::forward<CidrCollectionsT>(value); }
    template<typename CidrCollectionsT = Aws::Vector<CollectionSummary>>
    ListCidrCollectionsResult& WithCidrCollections(CidrCollectionsT&& value) { SetCidrCollections(std::forward<CidrCollectionsT>(value)); return *this;}
    template<typename CidrCollectionsT = CollectionSummary>
    ListCidrCollectionsResult& AddCidrCollections(CidrCollectionsT&& value) { m_cidrCollectionsHasBeenSet = true; m_cidrCollections.emplace_back(std::forward<CidrCollectionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCidrCollectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CollectionSummary> m_cidrCollections;
    bool m_cidrCollectionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
