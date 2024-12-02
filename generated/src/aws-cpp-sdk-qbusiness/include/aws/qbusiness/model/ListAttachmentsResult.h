/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/Attachment.h>
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
namespace QBusiness
{
namespace Model
{
  class ListAttachmentsResult
  {
  public:
    AWS_QBUSINESS_API ListAttachmentsResult();
    AWS_QBUSINESS_API ListAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of information on one or more attachments.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const{ return m_attachments; }
    inline void SetAttachments(const Aws::Vector<Attachment>& value) { m_attachments = value; }
    inline void SetAttachments(Aws::Vector<Attachment>&& value) { m_attachments = std::move(value); }
    inline ListAttachmentsResult& WithAttachments(const Aws::Vector<Attachment>& value) { SetAttachments(value); return *this;}
    inline ListAttachmentsResult& WithAttachments(Aws::Vector<Attachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline ListAttachmentsResult& AddAttachments(const Attachment& value) { m_attachments.push_back(value); return *this; }
    inline ListAttachmentsResult& AddAttachments(Attachment&& value) { m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token, which you
     * can use in a later request to list the next set of attachments.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAttachmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAttachmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAttachmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAttachmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAttachmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAttachmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Attachment> m_attachments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
