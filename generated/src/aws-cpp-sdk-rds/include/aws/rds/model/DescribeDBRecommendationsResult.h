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
    AWS_RDS_API DescribeDBRecommendationsResult() = default;
    AWS_RDS_API DescribeDBRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of recommendations which is returned from
     * <code>DescribeDBRecommendations</code> API request.</p>
     */
    inline const Aws::Vector<DBRecommendation>& GetDBRecommendations() const { return m_dBRecommendations; }
    template<typename DBRecommendationsT = Aws::Vector<DBRecommendation>>
    void SetDBRecommendations(DBRecommendationsT&& value) { m_dBRecommendationsHasBeenSet = true; m_dBRecommendations = std::forward<DBRecommendationsT>(value); }
    template<typename DBRecommendationsT = Aws::Vector<DBRecommendation>>
    DescribeDBRecommendationsResult& WithDBRecommendations(DBRecommendationsT&& value) { SetDBRecommendations(std::forward<DBRecommendationsT>(value)); return *this;}
    template<typename DBRecommendationsT = DBRecommendation>
    DescribeDBRecommendationsResult& AddDBRecommendations(DBRecommendationsT&& value) { m_dBRecommendationsHasBeenSet = true; m_dBRecommendations.emplace_back(std::forward<DBRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DBRecommendationsMessage</code> request. This token can be used later in a
     * <code>DescribeDBRecomendations</code> request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBRecommendationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBRecommendationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DBRecommendation> m_dBRecommendations;
    bool m_dBRecommendationsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
