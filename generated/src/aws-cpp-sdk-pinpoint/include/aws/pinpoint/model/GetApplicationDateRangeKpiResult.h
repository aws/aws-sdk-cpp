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
    AWS_PINPOINT_API GetApplicationDateRangeKpiResult();
    AWS_PINPOINT_API GetApplicationDateRangeKpiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetApplicationDateRangeKpiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationDateRangeKpiResponse& GetApplicationDateRangeKpiResponse() const{ return m_applicationDateRangeKpiResponse; }

    
    inline void SetApplicationDateRangeKpiResponse(const ApplicationDateRangeKpiResponse& value) { m_applicationDateRangeKpiResponse = value; }

    
    inline void SetApplicationDateRangeKpiResponse(ApplicationDateRangeKpiResponse&& value) { m_applicationDateRangeKpiResponse = std::move(value); }

    
    inline GetApplicationDateRangeKpiResult& WithApplicationDateRangeKpiResponse(const ApplicationDateRangeKpiResponse& value) { SetApplicationDateRangeKpiResponse(value); return *this;}

    
    inline GetApplicationDateRangeKpiResult& WithApplicationDateRangeKpiResponse(ApplicationDateRangeKpiResponse&& value) { SetApplicationDateRangeKpiResponse(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApplicationDateRangeKpiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApplicationDateRangeKpiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApplicationDateRangeKpiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ApplicationDateRangeKpiResponse m_applicationDateRangeKpiResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
