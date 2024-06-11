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
    AWS_SECURITYHUB_API AwsSqsQueueDetails();
    AWS_SECURITYHUB_API AwsSqsQueueDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSqsQueueDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The length of time, in seconds, for which Amazon SQS can reuse a data key to
     * encrypt or decrypt messages before calling KMS again.</p>
     */
    inline int GetKmsDataKeyReusePeriodSeconds() const{ return m_kmsDataKeyReusePeriodSeconds; }
    inline bool KmsDataKeyReusePeriodSecondsHasBeenSet() const { return m_kmsDataKeyReusePeriodSecondsHasBeenSet; }
    inline void SetKmsDataKeyReusePeriodSeconds(int value) { m_kmsDataKeyReusePeriodSecondsHasBeenSet = true; m_kmsDataKeyReusePeriodSeconds = value; }
    inline AwsSqsQueueDetails& WithKmsDataKeyReusePeriodSeconds(int value) { SetKmsDataKeyReusePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SQS or a custom KMS
     * key.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }
    inline AwsSqsQueueDetails& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}
    inline AwsSqsQueueDetails& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}
    inline AwsSqsQueueDetails& WithKmsMasterKeyId(const char* value) { SetKmsMasterKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new queue.</p>
     */
    inline const Aws::String& GetQueueName() const{ return m_queueName; }
    inline bool QueueNameHasBeenSet() const { return m_queueNameHasBeenSet; }
    inline void SetQueueName(const Aws::String& value) { m_queueNameHasBeenSet = true; m_queueName = value; }
    inline void SetQueueName(Aws::String&& value) { m_queueNameHasBeenSet = true; m_queueName = std::move(value); }
    inline void SetQueueName(const char* value) { m_queueNameHasBeenSet = true; m_queueName.assign(value); }
    inline AwsSqsQueueDetails& WithQueueName(const Aws::String& value) { SetQueueName(value); return *this;}
    inline AwsSqsQueueDetails& WithQueueName(Aws::String&& value) { SetQueueName(std::move(value)); return *this;}
    inline AwsSqsQueueDetails& WithQueueName(const char* value) { SetQueueName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dead-letter queue to which Amazon SQS moves messages after the
     * value of <code>maxReceiveCount</code> is exceeded. </p>
     */
    inline const Aws::String& GetDeadLetterTargetArn() const{ return m_deadLetterTargetArn; }
    inline bool DeadLetterTargetArnHasBeenSet() const { return m_deadLetterTargetArnHasBeenSet; }
    inline void SetDeadLetterTargetArn(const Aws::String& value) { m_deadLetterTargetArnHasBeenSet = true; m_deadLetterTargetArn = value; }
    inline void SetDeadLetterTargetArn(Aws::String&& value) { m_deadLetterTargetArnHasBeenSet = true; m_deadLetterTargetArn = std::move(value); }
    inline void SetDeadLetterTargetArn(const char* value) { m_deadLetterTargetArnHasBeenSet = true; m_deadLetterTargetArn.assign(value); }
    inline AwsSqsQueueDetails& WithDeadLetterTargetArn(const Aws::String& value) { SetDeadLetterTargetArn(value); return *this;}
    inline AwsSqsQueueDetails& WithDeadLetterTargetArn(Aws::String&& value) { SetDeadLetterTargetArn(std::move(value)); return *this;}
    inline AwsSqsQueueDetails& WithDeadLetterTargetArn(const char* value) { SetDeadLetterTargetArn(value); return *this;}
    ///@}
  private:

    int m_kmsDataKeyReusePeriodSeconds;
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
