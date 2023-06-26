/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Revision.h>
#include <aws/proton/model/ResourceSyncAttempt.h>
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
  class GetServiceInstanceSyncStatusResult
  {
  public:
    AWS_PROTON_API GetServiceInstanceSyncStatusResult();
    AWS_PROTON_API GetServiceInstanceSyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetServiceInstanceSyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service instance sync desired state that's returned by Proton</p>
     */
    inline const Revision& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The service instance sync desired state that's returned by Proton</p>
     */
    inline void SetDesiredState(const Revision& value) { m_desiredState = value; }

    /**
     * <p>The service instance sync desired state that's returned by Proton</p>
     */
    inline void SetDesiredState(Revision&& value) { m_desiredState = std::move(value); }

    /**
     * <p>The service instance sync desired state that's returned by Proton</p>
     */
    inline GetServiceInstanceSyncStatusResult& WithDesiredState(const Revision& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The service instance sync desired state that's returned by Proton</p>
     */
    inline GetServiceInstanceSyncStatusResult& WithDesiredState(Revision&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The detailed data of the latest successful sync with the service
     * instance.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSuccessfulSync() const{ return m_latestSuccessfulSync; }

    /**
     * <p>The detailed data of the latest successful sync with the service
     * instance.</p>
     */
    inline void SetLatestSuccessfulSync(const ResourceSyncAttempt& value) { m_latestSuccessfulSync = value; }

    /**
     * <p>The detailed data of the latest successful sync with the service
     * instance.</p>
     */
    inline void SetLatestSuccessfulSync(ResourceSyncAttempt&& value) { m_latestSuccessfulSync = std::move(value); }

    /**
     * <p>The detailed data of the latest successful sync with the service
     * instance.</p>
     */
    inline GetServiceInstanceSyncStatusResult& WithLatestSuccessfulSync(const ResourceSyncAttempt& value) { SetLatestSuccessfulSync(value); return *this;}

    /**
     * <p>The detailed data of the latest successful sync with the service
     * instance.</p>
     */
    inline GetServiceInstanceSyncStatusResult& WithLatestSuccessfulSync(ResourceSyncAttempt&& value) { SetLatestSuccessfulSync(std::move(value)); return *this;}


    /**
     * <p>The detailed data of the latest sync with the service instance.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSync() const{ return m_latestSync; }

    /**
     * <p>The detailed data of the latest sync with the service instance.</p>
     */
    inline void SetLatestSync(const ResourceSyncAttempt& value) { m_latestSync = value; }

    /**
     * <p>The detailed data of the latest sync with the service instance.</p>
     */
    inline void SetLatestSync(ResourceSyncAttempt&& value) { m_latestSync = std::move(value); }

    /**
     * <p>The detailed data of the latest sync with the service instance.</p>
     */
    inline GetServiceInstanceSyncStatusResult& WithLatestSync(const ResourceSyncAttempt& value) { SetLatestSync(value); return *this;}

    /**
     * <p>The detailed data of the latest sync with the service instance.</p>
     */
    inline GetServiceInstanceSyncStatusResult& WithLatestSync(ResourceSyncAttempt&& value) { SetLatestSync(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServiceInstanceSyncStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServiceInstanceSyncStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServiceInstanceSyncStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Revision m_desiredState;

    ResourceSyncAttempt m_latestSuccessfulSync;

    ResourceSyncAttempt m_latestSync;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
