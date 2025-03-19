/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServiceSyncConfig.h>
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
  class UpdateServiceSyncConfigResult
  {
  public:
    AWS_PROTON_API UpdateServiceSyncConfigResult() = default;
    AWS_PROTON_API UpdateServiceSyncConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateServiceSyncConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detailed data of the Proton Ops file.</p>
     */
    inline const ServiceSyncConfig& GetServiceSyncConfig() const { return m_serviceSyncConfig; }
    template<typename ServiceSyncConfigT = ServiceSyncConfig>
    void SetServiceSyncConfig(ServiceSyncConfigT&& value) { m_serviceSyncConfigHasBeenSet = true; m_serviceSyncConfig = std::forward<ServiceSyncConfigT>(value); }
    template<typename ServiceSyncConfigT = ServiceSyncConfig>
    UpdateServiceSyncConfigResult& WithServiceSyncConfig(ServiceSyncConfigT&& value) { SetServiceSyncConfig(std::forward<ServiceSyncConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateServiceSyncConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceSyncConfig m_serviceSyncConfig;
    bool m_serviceSyncConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
