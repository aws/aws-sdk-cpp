/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ImportJobsResponse.h>
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
  class GetSegmentImportJobsResult
  {
  public:
    AWS_PINPOINT_API GetSegmentImportJobsResult() = default;
    AWS_PINPOINT_API GetSegmentImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSegmentImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ImportJobsResponse& GetImportJobsResponse() const { return m_importJobsResponse; }
    template<typename ImportJobsResponseT = ImportJobsResponse>
    void SetImportJobsResponse(ImportJobsResponseT&& value) { m_importJobsResponseHasBeenSet = true; m_importJobsResponse = std::forward<ImportJobsResponseT>(value); }
    template<typename ImportJobsResponseT = ImportJobsResponse>
    GetSegmentImportJobsResult& WithImportJobsResponse(ImportJobsResponseT&& value) { SetImportJobsResponse(std::forward<ImportJobsResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSegmentImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ImportJobsResponse m_importJobsResponse;
    bool m_importJobsResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
