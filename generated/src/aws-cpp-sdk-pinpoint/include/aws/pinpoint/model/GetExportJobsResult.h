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
    AWS_PINPOINT_API GetExportJobsResult();
    AWS_PINPOINT_API GetExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ExportJobsResponse& GetExportJobsResponse() const{ return m_exportJobsResponse; }

    
    inline void SetExportJobsResponse(const ExportJobsResponse& value) { m_exportJobsResponse = value; }

    
    inline void SetExportJobsResponse(ExportJobsResponse&& value) { m_exportJobsResponse = std::move(value); }

    
    inline GetExportJobsResult& WithExportJobsResponse(const ExportJobsResponse& value) { SetExportJobsResponse(value); return *this;}

    
    inline GetExportJobsResult& WithExportJobsResponse(ExportJobsResponse&& value) { SetExportJobsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExportJobsResponse m_exportJobsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
