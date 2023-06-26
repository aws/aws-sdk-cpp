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
  class CreateDocumentResult
  {
  public:
    AWS_SSM_API CreateDocumentResult();
    AWS_SSM_API CreateDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the SSM document.</p>
     */
    inline const DocumentDescription& GetDocumentDescription() const{ return m_documentDescription; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline void SetDocumentDescription(const DocumentDescription& value) { m_documentDescription = value; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline void SetDocumentDescription(DocumentDescription&& value) { m_documentDescription = std::move(value); }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline CreateDocumentResult& WithDocumentDescription(const DocumentDescription& value) { SetDocumentDescription(value); return *this;}

    /**
     * <p>Information about the SSM document.</p>
     */
    inline CreateDocumentResult& WithDocumentDescription(DocumentDescription&& value) { SetDocumentDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DocumentDescription m_documentDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
