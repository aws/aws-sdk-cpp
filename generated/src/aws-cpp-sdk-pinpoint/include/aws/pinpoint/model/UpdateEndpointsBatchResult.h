/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/MessageBody.h>
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
  class UpdateEndpointsBatchResult
  {
  public:
    AWS_PINPOINT_API UpdateEndpointsBatchResult();
    AWS_PINPOINT_API UpdateEndpointsBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateEndpointsBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const MessageBody& GetMessageBody() const{ return m_messageBody; }

    
    inline void SetMessageBody(const MessageBody& value) { m_messageBody = value; }

    
    inline void SetMessageBody(MessageBody&& value) { m_messageBody = std::move(value); }

    
    inline UpdateEndpointsBatchResult& WithMessageBody(const MessageBody& value) { SetMessageBody(value); return *this;}

    
    inline UpdateEndpointsBatchResult& WithMessageBody(MessageBody&& value) { SetMessageBody(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEndpointsBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEndpointsBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEndpointsBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    MessageBody m_messageBody;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
