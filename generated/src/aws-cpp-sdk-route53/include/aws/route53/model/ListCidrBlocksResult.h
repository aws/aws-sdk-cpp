/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/CidrBlockSummary.h>
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
  class ListCidrBlocksResult
  {
  public:
    AWS_ROUTE53_API ListCidrBlocksResult() = default;
    AWS_ROUTE53_API ListCidrBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListCidrBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results. </p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCidrBlocksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the CIDR blocks.</p>
     */
    inline const Aws::Vector<CidrBlockSummary>& GetCidrBlocks() const { return m_cidrBlocks; }
    template<typename CidrBlocksT = Aws::Vector<CidrBlockSummary>>
    void SetCidrBlocks(CidrBlocksT&& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks = std::forward<CidrBlocksT>(value); }
    template<typename CidrBlocksT = Aws::Vector<CidrBlockSummary>>
    ListCidrBlocksResult& WithCidrBlocks(CidrBlocksT&& value) { SetCidrBlocks(std::forward<CidrBlocksT>(value)); return *this;}
    template<typename CidrBlocksT = CidrBlockSummary>
    ListCidrBlocksResult& AddCidrBlocks(CidrBlocksT&& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks.emplace_back(std::forward<CidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCidrBlocksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CidrBlockSummary> m_cidrBlocks;
    bool m_cidrBlocksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
