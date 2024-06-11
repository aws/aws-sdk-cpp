﻿/**
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
  class GetTemplateSyncStatusResult
  {
  public:
    AWS_PROTON_API GetTemplateSyncStatusResult();
    AWS_PROTON_API GetTemplateSyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetTemplateSyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline const Revision& GetDesiredState() const{ return m_desiredState; }
    inline void SetDesiredState(const Revision& value) { m_desiredState = value; }
    inline void SetDesiredState(Revision&& value) { m_desiredState = std::move(value); }
    inline GetTemplateSyncStatusResult& WithDesiredState(const Revision& value) { SetDesiredState(value); return *this;}
    inline GetTemplateSyncStatusResult& WithDesiredState(Revision&& value) { SetDesiredState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSuccessfulSync() const{ return m_latestSuccessfulSync; }
    inline void SetLatestSuccessfulSync(const ResourceSyncAttempt& value) { m_latestSuccessfulSync = value; }
    inline void SetLatestSuccessfulSync(ResourceSyncAttempt&& value) { m_latestSuccessfulSync = std::move(value); }
    inline GetTemplateSyncStatusResult& WithLatestSuccessfulSync(const ResourceSyncAttempt& value) { SetLatestSuccessfulSync(value); return *this;}
    inline GetTemplateSyncStatusResult& WithLatestSuccessfulSync(ResourceSyncAttempt&& value) { SetLatestSuccessfulSync(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSync() const{ return m_latestSync; }
    inline void SetLatestSync(const ResourceSyncAttempt& value) { m_latestSync = value; }
    inline void SetLatestSync(ResourceSyncAttempt&& value) { m_latestSync = std::move(value); }
    inline GetTemplateSyncStatusResult& WithLatestSync(const ResourceSyncAttempt& value) { SetLatestSync(value); return *this;}
    inline GetTemplateSyncStatusResult& WithLatestSync(ResourceSyncAttempt&& value) { SetLatestSync(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTemplateSyncStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTemplateSyncStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTemplateSyncStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Revision m_desiredState;

    ResourceSyncAttempt m_latestSuccessfulSync;

    ResourceSyncAttempt m_latestSync;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
