/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueuesRequest">AWS
   * API Reference</a></p>
   */
  class ListQueuesRequest : public SQSRequest
  {
  public:
    AWS_SQS_API ListQueuesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetQueueNamePrefix() const { return m_queueNamePrefix; }
    inline bool QueueNamePrefixHasBeenSet() const { return m_queueNamePrefixHasBeenSet; }
    template<typename QueueNamePrefixT = Aws::String>
    void SetQueueNamePrefix(QueueNamePrefixT&& value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix = std::forward<QueueNamePrefixT>(value); }
    template<typename QueueNamePrefixT = Aws::String>
    ListQueuesRequest& WithQueueNamePrefix(QueueNamePrefixT&& value) { SetQueueNamePrefix(std::forward<QueueNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token to request the next set of results.</p>
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
     * <p>Maximum number of results to include in the response. Value range is 1 to
     * 1000. You must set <code>MaxResults</code> to receive a value for
     * <code>NextToken</code> in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListQueuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_queueNamePrefix;
    bool m_queueNamePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
