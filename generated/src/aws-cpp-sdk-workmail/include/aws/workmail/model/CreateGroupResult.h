﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateGroupResult
  {
  public:
    AWS_WORKMAIL_API CreateGroupResult();
    AWS_WORKMAIL_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }
    inline CreateGroupResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline CreateGroupResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline CreateGroupResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
