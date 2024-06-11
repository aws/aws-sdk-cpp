﻿/**
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
    AWS_ROUTE53_API ListCidrBlocksResult();
    AWS_ROUTE53_API ListCidrBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListCidrBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results. </p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCidrBlocksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCidrBlocksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCidrBlocksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the CIDR blocks.</p>
     */
    inline const Aws::Vector<CidrBlockSummary>& GetCidrBlocks() const{ return m_cidrBlocks; }
    inline void SetCidrBlocks(const Aws::Vector<CidrBlockSummary>& value) { m_cidrBlocks = value; }
    inline void SetCidrBlocks(Aws::Vector<CidrBlockSummary>&& value) { m_cidrBlocks = std::move(value); }
    inline ListCidrBlocksResult& WithCidrBlocks(const Aws::Vector<CidrBlockSummary>& value) { SetCidrBlocks(value); return *this;}
    inline ListCidrBlocksResult& WithCidrBlocks(Aws::Vector<CidrBlockSummary>&& value) { SetCidrBlocks(std::move(value)); return *this;}
    inline ListCidrBlocksResult& AddCidrBlocks(const CidrBlockSummary& value) { m_cidrBlocks.push_back(value); return *this; }
    inline ListCidrBlocksResult& AddCidrBlocks(CidrBlockSummary&& value) { m_cidrBlocks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCidrBlocksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCidrBlocksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCidrBlocksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CidrBlockSummary> m_cidrBlocks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
