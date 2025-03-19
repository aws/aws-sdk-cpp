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
  class GetTemplateSyncStatusResult
  {
  public:
    AWS_PROTON_API GetTemplateSyncStatusResult() = default;
    AWS_PROTON_API GetTemplateSyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetTemplateSyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The template sync desired state that's returned by Proton.</p>
     */
    inline const Revision& GetDesiredState() const { return m_desiredState; }
    template<typename DesiredStateT = Revision>
    void SetDesiredState(DesiredStateT&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::forward<DesiredStateT>(value); }
    template<typename DesiredStateT = Revision>
    GetTemplateSyncStatusResult& WithDesiredState(DesiredStateT&& value) { SetDesiredState(std::forward<DesiredStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the last successful sync that's returned by Proton.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSuccessfulSync() const { return m_latestSuccessfulSync; }
    template<typename LatestSuccessfulSyncT = ResourceSyncAttempt>
    void SetLatestSuccessfulSync(LatestSuccessfulSyncT&& value) { m_latestSuccessfulSyncHasBeenSet = true; m_latestSuccessfulSync = std::forward<LatestSuccessfulSyncT>(value); }
    template<typename LatestSuccessfulSyncT = ResourceSyncAttempt>
    GetTemplateSyncStatusResult& WithLatestSuccessfulSync(LatestSuccessfulSyncT&& value) { SetLatestSuccessfulSync(std::forward<LatestSuccessfulSyncT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the last sync that's returned by Proton.</p>
     */
    inline const ResourceSyncAttempt& GetLatestSync() const { return m_latestSync; }
    template<typename LatestSyncT = ResourceSyncAttempt>
    void SetLatestSync(LatestSyncT&& value) { m_latestSyncHasBeenSet = true; m_latestSync = std::forward<LatestSyncT>(value); }
    template<typename LatestSyncT = ResourceSyncAttempt>
    GetTemplateSyncStatusResult& WithLatestSync(LatestSyncT&& value) { SetLatestSync(std::forward<LatestSyncT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTemplateSyncStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Revision m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    ResourceSyncAttempt m_latestSuccessfulSync;
    bool m_latestSuccessfulSyncHasBeenSet = false;

    ResourceSyncAttempt m_latestSync;
    bool m_latestSyncHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
