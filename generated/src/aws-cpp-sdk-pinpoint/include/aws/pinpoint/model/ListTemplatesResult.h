/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplatesResponse.h>
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
  class ListTemplatesResult
  {
  public:
    AWS_PINPOINT_API ListTemplatesResult() = default;
    AWS_PINPOINT_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const TemplatesResponse& GetTemplatesResponse() const { return m_templatesResponse; }
    template<typename TemplatesResponseT = TemplatesResponse>
    void SetTemplatesResponse(TemplatesResponseT&& value) { m_templatesResponseHasBeenSet = true; m_templatesResponse = std::forward<TemplatesResponseT>(value); }
    template<typename TemplatesResponseT = TemplatesResponse>
    ListTemplatesResult& WithTemplatesResponse(TemplatesResponseT&& value) { SetTemplatesResponse(std::forward<TemplatesResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TemplatesResponse m_templatesResponse;
    bool m_templatesResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
