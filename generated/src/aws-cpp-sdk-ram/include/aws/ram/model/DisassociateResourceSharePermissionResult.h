﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
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
  class DisassociateResourceSharePermissionResult
  {
  public:
    AWS_RAM_API DisassociateResourceSharePermissionResult();
    AWS_RAM_API DisassociateResourceSharePermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API DisassociateResourceSharePermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }
    inline void SetReturnValue(bool value) { m_returnValue = value; }
    inline DisassociateResourceSharePermissionResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}
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
    inline DisassociateResourceSharePermissionResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DisassociateResourceSharePermissionResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DisassociateResourceSharePermissionResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateResourceSharePermissionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateResourceSharePermissionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateResourceSharePermissionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_returnValue;

    Aws::String m_clientToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
