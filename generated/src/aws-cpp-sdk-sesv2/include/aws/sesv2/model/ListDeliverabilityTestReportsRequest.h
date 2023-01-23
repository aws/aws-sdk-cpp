/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to list all of the predictive inbox placement tests that you've
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReportsRequest">AWS
   * API Reference</a></p>
   */
  class ListDeliverabilityTestReportsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListDeliverabilityTestReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeliverabilityTestReports"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to
     * <code>ListDeliverabilityTestReports</code> to indicate the position in the list
     * of predictive inbox placement tests.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDeliverabilityTestReports</code>. If the number of results is larger
     * than the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 0, and can be no more
     * than 1000.</p>
     */
    inline ListDeliverabilityTestReportsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
