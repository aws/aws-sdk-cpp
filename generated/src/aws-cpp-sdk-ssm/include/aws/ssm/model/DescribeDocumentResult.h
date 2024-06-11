/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{
  class DescribeDocumentResult
  {
  public:
    AWS_SSM_API DescribeDocumentResult();
    AWS_SSM_API DescribeDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the SSM document.</p>
     */
    inline const DocumentDescription& GetDocument() const{ return m_document; }
    inline void SetDocument(const DocumentDescription& value) { m_document = value; }
    inline void SetDocument(DocumentDescription&& value) { m_document = std::move(value); }
    inline DescribeDocumentResult& WithDocument(const DocumentDescription& value) { SetDocument(value); return *this;}
    inline DescribeDocumentResult& WithDocument(DocumentDescription&& value) { SetDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentDescription m_document;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
