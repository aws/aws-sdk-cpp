/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class ListPerformanceAnalysisReportsRequest : public PIRequest
  {
  public:
    AWS_PI_API ListPerformanceAnalysisReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPerformanceAnalysisReports"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxResults</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxResults</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxResults</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in the response. If more items exist
     * than the specified <code>MaxResults</code> value, a pagination token is included
     * in the response so that the remaining results can be retrieved. </p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies whether or not to include the list of tags in the response.</p>
     */
    inline bool GetListTags() const{ return m_listTags; }

    /**
     * <p>Specifies whether or not to include the list of tags in the response.</p>
     */
    inline bool ListTagsHasBeenSet() const { return m_listTagsHasBeenSet; }

    /**
     * <p>Specifies whether or not to include the list of tags in the response.</p>
     */
    inline void SetListTags(bool value) { m_listTagsHasBeenSet = true; m_listTags = value; }

    /**
     * <p>Specifies whether or not to include the list of tags in the response.</p>
     */
    inline ListPerformanceAnalysisReportsRequest& WithListTags(bool value) { SetListTags(value); return *this;}

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_listTags;
    bool m_listTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
