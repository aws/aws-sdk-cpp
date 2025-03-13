/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/mediaconvert/model/QueueListBy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/Order.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class ListQueuesRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API ListQueuesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONVERT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline QueueListBy GetListBy() const { return m_listBy; }
    inline bool ListByHasBeenSet() const { return m_listByHasBeenSet; }
    inline void SetListBy(QueueListBy value) { m_listByHasBeenSet = true; m_listBy = value; }
    inline ListQueuesRequest& WithListBy(QueueListBy value) { SetListBy(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Number of queues, up to twenty, that will be returned at one time.
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListQueuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQueuesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you request lists of resources, you can specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline Order GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(Order value) { m_orderHasBeenSet = true; m_order = value; }
    inline ListQueuesRequest& WithOrder(Order value) { SetOrder(value); return *this;}
    ///@}
  private:

    QueueListBy m_listBy{QueueListBy::NOT_SET};
    bool m_listByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Order m_order{Order::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
