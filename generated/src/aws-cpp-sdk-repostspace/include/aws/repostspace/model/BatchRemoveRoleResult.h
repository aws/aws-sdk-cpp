/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/BatchError.h>
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
namespace repostspace
{
namespace Model
{
  class BatchRemoveRoleResult
  {
  public:
    AWS_REPOSTSPACE_API BatchRemoveRoleResult() = default;
    AWS_REPOSTSPACE_API BatchRemoveRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API BatchRemoveRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of successfully updated accessor identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemovedAccessorIds() const { return m_removedAccessorIds; }
    template<typename RemovedAccessorIdsT = Aws::Vector<Aws::String>>
    void SetRemovedAccessorIds(RemovedAccessorIdsT&& value) { m_removedAccessorIdsHasBeenSet = true; m_removedAccessorIds = std::forward<RemovedAccessorIdsT>(value); }
    template<typename RemovedAccessorIdsT = Aws::Vector<Aws::String>>
    BatchRemoveRoleResult& WithRemovedAccessorIds(RemovedAccessorIdsT&& value) { SetRemovedAccessorIds(std::forward<RemovedAccessorIdsT>(value)); return *this;}
    template<typename RemovedAccessorIdsT = Aws::String>
    BatchRemoveRoleResult& AddRemovedAccessorIds(RemovedAccessorIdsT&& value) { m_removedAccessorIdsHasBeenSet = true; m_removedAccessorIds.emplace_back(std::forward<RemovedAccessorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of errors that occurred when roles were removed.</p>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchError>>
    BatchRemoveRoleResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchError>
    BatchRemoveRoleResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchRemoveRoleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_removedAccessorIds;
    bool m_removedAccessorIdsHasBeenSet = false;

    Aws::Vector<BatchError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
