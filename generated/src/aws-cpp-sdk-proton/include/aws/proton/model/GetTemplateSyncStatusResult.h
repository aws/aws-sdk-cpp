/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Revision.h>
#include <aws/proton/model/ResourceSyncAttempt.h>
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


    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline const Revision& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline void SetDesiredState(const Revision& value) { m_desiredState = value; }

    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline void SetDesiredState(Revision&& value) { m_desiredState = std::move(value); }

    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline GetTemplateSyncStatusResult& WithDesiredState(const Revision& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline GetTemplateSyncStatusResult& WithDesiredState(Revision&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSuccessfulSync() const{ return m_latestSuccessfulSync; }

    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline void SetLatestSuccessfulSync(const ResourceSyncAttempt& value) { m_latestSuccessfulSync = value; }

    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline void SetLatestSuccessfulSync(ResourceSyncAttempt&& value) { m_latestSuccessfulSync = std::move(value); }

    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline GetTemplateSyncStatusResult& WithLatestSuccessfulSync(const ResourceSyncAttempt& value) { SetLatestSuccessfulSync(value); return *this;}

    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline GetTemplateSyncStatusResult& WithLatestSuccessfulSync(ResourceSyncAttempt&& value) { SetLatestSuccessfulSync(std::move(value)); return *this;}


    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSync() const{ return m_latestSync; }

    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline void SetLatestSync(const ResourceSyncAttempt& value) { m_latestSync = value; }

    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline void SetLatestSync(ResourceSyncAttempt&& value) { m_latestSync = std::move(value); }

    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline GetTemplateSyncStatusResult& WithLatestSync(const ResourceSyncAttempt& value) { SetLatestSync(value); return *this;}

    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline GetTemplateSyncStatusResult& WithLatestSync(ResourceSyncAttempt&& value) { SetLatestSync(std::move(value)); return *this;}

  private:

    Revision m_desiredState;

    ResourceSyncAttempt m_latestSuccessfulSync;

    ResourceSyncAttempt m_latestSync;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
