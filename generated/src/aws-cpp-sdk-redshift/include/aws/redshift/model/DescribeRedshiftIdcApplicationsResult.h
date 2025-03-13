/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/RedshiftIdcApplication.h>
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
  class DescribeRedshiftIdcApplicationsResult
  {
  public:
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsResult() = default;
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline const Aws::Vector<RedshiftIdcApplication>& GetRedshiftIdcApplications() const { return m_redshiftIdcApplications; }
    template<typename RedshiftIdcApplicationsT = Aws::Vector<RedshiftIdcApplication>>
    void SetRedshiftIdcApplications(RedshiftIdcApplicationsT&& value) { m_redshiftIdcApplicationsHasBeenSet = true; m_redshiftIdcApplications = std::forward<RedshiftIdcApplicationsT>(value); }
    template<typename RedshiftIdcApplicationsT = Aws::Vector<RedshiftIdcApplication>>
    DescribeRedshiftIdcApplicationsResult& WithRedshiftIdcApplications(RedshiftIdcApplicationsT&& value) { SetRedshiftIdcApplications(std::forward<RedshiftIdcApplicationsT>(value)); return *this;}
    template<typename RedshiftIdcApplicationsT = RedshiftIdcApplication>
    DescribeRedshiftIdcApplicationsResult& AddRedshiftIdcApplications(RedshiftIdcApplicationsT&& value) { m_redshiftIdcApplicationsHasBeenSet = true; m_redshiftIdcApplications.emplace_back(std::forward<RedshiftIdcApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeRedshiftIdcApplicationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeRedshiftIdcApplicationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RedshiftIdcApplication> m_redshiftIdcApplications;
    bool m_redshiftIdcApplicationsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
