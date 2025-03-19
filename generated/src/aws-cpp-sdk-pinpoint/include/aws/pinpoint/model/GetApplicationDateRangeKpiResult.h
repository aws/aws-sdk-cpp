/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ApplicationDateRangeKpiResponse.h>
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
  class GetApplicationDateRangeKpiResult
  {
  public:
    AWS_PINPOINT_API GetApplicationDateRangeKpiResult() = default;
    AWS_PINPOINT_API GetApplicationDateRangeKpiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApplicationDateRangeKpiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApplicationDateRangeKpiResponse& GetApplicationDateRangeKpiResponse() const { return m_applicationDateRangeKpiResponse; }
    template<typename ApplicationDateRangeKpiResponseT = ApplicationDateRangeKpiResponse>
    void SetApplicationDateRangeKpiResponse(ApplicationDateRangeKpiResponseT&& value) { m_applicationDateRangeKpiResponseHasBeenSet = true; m_applicationDateRangeKpiResponse = std::forward<ApplicationDateRangeKpiResponseT>(value); }
    template<typename ApplicationDateRangeKpiResponseT = ApplicationDateRangeKpiResponse>
    GetApplicationDateRangeKpiResult& WithApplicationDateRangeKpiResponse(ApplicationDateRangeKpiResponseT&& value) { SetApplicationDateRangeKpiResponse(std::forward<ApplicationDateRangeKpiResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationDateRangeKpiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationDateRangeKpiResponse m_applicationDateRangeKpiResponse;
    bool m_applicationDateRangeKpiResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
