/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeRedshiftIdcApplicationsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeRedshiftIdcApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRedshiftIdcApplications"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationArn() const{ return m_redshiftIdcApplicationArn; }

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline void SetRedshiftIdcApplicationArn(const Aws::String& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = value; }

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline void SetRedshiftIdcApplicationArn(Aws::String&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::move(value); }

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline void SetRedshiftIdcApplicationArn(const char* value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn.assign(value); }

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithRedshiftIdcApplicationArn(const Aws::String& value) { SetRedshiftIdcApplicationArn(value); return *this;}

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithRedshiftIdcApplicationArn(Aws::String&& value) { SetRedshiftIdcApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Redshift application that integrates with IAM Identity
     * Center.</p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithRedshiftIdcApplicationArn(const char* value) { SetRedshiftIdcApplicationArn(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


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
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline DescribeRedshiftIdcApplicationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
