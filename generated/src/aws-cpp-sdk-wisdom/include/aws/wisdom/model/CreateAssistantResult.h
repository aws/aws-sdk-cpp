﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/AssistantData.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class CreateAssistantResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API CreateAssistantResult();
    AWS_CONNECTWISDOMSERVICE_API CreateAssistantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateAssistantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the assistant.</p>
     */
    inline const AssistantData& GetAssistant() const{ return m_assistant; }

    /**
     * <p>Information about the assistant.</p>
     */
    inline void SetAssistant(const AssistantData& value) { m_assistant = value; }

    /**
     * <p>Information about the assistant.</p>
     */
    inline void SetAssistant(AssistantData&& value) { m_assistant = std::move(value); }

    /**
     * <p>Information about the assistant.</p>
     */
    inline CreateAssistantResult& WithAssistant(const AssistantData& value) { SetAssistant(value); return *this;}

    /**
     * <p>Information about the assistant.</p>
     */
    inline CreateAssistantResult& WithAssistant(AssistantData&& value) { SetAssistant(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssistantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssistantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssistantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AssistantData m_assistant;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
