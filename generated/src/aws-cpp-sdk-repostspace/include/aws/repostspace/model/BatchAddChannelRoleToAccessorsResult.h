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
  class BatchAddChannelRoleToAccessorsResult
  {
  public:
    AWS_REPOSTSPACE_API BatchAddChannelRoleToAccessorsResult() = default;
    AWS_REPOSTSPACE_API BatchAddChannelRoleToAccessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API BatchAddChannelRoleToAccessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of successfully updated identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddedAccessorIds() const { return m_addedAccessorIds; }
    template<typename AddedAccessorIdsT = Aws::Vector<Aws::String>>
    void SetAddedAccessorIds(AddedAccessorIdsT&& value) { m_addedAccessorIdsHasBeenSet = true; m_addedAccessorIds = std::forward<AddedAccessorIdsT>(value); }
    template<typename AddedAccessorIdsT = Aws::Vector<Aws::String>>
    BatchAddChannelRoleToAccessorsResult& WithAddedAccessorIds(AddedAccessorIdsT&& value) { SetAddedAccessorIds(std::forward<AddedAccessorIdsT>(value)); return *this;}
    template<typename AddedAccessorIdsT = Aws::String>
    BatchAddChannelRoleToAccessorsResult& AddAddedAccessorIds(AddedAccessorIdsT&& value) { m_addedAccessorIdsHasBeenSet = true; m_addedAccessorIds.emplace_back(std::forward<AddedAccessorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of errors that occurred when roles were added.</p>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchError>>
    BatchAddChannelRoleToAccessorsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchError>
    BatchAddChannelRoleToAccessorsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAddChannelRoleToAccessorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_addedAccessorIds;
    bool m_addedAccessorIdsHasBeenSet = false;

    Aws::Vector<BatchError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
