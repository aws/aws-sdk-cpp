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
    AWS_ROUTE53_API ListCidrCollectionsResult();
    AWS_ROUTE53_API ListCidrCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListCidrCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline ListCidrCollectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline ListCidrCollectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token to indicate where the service is to begin
     * enumerating results.</p> <p>If no value is provided, the listing of results
     * starts from the beginning.</p>
     */
    inline ListCidrCollectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline const Aws::Vector<CollectionSummary>& GetCidrCollections() const{ return m_cidrCollections; }

    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline void SetCidrCollections(const Aws::Vector<CollectionSummary>& value) { m_cidrCollections = value; }

    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline void SetCidrCollections(Aws::Vector<CollectionSummary>&& value) { m_cidrCollections = std::move(value); }

    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline ListCidrCollectionsResult& WithCidrCollections(const Aws::Vector<CollectionSummary>& value) { SetCidrCollections(value); return *this;}

    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline ListCidrCollectionsResult& WithCidrCollections(Aws::Vector<CollectionSummary>&& value) { SetCidrCollections(std::move(value)); return *this;}

    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline ListCidrCollectionsResult& AddCidrCollections(const CollectionSummary& value) { m_cidrCollections.push_back(value); return *this; }

    /**
     * <p>A complex type with information about the CIDR collection.</p>
     */
    inline ListCidrCollectionsResult& AddCidrCollections(CollectionSummary&& value) { m_cidrCollections.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<CollectionSummary> m_cidrCollections;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
