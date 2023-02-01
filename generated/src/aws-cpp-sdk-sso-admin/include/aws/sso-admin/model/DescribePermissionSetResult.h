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
  class DescribePermissionSetResult
  {
  public:
    AWS_SSOADMIN_API DescribePermissionSetResult();
    AWS_SSOADMIN_API DescribePermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribePermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the level of access on an AWS account.</p>
     */
    inline const PermissionSet& GetPermissionSet() const{ return m_permissionSet; }

    /**
     * <p>Describes the level of access on an AWS account.</p>
     */
    inline void SetPermissionSet(const PermissionSet& value) { m_permissionSet = value; }

    /**
     * <p>Describes the level of access on an AWS account.</p>
     */
    inline void SetPermissionSet(PermissionSet&& value) { m_permissionSet = std::move(value); }

    /**
     * <p>Describes the level of access on an AWS account.</p>
     */
    inline DescribePermissionSetResult& WithPermissionSet(const PermissionSet& value) { SetPermissionSet(value); return *this;}

    /**
     * <p>Describes the level of access on an AWS account.</p>
     */
    inline DescribePermissionSetResult& WithPermissionSet(PermissionSet&& value) { SetPermissionSet(std::move(value)); return *this;}

  private:

    PermissionSet m_permissionSet;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
