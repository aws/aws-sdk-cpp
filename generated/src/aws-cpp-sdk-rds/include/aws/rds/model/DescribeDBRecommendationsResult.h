/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBRecommendation.h>
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
namespace RDS
{
namespace Model
{
  class DescribeDBRecommendationsResult
  {
  public:
    AWS_RDS_API DescribeDBRecommendationsResult();
    AWS_RDS_API DescribeDBRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline const Aws::Vector<DBRecommendation>& GetDBRecommendations() const{ return m_dBRecommendations; }

    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline void SetDBRecommendations(const Aws::Vector<DBRecommendation>& value) { m_dBRecommendations = value; }

    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline void SetDBRecommendations(Aws::Vector<DBRecommendation>&& value) { m_dBRecommendations = std::move(value); }

    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline DescribeDBRecommendationsResult& WithDBRecommendations(const Aws::Vector<DBRecommendation>& value) { SetDBRecommendations(value); return *this;}

    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline DescribeDBRecommendationsResult& WithDBRecommendations(Aws::Vector<DBRecommendation>&& value) { SetDBRecommendations(std::move(value)); return *this;}

    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline DescribeDBRecommendationsResult& AddDBRecommendations(const DBRecommendation& value) { m_dBRecommendations.push_back(value); return *this; }

    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline DescribeDBRecommendationsResult& AddDBRecommendations(DBRecommendation&& value) { m_dBRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline DescribeDBRecommendationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline DescribeDBRecommendationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline DescribeDBRecommendationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBRecommendationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBRecommendationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DBRecommendation> m_dBRecommendations;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
