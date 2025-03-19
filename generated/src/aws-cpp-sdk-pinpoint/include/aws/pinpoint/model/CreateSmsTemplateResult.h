/**
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
    AWS_PINPOINT_API CreateSmsTemplateResult() = default;
    AWS_PINPOINT_API CreateSmsTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateSmsTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const CreateTemplateMessageBody& GetCreateTemplateMessageBody() const { return m_createTemplateMessageBody; }
    template<typename CreateTemplateMessageBodyT = CreateTemplateMessageBody>
    void SetCreateTemplateMessageBody(CreateTemplateMessageBodyT&& value) { m_createTemplateMessageBodyHasBeenSet = true; m_createTemplateMessageBody = std::forward<CreateTemplateMessageBodyT>(value); }
    template<typename CreateTemplateMessageBodyT = CreateTemplateMessageBody>
    CreateSmsTemplateResult& WithCreateTemplateMessageBody(CreateTemplateMessageBodyT&& value) { SetCreateTemplateMessageBody(std::forward<CreateTemplateMessageBodyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSmsTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CreateTemplateMessageBody m_createTemplateMessageBody;
    bool m_createTemplateMessageBodyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
