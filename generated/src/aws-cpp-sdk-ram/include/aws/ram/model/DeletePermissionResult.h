/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/PermissionStatus.h>
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
  class DeletePermissionResult
  {
  public:
    AWS_RAM_API DeletePermissionResult();
    AWS_RAM_API DeletePermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API DeletePermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A boolean that indicates whether the delete operations succeeded.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>A boolean that indicates whether the delete operations succeeded.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>A boolean that indicates whether the delete operations succeeded.</p>
     */
    inline DeletePermissionResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}


    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline DeletePermissionResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline DeletePermissionResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline DeletePermissionResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>This operation is performed asynchronously, and this response parameter
     * indicates the current status.</p>
     */
    inline const PermissionStatus& GetPermissionStatus() const{ return m_permissionStatus; }

    /**
     * <p>This operation is performed asynchronously, and this response parameter
     * indicates the current status.</p>
     */
    inline void SetPermissionStatus(const PermissionStatus& value) { m_permissionStatus = value; }

    /**
     * <p>This operation is performed asynchronously, and this response parameter
     * indicates the current status.</p>
     */
    inline void SetPermissionStatus(PermissionStatus&& value) { m_permissionStatus = std::move(value); }

    /**
     * <p>This operation is performed asynchronously, and this response parameter
     * indicates the current status.</p>
     */
    inline DeletePermissionResult& WithPermissionStatus(const PermissionStatus& value) { SetPermissionStatus(value); return *this;}

    /**
     * <p>This operation is performed asynchronously, and this response parameter
     * indicates the current status.</p>
     */
    inline DeletePermissionResult& WithPermissionStatus(PermissionStatus&& value) { SetPermissionStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePermissionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePermissionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePermissionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_returnValue;

    Aws::String m_clientToken;

    PermissionStatus m_permissionStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
