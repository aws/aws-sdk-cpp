/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/SyncBlocker.h>
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
  class UpdateServiceSyncBlockerResult
  {
  public:
    AWS_PROTON_API UpdateServiceSyncBlockerResult();
    AWS_PROTON_API UpdateServiceSyncBlockerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateServiceSyncBlockerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }

    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceName = value; }

    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceName = std::move(value); }

    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceName.assign(value); }

    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}

    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance that you want to update the service sync
     * blocker for.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}


    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceName = value; }

    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceName.assign(value); }

    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that you want to update the service sync blocker
     * for.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The detailed data on the service sync blocker that was updated.</p>
     */
    inline const SyncBlocker& GetServiceSyncBlocker() const{ return m_serviceSyncBlocker; }

    /**
     * <p>The detailed data on the service sync blocker that was updated.</p>
     */
    inline void SetServiceSyncBlocker(const SyncBlocker& value) { m_serviceSyncBlocker = value; }

    /**
     * <p>The detailed data on the service sync blocker that was updated.</p>
     */
    inline void SetServiceSyncBlocker(SyncBlocker&& value) { m_serviceSyncBlocker = std::move(value); }

    /**
     * <p>The detailed data on the service sync blocker that was updated.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceSyncBlocker(const SyncBlocker& value) { SetServiceSyncBlocker(value); return *this;}

    /**
     * <p>The detailed data on the service sync blocker that was updated.</p>
     */
    inline UpdateServiceSyncBlockerResult& WithServiceSyncBlocker(SyncBlocker&& value) { SetServiceSyncBlocker(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateServiceSyncBlockerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateServiceSyncBlockerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateServiceSyncBlockerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_serviceInstanceName;

    Aws::String m_serviceName;

    SyncBlocker m_serviceSyncBlocker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
