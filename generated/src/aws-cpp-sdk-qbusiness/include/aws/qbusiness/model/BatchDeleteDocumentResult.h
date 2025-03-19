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
  class BatchDeleteDocumentResult
  {
  public:
    AWS_QBUSINESS_API BatchDeleteDocumentResult() = default;
    AWS_QBUSINESS_API BatchDeleteDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API BatchDeleteDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of documents that couldn't be removed from the Amazon Q Business
     * index. Each entry contains an error message that indicates why the document
     * couldn't be removed from the index. </p>
     */
    inline const Aws::Vector<FailedDocument>& GetFailedDocuments() const { return m_failedDocuments; }
    template<typename FailedDocumentsT = Aws::Vector<FailedDocument>>
    void SetFailedDocuments(FailedDocumentsT&& value) { m_failedDocumentsHasBeenSet = true; m_failedDocuments = std::forward<FailedDocumentsT>(value); }
    template<typename FailedDocumentsT = Aws::Vector<FailedDocument>>
    BatchDeleteDocumentResult& WithFailedDocuments(FailedDocumentsT&& value) { SetFailedDocuments(std::forward<FailedDocumentsT>(value)); return *this;}
    template<typename FailedDocumentsT = FailedDocument>
    BatchDeleteDocumentResult& AddFailedDocuments(FailedDocumentsT&& value) { m_failedDocumentsHasBeenSet = true; m_failedDocuments.emplace_back(std::forward<FailedDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedDocument> m_failedDocuments;
    bool m_failedDocumentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
