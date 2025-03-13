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
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationResult() = default;
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateRedshiftIdcApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const RedshiftIdcApplication& GetRedshiftIdcApplication() const { return m_redshiftIdcApplication; }
    template<typename RedshiftIdcApplicationT = RedshiftIdcApplication>
    void SetRedshiftIdcApplication(RedshiftIdcApplicationT&& value) { m_redshiftIdcApplicationHasBeenSet = true; m_redshiftIdcApplication = std::forward<RedshiftIdcApplicationT>(value); }
    template<typename RedshiftIdcApplicationT = RedshiftIdcApplication>
    CreateRedshiftIdcApplicationResult& WithRedshiftIdcApplication(RedshiftIdcApplicationT&& value) { SetRedshiftIdcApplication(std::forward<RedshiftIdcApplicationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateRedshiftIdcApplicationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    RedshiftIdcApplication m_redshiftIdcApplication;
    bool m_redshiftIdcApplicationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
