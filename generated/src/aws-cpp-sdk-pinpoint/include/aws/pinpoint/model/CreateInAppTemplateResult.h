/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplateCreateMessageBody.h>
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
  class CreateInAppTemplateResult
  {
  public:
    AWS_PINPOINT_API CreateInAppTemplateResult() = default;
    AWS_PINPOINT_API CreateInAppTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API CreateInAppTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const TemplateCreateMessageBody& GetTemplateCreateMessageBody() const { return m_templateCreateMessageBody; }
    template<typename TemplateCreateMessageBodyT = TemplateCreateMessageBody>
    void SetTemplateCreateMessageBody(TemplateCreateMessageBodyT&& value) { m_templateCreateMessageBodyHasBeenSet = true; m_templateCreateMessageBody = std::forward<TemplateCreateMessageBodyT>(value); }
    template<typename TemplateCreateMessageBodyT = TemplateCreateMessageBody>
    CreateInAppTemplateResult& WithTemplateCreateMessageBody(TemplateCreateMessageBodyT&& value) { SetTemplateCreateMessageBody(std::forward<TemplateCreateMessageBodyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInAppTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TemplateCreateMessageBody m_templateCreateMessageBody;
    bool m_templateCreateMessageBodyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
