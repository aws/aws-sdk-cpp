/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/RegistrationStatus.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class ListDomainsRequest : public SWFRequest
  {
  public:
    AWS_SWF_API ListDomainsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomains"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If <code>NextPageToken</code> is returned there are more results available.
     * The value of <code>NextPageToken</code> is a unique pagination token for each
     * page. Make the call again using the returned token to retrieve the next page.
     * Keep all other arguments unchanged. Each pagination token expires after 24
     * hours. Using an expired pagination token will return a <code>400</code> error:
     * "<code>Specified token has exceeded its maximum lifetime</code>". </p> <p>The
     * configured <code>maximumPageSize</code> determines how many results can be
     * returned in a single call. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListDomainsRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the registration status of the domains to list.</p>
     */
    inline RegistrationStatus GetRegistrationStatus() const { return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(RegistrationStatus value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline ListDomainsRequest& WithRegistrationStatus(RegistrationStatus value) { SetRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. Use
     * <code>nextPageToken</code> to obtain further pages of results. </p>
     */
    inline int GetMaximumPageSize() const { return m_maximumPageSize; }
    inline bool MaximumPageSizeHasBeenSet() const { return m_maximumPageSizeHasBeenSet; }
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }
    inline ListDomainsRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default, the results are returned in ascending alphabetical order by
     * <code>name</code> of the domains.</p>
     */
    inline bool GetReverseOrder() const { return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline ListDomainsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    RegistrationStatus m_registrationStatus{RegistrationStatus::NOT_SET};
    bool m_registrationStatusHasBeenSet = false;

    int m_maximumPageSize{0};
    bool m_maximumPageSizeHasBeenSet = false;

    bool m_reverseOrder{false};
    bool m_reverseOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
