﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceShareInvitation.h>
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
  class AcceptResourceShareInvitationResult
  {
  public:
    AWS_RAM_API AcceptResourceShareInvitationResult();
    AWS_RAM_API AcceptResourceShareInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API AcceptResourceShareInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about the specified invitation.</p>
     */
    inline const ResourceShareInvitation& GetResourceShareInvitation() const{ return m_resourceShareInvitation; }
    inline void SetResourceShareInvitation(const ResourceShareInvitation& value) { m_resourceShareInvitation = value; }
    inline void SetResourceShareInvitation(ResourceShareInvitation&& value) { m_resourceShareInvitation = std::move(value); }
    inline AcceptResourceShareInvitationResult& WithResourceShareInvitation(const ResourceShareInvitation& value) { SetResourceShareInvitation(value); return *this;}
    inline AcceptResourceShareInvitationResult& WithResourceShareInvitation(ResourceShareInvitation&& value) { SetResourceShareInvitation(std::move(value)); return *this;}
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
    inline AcceptResourceShareInvitationResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline AcceptResourceShareInvitationResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline AcceptResourceShareInvitationResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AcceptResourceShareInvitationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AcceptResourceShareInvitationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AcceptResourceShareInvitationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResourceShareInvitation m_resourceShareInvitation;

    Aws::String m_clientToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
