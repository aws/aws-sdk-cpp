/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for Publish action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishResponse">AWS
   * API Reference</a></p>
   */
  class PublishResult
  {
  public:
    AWS_SNS_API PublishResult() = default;
    AWS_SNS_API PublishResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API PublishResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Unique identifier assigned to the published message.</p> <p>Length
     * Constraint: Maximum 100 characters</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    PublishResult& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This response element applies only to FIFO (first-in-first-out) topics. </p>
     * <p>The sequence number is a large, non-consecutive number that Amazon SNS
     * assigns to each message. The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for each
     * <code>MessageGroupId</code>.</p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    PublishResult& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PublishResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
