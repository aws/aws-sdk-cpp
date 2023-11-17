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
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsResult();
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline const Aws::Vector<RedshiftIdcApplication>& GetRedshiftIdcApplications() const{ return m_redshiftIdcApplications; }

    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline void SetRedshiftIdcApplications(const Aws::Vector<RedshiftIdcApplication>& value) { m_redshiftIdcApplications = value; }

    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline void SetRedshiftIdcApplications(Aws::Vector<RedshiftIdcApplication>&& value) { m_redshiftIdcApplications = std::move(value); }

    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline DescribeRedshiftIdcApplicationsResult& WithRedshiftIdcApplications(const Aws::Vector<RedshiftIdcApplication>& value) { SetRedshiftIdcApplications(value); return *this;}

    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline DescribeRedshiftIdcApplicationsResult& WithRedshiftIdcApplications(Aws::Vector<RedshiftIdcApplication>&& value) { SetRedshiftIdcApplications(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline DescribeRedshiftIdcApplicationsResult& AddRedshiftIdcApplications(const RedshiftIdcApplication& value) { m_redshiftIdcApplications.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Redshift IAM Identity Center applications.</p>
     */
    inline DescribeRedshiftIdcApplicationsResult& AddRedshiftIdcApplications(RedshiftIdcApplication&& value) { m_redshiftIdcApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline DescribeRedshiftIdcApplicationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline DescribeRedshiftIdcApplicationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline DescribeRedshiftIdcApplicationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeRedshiftIdcApplicationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeRedshiftIdcApplicationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<RedshiftIdcApplication> m_redshiftIdcApplications;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
