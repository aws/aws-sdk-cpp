/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/RepositorySyncAttempt.h>
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
  class GetRepositorySyncStatusResult
  {
  public:
    AWS_PROTON_API GetRepositorySyncStatusResult() = default;
    AWS_PROTON_API GetRepositorySyncStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetRepositorySyncStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The repository sync status detail data that's returned by Proton.</p>
     */
    inline const RepositorySyncAttempt& GetLatestSync() const { return m_latestSync; }
    template<typename LatestSyncT = RepositorySyncAttempt>
    void SetLatestSync(LatestSyncT&& value) { m_latestSyncHasBeenSet = true; m_latestSync = std::forward<LatestSyncT>(value); }
    template<typename LatestSyncT = RepositorySyncAttempt>
    GetRepositorySyncStatusResult& WithLatestSync(LatestSyncT&& value) { SetLatestSync(std::forward<LatestSyncT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRepositorySyncStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RepositorySyncAttempt m_latestSync;
    bool m_latestSyncHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
