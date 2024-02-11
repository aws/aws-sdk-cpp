/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsItemFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeOpsItemsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeOpsItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOpsItems"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline const Aws::Vector<OpsItemFilter>& GetOpsItemFilters() const{ return m_opsItemFilters; }

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline bool OpsItemFiltersHasBeenSet() const { return m_opsItemFiltersHasBeenSet; }

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline void SetOpsItemFilters(const Aws::Vector<OpsItemFilter>& value) { m_opsItemFiltersHasBeenSet = true; m_opsItemFilters = value; }

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline void SetOpsItemFilters(Aws::Vector<OpsItemFilter>&& value) { m_opsItemFiltersHasBeenSet = true; m_opsItemFilters = std::move(value); }

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline DescribeOpsItemsRequest& WithOpsItemFilters(const Aws::Vector<OpsItemFilter>& value) { SetOpsItemFilters(value); return *this;}

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline DescribeOpsItemsRequest& WithOpsItemFilters(Aws::Vector<OpsItemFilter>&& value) { SetOpsItemFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline DescribeOpsItemsRequest& AddOpsItemFilters(const OpsItemFilter& value) { m_opsItemFiltersHasBeenSet = true; m_opsItemFilters.push_back(value); return *this; }

    /**
     * <p>One or more filters to limit the response.</p> <ul> <li> <p>Key:
     * CreatedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * LastModifiedBy</p> <p>Operations: Contains, Equals</p> </li> <li> <p>Key:
     * LastModifiedTime</p> <p>Operations: GreaterThan, LessThan</p> </li> <li> <p>Key:
     * Priority</p> <p>Operations: Equals</p> </li> <li> <p>Key: Source</p>
     * <p>Operations: Contains, Equals</p> </li> <li> <p>Key: Status</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: Title*</p> <p>Operations: Equals,Contains</p>
     * </li> <li> <p>Key: OperationalData**</p> <p>Operations: Equals</p> </li> <li>
     * <p>Key: OperationalDataKey</p> <p>Operations: Equals</p> </li> <li> <p>Key:
     * OperationalDataValue</p> <p>Operations: Equals, Contains</p> </li> <li> <p>Key:
     * OpsItemId</p> <p>Operations: Equals</p> </li> <li> <p>Key: ResourceId</p>
     * <p>Operations: Contains</p> </li> <li> <p>Key: AutomationId</p> <p>Operations:
     * Equals</p> </li> <li> <p>Key: AccountId</p> <p>Operations: Equals</p> </li>
     * </ul> <p>*The Equals operator for Title matches the first 100 characters. If you
     * specify more than 100 characters, they system returns an error that the filter
     * value exceeds the length limit.</p> <p>**If you filter the response by using the
     * OperationalData operator, specify a key-value pair by using the following JSON
     * format: {"key":"key_name","value":"a_value"}</p>
     */
    inline DescribeOpsItemsRequest& AddOpsItemFilters(OpsItemFilter&& value) { m_opsItemFiltersHasBeenSet = true; m_opsItemFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeOpsItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline DescribeOpsItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline DescribeOpsItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline DescribeOpsItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OpsItemFilter> m_opsItemFilters;
    bool m_opsItemFiltersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
