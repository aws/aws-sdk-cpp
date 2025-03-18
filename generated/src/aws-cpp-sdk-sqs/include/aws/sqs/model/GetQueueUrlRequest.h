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
   * <p>Retrieves the URL of an existing queue based on its name and, optionally, the
   * Amazon Web Services account ID. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueUrlRequest">AWS
   * API Reference</a></p>
   */
  class GetQueueUrlRequest : public SQSRequest
  {
  public:
    AWS_SQS_API GetQueueUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueueUrl"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>(Required) The name of the queue for which you want to fetch the URL. The
     * name can be up to 80 characters long and can include alphanumeric characters,
     * hyphens (-), and underscores (_). Queue URLs and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueName() const { return m_queueName; }
    inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
    template<typename QueueNameT = Aws::String>
    void SetQueueName(QueueNameT&& value) { m_queueNameHasBeenSet = true; m_queueName = std::forward<QueueNameT>(value); }
    template<typename QueueNameT = Aws::String>
    GetQueueUrlRequest& WithQueueName(QueueNameT&& value) { SetQueueName(std::forward<QueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The Amazon Web Services account ID of the account that created the
     * queue. This is only required when you are attempting to access a queue owned by
     * another Amazon Web Services account.</p>
     */
    inline const Aws::String& GetQueueOwnerAWSAccountId() const { return m_queueOwnerAWSAccountId; }
    inline bool QueueOwnerAWSAccountIdHasBeenSet() const { return m_queueOwnerAWSAccountIdHasBeenSet; }
    template<typename QueueOwnerAWSAccountIdT = Aws::String>
    void SetQueueOwnerAWSAccountId(QueueOwnerAWSAccountIdT&& value) { m_queueOwnerAWSAccountIdHasBeenSet = true; m_queueOwnerAWSAccountId = std::forward<QueueOwnerAWSAccountIdT>(value); }
    template<typename QueueOwnerAWSAccountIdT = Aws::String>
    GetQueueUrlRequest& WithQueueOwnerAWSAccountId(QueueOwnerAWSAccountIdT&& value) { SetQueueOwnerAWSAccountId(std::forward<QueueOwnerAWSAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueName;
    bool m_queueNameHasBeenSet = false;

    Aws::String m_queueOwnerAWSAccountId;
    bool m_queueOwnerAWSAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
