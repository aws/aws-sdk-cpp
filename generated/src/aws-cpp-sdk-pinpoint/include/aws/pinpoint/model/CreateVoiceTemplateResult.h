/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CreateTemplateMessageBody.h>
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
  class CreateVoiceTemplateResult
  {
  public:
    AWS_PINPOINT_API CreateVoiceTemplateResult();
    AWS_PINPOINT_API CreateVoiceTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateVoiceTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CreateTemplateMessageBody& GetCreateTemplateMessageBody() const{ return m_createTemplateMessageBody; }

    
    inline void SetCreateTemplateMessageBody(const CreateTemplateMessageBody& value) { m_createTemplateMessageBody = value; }

    
    inline void SetCreateTemplateMessageBody(CreateTemplateMessageBody&& value) { m_createTemplateMessageBody = std::move(value); }

    
    inline CreateVoiceTemplateResult& WithCreateTemplateMessageBody(const CreateTemplateMessageBody& value) { SetCreateTemplateMessageBody(value); return *this;}

    
    inline CreateVoiceTemplateResult& WithCreateTemplateMessageBody(CreateTemplateMessageBody&& value) { SetCreateTemplateMessageBody(std::move(value)); return *this;}

  private:

    CreateTemplateMessageBody m_createTemplateMessageBody;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
