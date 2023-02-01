/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
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
   * <p>A request to obtain a list of email destinations that are on the suppression
   * list for your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinationsRequest">AWS
   * API Reference</a></p>
   */
  class ListSuppressedDestinationsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListSuppressedDestinationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSuppressedDestinations"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline const Aws::Vector<SuppressionListReason>& GetReasons() const{ return m_reasons; }

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline void SetReasons(const Aws::Vector<SuppressionListReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline void SetReasons(Aws::Vector<SuppressionListReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline ListSuppressedDestinationsRequest& WithReasons(const Aws::Vector<SuppressionListReason>& value) { SetReasons(value); return *this;}

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline ListSuppressedDestinationsRequest& WithReasons(Aws::Vector<SuppressionListReason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline ListSuppressedDestinationsRequest& AddReasons(const SuppressionListReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p>The factors that caused the email address to be added to .</p>
     */
    inline ListSuppressedDestinationsRequest& AddReasons(SuppressionListReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }


    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list after a specific date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list after a specific date.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list after a specific date.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list after a specific date.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list after a specific date.</p>
     */
    inline ListSuppressedDestinationsRequest& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list after a specific date.</p>
     */
    inline ListSuppressedDestinationsRequest& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list before a specific date.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list before a specific date.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list before a specific date.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list before a specific date.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list before a specific date.</p>
     */
    inline ListSuppressedDestinationsRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>Used to filter the list of suppressed email destinations so that it only
     * includes addresses that were added to the list before a specific date.</p>
     */
    inline ListSuppressedDestinationsRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline ListSuppressedDestinationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline ListSuppressedDestinationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to
     * <code>ListSuppressedDestinations</code> to indicate the position in the list of
     * suppressed email addresses.</p>
     */
    inline ListSuppressedDestinationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>ListSuppressedDestinations</code>. If the number of results is larger than
     * the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListSuppressedDestinations</code>. If the number of results is larger than
     * the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListSuppressedDestinations</code>. If the number of results is larger than
     * the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListSuppressedDestinations</code>. If the number of results is larger than
     * the number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline ListSuppressedDestinationsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::Vector<SuppressionListReason> m_reasons;
    bool m_reasonsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
