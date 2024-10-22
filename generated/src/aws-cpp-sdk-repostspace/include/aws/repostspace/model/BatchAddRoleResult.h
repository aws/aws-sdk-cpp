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
  class BatchAddRoleResult
  {
  public:
    AWS_REPOSTSPACE_API BatchAddRoleResult();
    AWS_REPOSTSPACE_API BatchAddRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API BatchAddRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of successfully updated accessor identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddedAccessorIds() const{ return m_addedAccessorIds; }
    inline void SetAddedAccessorIds(const Aws::Vector<Aws::String>& value) { m_addedAccessorIds = value; }
    inline void SetAddedAccessorIds(Aws::Vector<Aws::String>&& value) { m_addedAccessorIds = std::move(value); }
    inline BatchAddRoleResult& WithAddedAccessorIds(const Aws::Vector<Aws::String>& value) { SetAddedAccessorIds(value); return *this;}
    inline BatchAddRoleResult& WithAddedAccessorIds(Aws::Vector<Aws::String>&& value) { SetAddedAccessorIds(std::move(value)); return *this;}
    inline BatchAddRoleResult& AddAddedAccessorIds(const Aws::String& value) { m_addedAccessorIds.push_back(value); return *this; }
    inline BatchAddRoleResult& AddAddedAccessorIds(Aws::String&& value) { m_addedAccessorIds.push_back(std::move(value)); return *this; }
    inline BatchAddRoleResult& AddAddedAccessorIds(const char* value) { m_addedAccessorIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of errors that occurred when roles were added.</p>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchError>&& value) { m_errors = std::move(value); }
    inline BatchAddRoleResult& WithErrors(const Aws::Vector<BatchError>& value) { SetErrors(value); return *this;}
    inline BatchAddRoleResult& WithErrors(Aws::Vector<BatchError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchAddRoleResult& AddErrors(const BatchError& value) { m_errors.push_back(value); return *this; }
    inline BatchAddRoleResult& AddErrors(BatchError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchAddRoleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchAddRoleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchAddRoleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_addedAccessorIds;

    Aws::Vector<BatchError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
