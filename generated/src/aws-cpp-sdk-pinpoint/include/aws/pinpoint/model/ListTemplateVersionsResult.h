/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/TemplateVersionsResponse.h>
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
  class ListTemplateVersionsResult
  {
  public:
    AWS_PINPOINT_API ListTemplateVersionsResult() = default;
    AWS_PINPOINT_API ListTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API ListTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const TemplateVersionsResponse& GetTemplateVersionsResponse() const { return m_templateVersionsResponse; }
    template<typename TemplateVersionsResponseT = TemplateVersionsResponse>
    void SetTemplateVersionsResponse(TemplateVersionsResponseT&& value) { m_templateVersionsResponseHasBeenSet = true; m_templateVersionsResponse = std::forward<TemplateVersionsResponseT>(value); }
    template<typename TemplateVersionsResponseT = TemplateVersionsResponse>
    ListTemplateVersionsResult& WithTemplateVersionsResponse(TemplateVersionsResponseT&& value) { SetTemplateVersionsResponse(std::forward<TemplateVersionsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplateVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TemplateVersionsResponse m_templateVersionsResponse;
    bool m_templateVersionsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
