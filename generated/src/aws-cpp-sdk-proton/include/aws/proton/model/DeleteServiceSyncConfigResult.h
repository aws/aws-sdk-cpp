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
  class DeleteServiceSyncConfigResult
  {
  public:
    AWS_PROTON_API DeleteServiceSyncConfigResult();
    AWS_PROTON_API DeleteServiceSyncConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteServiceSyncConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data for the service sync config.</p>
     */
    inline const ServiceSyncConfig& GetServiceSyncConfig() const{ return m_serviceSyncConfig; }

    /**
     * <p>The detailed data for the service sync config.</p>
     */
    inline void SetServiceSyncConfig(const ServiceSyncConfig& value) { m_serviceSyncConfig = value; }

    /**
     * <p>The detailed data for the service sync config.</p>
     */
    inline void SetServiceSyncConfig(ServiceSyncConfig&& value) { m_serviceSyncConfig = std::move(value); }

    /**
     * <p>The detailed data for the service sync config.</p>
     */
    inline DeleteServiceSyncConfigResult& WithServiceSyncConfig(const ServiceSyncConfig& value) { SetServiceSyncConfig(value); return *this;}

    /**
     * <p>The detailed data for the service sync config.</p>
     */
    inline DeleteServiceSyncConfigResult& WithServiceSyncConfig(ServiceSyncConfig&& value) { SetServiceSyncConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteServiceSyncConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteServiceSyncConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteServiceSyncConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceSyncConfig m_serviceSyncConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
