/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/PermissionSet.h>
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
  class CreatePermissionSetResult
  {
  public:
    AWS_SSOADMIN_API CreatePermissionSetResult();
    AWS_SSOADMIN_API CreatePermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API CreatePermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline const PermissionSet& GetPermissionSet() const{ return m_permissionSet; }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline void SetPermissionSet(const PermissionSet& value) { m_permissionSet = value; }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline void SetPermissionSet(PermissionSet&& value) { m_permissionSet = std::move(value); }

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline CreatePermissionSetResult& WithPermissionSet(const PermissionSet& value) { SetPermissionSet(value); return *this;}

    /**
     * <p>Defines the level of access on an AWS account.</p>
     */
    inline CreatePermissionSetResult& WithPermissionSet(PermissionSet&& value) { SetPermissionSet(std::move(value)); return *this;}

  private:

    PermissionSet m_permissionSet;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
