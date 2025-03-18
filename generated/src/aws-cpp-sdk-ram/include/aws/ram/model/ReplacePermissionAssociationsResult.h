/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ReplacePermissionAssociationsWork.h>
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
namespace RAM
{
namespace Model
{
  class ReplacePermissionAssociationsResult
  {
  public:
    AWS_RAM_API ReplacePermissionAssociationsResult() = default;
    AWS_RAM_API ReplacePermissionAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API ReplacePermissionAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies a data structure that you can use to track the asynchronous tasks
     * that RAM performs to complete this operation. You can use the
     * <a>ListReplacePermissionAssociationsWork</a> operation and pass the
     * <code>id</code> value returned in this structure.</p>
     */
    inline const ReplacePermissionAssociationsWork& GetReplacePermissionAssociationsWork() const { return m_replacePermissionAssociationsWork; }
    template<typename ReplacePermissionAssociationsWorkT = ReplacePermissionAssociationsWork>
    void SetReplacePermissionAssociationsWork(ReplacePermissionAssociationsWorkT&& value) { m_replacePermissionAssociationsWorkHasBeenSet = true; m_replacePermissionAssociationsWork = std::forward<ReplacePermissionAssociationsWorkT>(value); }
    template<typename ReplacePermissionAssociationsWorkT = ReplacePermissionAssociationsWork>
    ReplacePermissionAssociationsResult& WithReplacePermissionAssociationsWork(ReplacePermissionAssociationsWorkT&& value) { SetReplacePermissionAssociationsWork(std::forward<ReplacePermissionAssociationsWorkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ReplacePermissionAssociationsResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReplacePermissionAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplacePermissionAssociationsWork m_replacePermissionAssociationsWork;
    bool m_replacePermissionAssociationsWorkHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
