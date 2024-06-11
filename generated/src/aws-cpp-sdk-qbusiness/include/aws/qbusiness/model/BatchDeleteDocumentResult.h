﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/FailedDocument.h>
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
  class BatchDeleteDocumentResult
  {
  public:
    AWS_QBUSINESS_API BatchDeleteDocumentResult();
    AWS_QBUSINESS_API BatchDeleteDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API BatchDeleteDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of documents that couldn't be removed from the Amazon Q Business
     * index. Each entry contains an error message that indicates why the document
     * couldn't be removed from the index. </p>
     */
    inline const Aws::Vector<FailedDocument>& GetFailedDocuments() const{ return m_failedDocuments; }
    inline void SetFailedDocuments(const Aws::Vector<FailedDocument>& value) { m_failedDocuments = value; }
    inline void SetFailedDocuments(Aws::Vector<FailedDocument>&& value) { m_failedDocuments = std::move(value); }
    inline BatchDeleteDocumentResult& WithFailedDocuments(const Aws::Vector<FailedDocument>& value) { SetFailedDocuments(value); return *this;}
    inline BatchDeleteDocumentResult& WithFailedDocuments(Aws::Vector<FailedDocument>&& value) { SetFailedDocuments(std::move(value)); return *this;}
    inline BatchDeleteDocumentResult& AddFailedDocuments(const FailedDocument& value) { m_failedDocuments.push_back(value); return *this; }
    inline BatchDeleteDocumentResult& AddFailedDocuments(FailedDocument&& value) { m_failedDocuments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedDocument> m_failedDocuments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
