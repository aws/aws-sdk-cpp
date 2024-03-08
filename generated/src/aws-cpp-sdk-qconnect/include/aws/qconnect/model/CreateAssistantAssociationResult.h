/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AssistantAssociationData.h>
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
namespace QConnect
{
namespace Model
{
  class CreateAssistantAssociationResult
  {
  public:
    AWS_QCONNECT_API CreateAssistantAssociationResult();
    AWS_QCONNECT_API CreateAssistantAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateAssistantAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assistant association.</p>
     */
    inline const AssistantAssociationData& GetAssistantAssociation() const{ return m_assistantAssociation; }

    /**
     * <p>The assistant association.</p>
     */
    inline void SetAssistantAssociation(const AssistantAssociationData& value) { m_assistantAssociation = value; }

    /**
     * <p>The assistant association.</p>
     */
    inline void SetAssistantAssociation(AssistantAssociationData&& value) { m_assistantAssociation = std::move(value); }

    /**
     * <p>The assistant association.</p>
     */
    inline CreateAssistantAssociationResult& WithAssistantAssociation(const AssistantAssociationData& value) { SetAssistantAssociation(value); return *this;}

    /**
     * <p>The assistant association.</p>
     */
    inline CreateAssistantAssociationResult& WithAssistantAssociation(AssistantAssociationData&& value) { SetAssistantAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssistantAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssistantAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssistantAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AssistantAssociationData m_assistantAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
