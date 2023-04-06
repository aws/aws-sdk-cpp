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
  class CreateServiceSyncConfigResult
  {
  public:
    AWS_PROTON_API CreateServiceSyncConfigResult();
    AWS_PROTON_API CreateServiceSyncConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CreateServiceSyncConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the Proton Ops file.</p>
     */
    inline const ServiceSyncConfig& GetServiceSyncConfig() const{ return m_serviceSyncConfig; }

    /**
     * <p>The detailed data of the Proton Ops file.</p>
     */
    inline void SetServiceSyncConfig(const ServiceSyncConfig& value) { m_serviceSyncConfig = value; }

    /**
     * <p>The detailed data of the Proton Ops file.</p>
     */
    inline void SetServiceSyncConfig(ServiceSyncConfig&& value) { m_serviceSyncConfig = std::move(value); }

    /**
     * <p>The detailed data of the Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigResult& WithServiceSyncConfig(const ServiceSyncConfig& value) { SetServiceSyncConfig(value); return *this;}

    /**
     * <p>The detailed data of the Proton Ops file.</p>
     */
    inline CreateServiceSyncConfigResult& WithServiceSyncConfig(ServiceSyncConfig&& value) { SetServiceSyncConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateServiceSyncConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateServiceSyncConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateServiceSyncConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceSyncConfig m_serviceSyncConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
