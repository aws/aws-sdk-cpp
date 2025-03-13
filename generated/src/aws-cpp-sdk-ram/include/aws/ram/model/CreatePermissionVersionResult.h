/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceSharePermissionDetail.h>
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
  class CreatePermissionVersionResult
  {
  public:
    AWS_RAM_API CreatePermissionVersionResult() = default;
    AWS_RAM_API CreatePermissionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API CreatePermissionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ResourceSharePermissionDetail& GetPermission() const { return m_permission; }
    template<typename PermissionT = ResourceSharePermissionDetail>
    void SetPermission(PermissionT&& value) { m_permissionHasBeenSet = true; m_permission = std::forward<PermissionT>(value); }
    template<typename PermissionT = ResourceSharePermissionDetail>
    CreatePermissionVersionResult& WithPermission(PermissionT&& value) { SetPermission(std::forward<PermissionT>(value)); return *this;}
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
    CreatePermissionVersionResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePermissionVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceSharePermissionDetail m_permission;
    bool m_permissionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
