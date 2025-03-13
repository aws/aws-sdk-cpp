/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
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
namespace SQS
{
namespace Model
{

  /**
   * <p>Encloses a receipt handle and an identifier for it.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatchRequestEntry">AWS
   * API Reference</a></p>
   */
  class DeleteMessageBatchRequestEntry
  {
  public:
    AWS_SQS_API DeleteMessageBatchRequestEntry() = default;
    AWS_SQS_API DeleteMessageBatchRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API DeleteMessageBatchRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for this particular receipt handle. This is used to
     * communicate the result.</p>  <p>The <code>Id</code>s of a batch request
     * need to be unique within a request.</p> <p>This identifier can have up to 80
     * characters. The following characters are accepted: alphanumeric characters,
     * hyphens(-), and underscores (_).</p> 
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteMessageBatchRequestEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A receipt handle.</p>
     */
    inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
    template<typename ReceiptHandleT = Aws::String>
    void SetReceiptHandle(ReceiptHandleT&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::forward<ReceiptHandleT>(value); }
    template<typename ReceiptHandleT = Aws::String>
    DeleteMessageBatchRequestEntry& WithReceiptHandle(ReceiptHandleT&& value) { SetReceiptHandle(std::forward<ReceiptHandleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
