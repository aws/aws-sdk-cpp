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
    AWS_PINPOINT_API GetSegmentImportJobsResult();
    AWS_PINPOINT_API GetSegmentImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSegmentImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ImportJobsResponse& GetImportJobsResponse() const{ return m_importJobsResponse; }

    
    inline void SetImportJobsResponse(const ImportJobsResponse& value) { m_importJobsResponse = value; }

    
    inline void SetImportJobsResponse(ImportJobsResponse&& value) { m_importJobsResponse = std::move(value); }

    
    inline GetSegmentImportJobsResult& WithImportJobsResponse(const ImportJobsResponse& value) { SetImportJobsResponse(value); return *this;}

    
    inline GetSegmentImportJobsResult& WithImportJobsResponse(ImportJobsResponse&& value) { SetImportJobsResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSegmentImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSegmentImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSegmentImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ImportJobsResponse m_importJobsResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
