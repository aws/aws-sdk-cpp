/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class ListAppsRequest : public SMSRequest
  {
  public:
    AWS_SMS_API ListAppsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique application IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppIds() const { return m_appIds; }
    inline bool AppIdsHasBeenSet() const { return m_appIdsHasBeenSet; }
    template<typename AppIdsT = Aws::Vector<Aws::String>>
    void SetAppIds(AppIdsT&& value) { m_appIdsHasBeenSet = true; m_appIds = std::forward<AppIdsT>(value); }
    template<typename AppIdsT = Aws::Vector<Aws::String>>
    ListAppsRequest& WithAppIds(AppIdsT&& value) { SetAppIds(std::forward<AppIdsT>(value)); return *this;}
    template<typename AppIdsT = Aws::String>
    ListAppsRequest& AddAppIds(AppIdsT&& value) { m_appIdsHasBeenSet = true; m_appIds.emplace_back(std::forward<AppIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 100. To retrieve the remaining results, make another call with the returned
     * <code>NextToken</code> value. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_appIds;
    bool m_appIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
