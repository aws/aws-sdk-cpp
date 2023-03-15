﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CreateTemplateMessageBody.h>
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
namespace Pinpoint
{
namespace Model
{
  class CreateSmsTemplateResult
  {
  public:
    AWS_PINPOINT_API CreateSmsTemplateResult();
    AWS_PINPOINT_API CreateSmsTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateSmsTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CreateTemplateMessageBody& GetCreateTemplateMessageBody() const{ return m_createTemplateMessageBody; }

    
    inline void SetCreateTemplateMessageBody(const CreateTemplateMessageBody& value) { m_createTemplateMessageBody = value; }

    
    inline void SetCreateTemplateMessageBody(CreateTemplateMessageBody&& value) { m_createTemplateMessageBody = std::move(value); }

    
    inline CreateSmsTemplateResult& WithCreateTemplateMessageBody(const CreateTemplateMessageBody& value) { SetCreateTemplateMessageBody(value); return *this;}

    
    inline CreateSmsTemplateResult& WithCreateTemplateMessageBody(CreateTemplateMessageBody&& value) { SetCreateTemplateMessageBody(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSmsTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSmsTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSmsTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CreateTemplateMessageBody m_createTemplateMessageBody;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
