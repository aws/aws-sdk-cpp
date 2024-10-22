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
    AWS_REPOSTSPACE_API BatchRemoveRoleResult();
    AWS_REPOSTSPACE_API BatchRemoveRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API BatchRemoveRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of errors that occurred when roles were removed.</p>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchError>&& value) { m_errors = std::move(value); }
    inline BatchRemoveRoleResult& WithErrors(const Aws::Vector<BatchError>& value) { SetErrors(value); return *this;}
    inline BatchRemoveRoleResult& WithErrors(Aws::Vector<BatchError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchRemoveRoleResult& AddErrors(const BatchError& value) { m_errors.push_back(value); return *this; }
    inline BatchRemoveRoleResult& AddErrors(BatchError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of successfully updated accessor identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemovedAccessorIds() const{ return m_removedAccessorIds; }
    inline void SetRemovedAccessorIds(const Aws::Vector<Aws::String>& value) { m_removedAccessorIds = value; }
    inline void SetRemovedAccessorIds(Aws::Vector<Aws::String>&& value) { m_removedAccessorIds = std::move(value); }
    inline BatchRemoveRoleResult& WithRemovedAccessorIds(const Aws::Vector<Aws::String>& value) { SetRemovedAccessorIds(value); return *this;}
    inline BatchRemoveRoleResult& WithRemovedAccessorIds(Aws::Vector<Aws::String>&& value) { SetRemovedAccessorIds(std::move(value)); return *this;}
    inline BatchRemoveRoleResult& AddRemovedAccessorIds(const Aws::String& value) { m_removedAccessorIds.push_back(value); return *this; }
    inline BatchRemoveRoleResult& AddRemovedAccessorIds(Aws::String&& value) { m_removedAccessorIds.push_back(std::move(value)); return *this; }
    inline BatchRemoveRoleResult& AddRemovedAccessorIds(const char* value) { m_removedAccessorIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchRemoveRoleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchRemoveRoleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchRemoveRoleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchError> m_errors;

    Aws::Vector<Aws::String> m_removedAccessorIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
