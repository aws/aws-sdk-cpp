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
    AWS_RAM_API ReplacePermissionAssociationsResult();
    AWS_RAM_API ReplacePermissionAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API ReplacePermissionAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies a data structure that you can use to track the asynchronous tasks
     * that RAM performs to complete this operation. You can use the
     * <a>ListReplacePermissionAssociationsWork</a> operation and pass the
     * <code>id</code> value returned in this structure.</p>
     */
    inline const ReplacePermissionAssociationsWork& GetReplacePermissionAssociationsWork() const{ return m_replacePermissionAssociationsWork; }
    inline void SetReplacePermissionAssociationsWork(const ReplacePermissionAssociationsWork& value) { m_replacePermissionAssociationsWork = value; }
    inline void SetReplacePermissionAssociationsWork(ReplacePermissionAssociationsWork&& value) { m_replacePermissionAssociationsWork = std::move(value); }
    inline ReplacePermissionAssociationsResult& WithReplacePermissionAssociationsWork(const ReplacePermissionAssociationsWork& value) { SetReplacePermissionAssociationsWork(value); return *this;}
    inline ReplacePermissionAssociationsResult& WithReplacePermissionAssociationsWork(ReplacePermissionAssociationsWork&& value) { SetReplacePermissionAssociationsWork(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline ReplacePermissionAssociationsResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ReplacePermissionAssociationsResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ReplacePermissionAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReplacePermissionAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReplacePermissionAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReplacePermissionAssociationsWork m_replacePermissionAssociationsWork;

    Aws::String m_clientToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
