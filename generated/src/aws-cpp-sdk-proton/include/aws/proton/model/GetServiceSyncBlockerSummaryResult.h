/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceSyncBlockerSummary.h>
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
namespace Proton
{
namespace Model
{
  class GetServiceSyncBlockerSummaryResult
  {
  public:
    AWS_PROTON_API GetServiceSyncBlockerSummaryResult();
    AWS_PROTON_API GetServiceSyncBlockerSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetServiceSyncBlockerSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the requested service sync blocker summary.</p>
     */
    inline const ServiceSyncBlockerSummary& GetServiceSyncBlockerSummary() const{ return m_serviceSyncBlockerSummary; }

    /**
     * <p>The detailed data of the requested service sync blocker summary.</p>
     */
    inline void SetServiceSyncBlockerSummary(const ServiceSyncBlockerSummary& value) { m_serviceSyncBlockerSummary = value; }

    /**
     * <p>The detailed data of the requested service sync blocker summary.</p>
     */
    inline void SetServiceSyncBlockerSummary(ServiceSyncBlockerSummary&& value) { m_serviceSyncBlockerSummary = std::move(value); }

    /**
     * <p>The detailed data of the requested service sync blocker summary.</p>
     */
    inline GetServiceSyncBlockerSummaryResult& WithServiceSyncBlockerSummary(const ServiceSyncBlockerSummary& value) { SetServiceSyncBlockerSummary(value); return *this;}

    /**
     * <p>The detailed data of the requested service sync blocker summary.</p>
     */
    inline GetServiceSyncBlockerSummaryResult& WithServiceSyncBlockerSummary(ServiceSyncBlockerSummary&& value) { SetServiceSyncBlockerSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceSyncBlockerSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceSyncBlockerSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceSyncBlockerSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceSyncBlockerSummary m_serviceSyncBlockerSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
