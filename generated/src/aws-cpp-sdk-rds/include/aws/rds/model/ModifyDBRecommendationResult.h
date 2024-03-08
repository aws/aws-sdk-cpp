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
    AWS_RDS_API ModifyDBRecommendationResult();
    AWS_RDS_API ModifyDBRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyDBRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBRecommendation& GetDBRecommendation() const{ return m_dBRecommendation; }

    
    inline void SetDBRecommendation(const DBRecommendation& value) { m_dBRecommendation = value; }

    
    inline void SetDBRecommendation(DBRecommendation&& value) { m_dBRecommendation = std::move(value); }

    
    inline ModifyDBRecommendationResult& WithDBRecommendation(const DBRecommendation& value) { SetDBRecommendation(value); return *this;}

    
    inline ModifyDBRecommendationResult& WithDBRecommendation(DBRecommendation&& value) { SetDBRecommendation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyDBRecommendationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyDBRecommendationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBRecommendation m_dBRecommendation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
