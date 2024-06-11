﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
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
  class RemoveKnowledgeBaseTemplateUriResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriResult();
    AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API RemoveKnowledgeBaseTemplateUriResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RemoveKnowledgeBaseTemplateUriResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RemoveKnowledgeBaseTemplateUriResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RemoveKnowledgeBaseTemplateUriResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
