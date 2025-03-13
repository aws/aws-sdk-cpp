/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/PermissionSet.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribePermissionSetResult
  {
  public:
    AWS_SSOADMIN_API DescribePermissionSetResult() = default;
    AWS_SSOADMIN_API DescribePermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribePermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the level of access on an Amazon Web Services account.</p>
     */
    inline const PermissionSet& GetPermissionSet() const { return m_permissionSet; }
    template<typename PermissionSetT = PermissionSet>
    void SetPermissionSet(PermissionSetT&& value) { m_permissionSetHasBeenSet = true; m_permissionSet = std::forward<PermissionSetT>(value); }
    template<typename PermissionSetT = PermissionSet>
    DescribePermissionSetResult& WithPermissionSet(PermissionSetT&& value) { SetPermissionSet(std::forward<PermissionSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePermissionSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PermissionSet m_permissionSet;
    bool m_permissionSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
