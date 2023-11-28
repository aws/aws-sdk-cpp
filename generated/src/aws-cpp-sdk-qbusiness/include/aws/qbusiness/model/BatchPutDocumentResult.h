/**
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
  class BatchPutDocumentResult
  {
  public:
    AWS_QBUSINESS_API BatchPutDocumentResult();
    AWS_QBUSINESS_API BatchPutDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API BatchPutDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline const Aws::Vector<FailedDocument>& GetFailedDocuments() const{ return m_failedDocuments; }

    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline void SetFailedDocuments(const Aws::Vector<FailedDocument>& value) { m_failedDocuments = value; }

    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline void SetFailedDocuments(Aws::Vector<FailedDocument>&& value) { m_failedDocuments = std::move(value); }

    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline BatchPutDocumentResult& WithFailedDocuments(const Aws::Vector<FailedDocument>& value) { SetFailedDocuments(value); return *this;}

    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline BatchPutDocumentResult& WithFailedDocuments(Aws::Vector<FailedDocument>&& value) { SetFailedDocuments(std::move(value)); return *this;}

    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline BatchPutDocumentResult& AddFailedDocuments(const FailedDocument& value) { m_failedDocuments.push_back(value); return *this; }

    /**
     * <p> A list of documents that were not added to the Amazon Q index because the
     * document failed a validation check. Each document contains an error message that
     * indicates why the document couldn't be added to the index. </p>
     */
    inline BatchPutDocumentResult& AddFailedDocuments(FailedDocument&& value) { m_failedDocuments.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchPutDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchPutDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchPutDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FailedDocument> m_failedDocuments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
