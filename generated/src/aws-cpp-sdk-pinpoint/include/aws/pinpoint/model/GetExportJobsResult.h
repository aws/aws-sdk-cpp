/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ExportJobsResponse.h>
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
  class GetExportJobsResult
  {
  public:
    AWS_PINPOINT_API GetExportJobsResult() = default;
    AWS_PINPOINT_API GetExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ExportJobsResponse& GetExportJobsResponse() const { return m_exportJobsResponse; }
    template<typename ExportJobsResponseT = ExportJobsResponse>
    void SetExportJobsResponse(ExportJobsResponseT&& value) { m_exportJobsResponseHasBeenSet = true; m_exportJobsResponse = std::forward<ExportJobsResponseT>(value); }
    template<typename ExportJobsResponseT = ExportJobsResponse>
    GetExportJobsResult& WithExportJobsResponse(ExportJobsResponseT&& value) { SetExportJobsResponse(std::forward<ExportJobsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExportJobsResponse m_exportJobsResponse;
    bool m_exportJobsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
