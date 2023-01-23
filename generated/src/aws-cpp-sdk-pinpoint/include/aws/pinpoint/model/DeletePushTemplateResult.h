/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageBody.h>
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
  class DeletePushTemplateResult
  {
  public:
    AWS_PINPOINT_API DeletePushTemplateResult();
    AWS_PINPOINT_API DeletePushTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeletePushTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const MessageBody& GetMessageBody() const{ return m_messageBody; }

    
    inline void SetMessageBody(const MessageBody& value) { m_messageBody = value; }

    
    inline void SetMessageBody(MessageBody&& value) { m_messageBody = std::move(value); }

    
    inline DeletePushTemplateResult& WithMessageBody(const MessageBody& value) { SetMessageBody(value); return *this;}

    
    inline DeletePushTemplateResult& WithMessageBody(MessageBody&& value) { SetMessageBody(std::move(value)); return *this;}

  private:

    MessageBody m_messageBody;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
