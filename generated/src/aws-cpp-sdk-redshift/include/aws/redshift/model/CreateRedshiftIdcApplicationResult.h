/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/RedshiftIdcApplication.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  class CreateRedshiftIdcApplicationResult
  {
  public:
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationResult();
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const RedshiftIdcApplication& GetRedshiftIdcApplication() const{ return m_redshiftIdcApplication; }

    
    inline void SetRedshiftIdcApplication(const RedshiftIdcApplication& value) { m_redshiftIdcApplication = value; }

    
    inline void SetRedshiftIdcApplication(RedshiftIdcApplication&& value) { m_redshiftIdcApplication = std::move(value); }

    
    inline CreateRedshiftIdcApplicationResult& WithRedshiftIdcApplication(const RedshiftIdcApplication& value) { SetRedshiftIdcApplication(value); return *this;}

    
    inline CreateRedshiftIdcApplicationResult& WithRedshiftIdcApplication(RedshiftIdcApplication&& value) { SetRedshiftIdcApplication(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateRedshiftIdcApplicationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateRedshiftIdcApplicationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    RedshiftIdcApplication m_redshiftIdcApplication;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
