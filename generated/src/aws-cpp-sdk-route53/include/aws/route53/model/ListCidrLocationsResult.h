/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/LocationSummary.h>
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
  class ListCidrLocationsResult
  {
  public:
    AWS_ROUTE53_API ListCidrLocationsResult() = default;
    AWS_ROUTE53_API ListCidrLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListCidrLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    ListCidrLocationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the list of CIDR
     * locations.</p>
     */
    inline const Aws::Vector<LocationSummary>& GetCidrLocations() const { return m_cidrLocations; }
    template<typename CidrLocationsT = Aws::Vector<LocationSummary>>
    void SetCidrLocations(CidrLocationsT&& value) { m_cidrLocationsHasBeenSet = true; m_cidrLocations = std::forward<CidrLocationsT>(value); }
    template<typename CidrLocationsT = Aws::Vector<LocationSummary>>
    ListCidrLocationsResult& WithCidrLocations(CidrLocationsT&& value) { SetCidrLocations(std::forward<CidrLocationsT>(value)); return *this;}
    template<typename CidrLocationsT = LocationSummary>
    ListCidrLocationsResult& AddCidrLocations(CidrLocationsT&& value) { m_cidrLocationsHasBeenSet = true; m_cidrLocations.emplace_back(std::forward<CidrLocationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCidrLocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LocationSummary> m_cidrLocations;
    bool m_cidrLocationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
