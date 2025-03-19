/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBRecommendation.h>
#include <aws/rds/model/ResponseMetadata.h>
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
  class ModifyDBRecommendationResult
  {
  public:
    AWS_RDS_API ModifyDBRecommendationResult() = default;
    AWS_RDS_API ModifyDBRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyDBRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBRecommendation& GetDBRecommendation() const { return m_dBRecommendation; }
    template<typename DBRecommendationT = DBRecommendation>
    void SetDBRecommendation(DBRecommendationT&& value) { m_dBRecommendationHasBeenSet = true; m_dBRecommendation = std::forward<DBRecommendationT>(value); }
    template<typename DBRecommendationT = DBRecommendation>
    ModifyDBRecommendationResult& WithDBRecommendation(DBRecommendationT&& value) { SetDBRecommendation(std::forward<DBRecommendationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyDBRecommendationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBRecommendation m_dBRecommendation;
    bool m_dBRecommendationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
