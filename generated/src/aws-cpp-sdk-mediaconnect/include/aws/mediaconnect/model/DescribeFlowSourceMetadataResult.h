/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconnect/model/TransportMediaInfo.h>
#include <aws/mediaconnect/model/MessageDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{
  class DescribeFlowSourceMetadataResult
  {
  public:
    AWS_MEDIACONNECT_API DescribeFlowSourceMetadataResult();
    AWS_MEDIACONNECT_API DescribeFlowSourceMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API DescribeFlowSourceMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline DescribeFlowSourceMetadataResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline DescribeFlowSourceMetadataResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that DescribeFlowSourceMetadata was performed on.
     */
    inline DescribeFlowSourceMetadataResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline const Aws::Vector<MessageDetail>& GetMessages() const{ return m_messages; }

    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline void SetMessages(const Aws::Vector<MessageDetail>& value) { m_messages = value; }

    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline void SetMessages(Aws::Vector<MessageDetail>&& value) { m_messages = std::move(value); }

    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline DescribeFlowSourceMetadataResult& WithMessages(const Aws::Vector<MessageDetail>& value) { SetMessages(value); return *this;}

    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline DescribeFlowSourceMetadataResult& WithMessages(Aws::Vector<MessageDetail>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline DescribeFlowSourceMetadataResult& AddMessages(const MessageDetail& value) { m_messages.push_back(value); return *this; }

    /**
     * Provides a status code and message regarding issues found with the flow source
     * metadata.
     */
    inline DescribeFlowSourceMetadataResult& AddMessages(MessageDetail&& value) { m_messages.push_back(std::move(value)); return *this; }


    /**
     * The timestamp of the most recent change in metadata for this flow’s source.
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * The timestamp of the most recent change in metadata for this flow’s source.
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }

    /**
     * The timestamp of the most recent change in metadata for this flow’s source.
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }

    /**
     * The timestamp of the most recent change in metadata for this flow’s source.
     */
    inline DescribeFlowSourceMetadataResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * The timestamp of the most recent change in metadata for this flow’s source.
     */
    inline DescribeFlowSourceMetadataResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    
    inline const TransportMediaInfo& GetTransportMediaInfo() const{ return m_transportMediaInfo; }

    
    inline void SetTransportMediaInfo(const TransportMediaInfo& value) { m_transportMediaInfo = value; }

    
    inline void SetTransportMediaInfo(TransportMediaInfo&& value) { m_transportMediaInfo = std::move(value); }

    
    inline DescribeFlowSourceMetadataResult& WithTransportMediaInfo(const TransportMediaInfo& value) { SetTransportMediaInfo(value); return *this;}

    
    inline DescribeFlowSourceMetadataResult& WithTransportMediaInfo(TransportMediaInfo&& value) { SetTransportMediaInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFlowSourceMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFlowSourceMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFlowSourceMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_flowArn;

    Aws::Vector<MessageDetail> m_messages;

    Aws::Utils::DateTime m_timestamp;

    TransportMediaInfo m_transportMediaInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
