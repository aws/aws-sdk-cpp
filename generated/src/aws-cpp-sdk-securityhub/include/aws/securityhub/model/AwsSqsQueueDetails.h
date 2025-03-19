/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Data about a queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSqsQueueDetails">AWS
   * API Reference</a></p>
   */
  class AwsSqsQueueDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSqsQueueDetails() = default;
    AWS_SECURITYHUB_API AwsSqsQueueDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSqsQueueDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The length of time, in seconds, for which Amazon SQS can reuse a data key to
     * encrypt or decrypt messages before calling KMS again.</p>
     */
    inline int GetKmsDataKeyReusePeriodSeconds() const { return m_kmsDataKeyReusePeriodSeconds; }
    inline bool KmsDataKeyReusePeriodSecondsHasBeenSet() const { return m_kmsDataKeyReusePeriodSecondsHasBeenSet; }
    inline void SetKmsDataKeyReusePeriodSeconds(int value) { m_kmsDataKeyReusePeriodSecondsHasBeenSet = true; m_kmsDataKeyReusePeriodSeconds = value; }
    inline AwsSqsQueueDetails& WithKmsDataKeyReusePeriodSeconds(int value) { SetKmsDataKeyReusePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SQS or a custom KMS
     * key.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const { return m_kmsMasterKeyId; }
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }
    template<typename KmsMasterKeyIdT = Aws::String>
    void SetKmsMasterKeyId(KmsMasterKeyIdT&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::forward<KmsMasterKeyIdT>(value); }
    template<typename KmsMasterKeyIdT = Aws::String>
    AwsSqsQueueDetails& WithKmsMasterKeyId(KmsMasterKeyIdT&& value) { SetKmsMasterKeyId(std::forward<KmsMasterKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new queue.</p>
     */
    inline const Aws::String& GetQueueName() const { return m_queueName; }
    inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
    template<typename QueueNameT = Aws::String>
    void SetQueueName(QueueNameT&& value) { m_queueNameHasBeenSet = true; m_queueName = std::forward<QueueNameT>(value); }
    template<typename QueueNameT = Aws::String>
    AwsSqsQueueDetails& WithQueueName(QueueNameT&& value) { SetQueueName(std::forward<QueueNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dead-letter queue to which Amazon SQS moves messages after the
     * value of <code>maxReceiveCount</code> is exceeded. </p>
     */
    inline const Aws::String& GetDeadLetterTargetArn() const { return m_deadLetterTargetArn; }
    inline bool DeadLetterTargetArnHasBeenSet() const { return m_deadLetterTargetArnHasBeenSet; }
    template<typename DeadLetterTargetArnT = Aws::String>
    void SetDeadLetterTargetArn(DeadLetterTargetArnT&& value) { m_deadLetterTargetArnHasBeenSet = true; m_deadLetterTargetArn = std::forward<DeadLetterTargetArnT>(value); }
    template<typename DeadLetterTargetArnT = Aws::String>
    AwsSqsQueueDetails& WithDeadLetterTargetArn(DeadLetterTargetArnT&& value) { SetDeadLetterTargetArn(std::forward<DeadLetterTargetArnT>(value)); return *this;}
    ///@}
  private:

    int m_kmsDataKeyReusePeriodSeconds{0};
    bool m_kmsDataKeyReusePeriodSecondsHasBeenSet = false;

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet = false;

    Aws::String m_queueName;
    bool m_queueNameHasBeenSet = false;

    Aws::String m_deadLetterTargetArn;
    bool m_deadLetterTargetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
