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
    AWS_PROTON_API GetServiceSyncBlockerSummaryResult() = default;
    AWS_PROTON_API GetServiceSyncBlockerSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetServiceSyncBlockerSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detailed data of the requested service sync blocker summary.</p>
     */
    inline const ServiceSyncBlockerSummary& GetServiceSyncBlockerSummary() const { return m_serviceSyncBlockerSummary; }
    template<typename ServiceSyncBlockerSummaryT = ServiceSyncBlockerSummary>
    void SetServiceSyncBlockerSummary(ServiceSyncBlockerSummaryT&& value) { m_serviceSyncBlockerSummaryHasBeenSet = true; m_serviceSyncBlockerSummary = std::forward<ServiceSyncBlockerSummaryT>(value); }
    template<typename ServiceSyncBlockerSummaryT = ServiceSyncBlockerSummary>
    GetServiceSyncBlockerSummaryResult& WithServiceSyncBlockerSummary(ServiceSyncBlockerSummaryT&& value) { SetServiceSyncBlockerSummary(std::forward<ServiceSyncBlockerSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceSyncBlockerSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceSyncBlockerSummary m_serviceSyncBlockerSummary;
    bool m_serviceSyncBlockerSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
