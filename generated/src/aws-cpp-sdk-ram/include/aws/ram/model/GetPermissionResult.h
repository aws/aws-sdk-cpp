/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceSharePermissionDetail.h>
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
  class GetPermissionResult
  {
  public:
    AWS_RAM_API GetPermissionResult();
    AWS_RAM_API GetPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API GetPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the permission.</p>
     */
    inline const ResourceSharePermissionDetail& GetPermission() const{ return m_permission; }

    /**
     * <p>An object that contains information about the permission.</p>
     */
    inline void SetPermission(const ResourceSharePermissionDetail& value) { m_permission = value; }

    /**
     * <p>An object that contains information about the permission.</p>
     */
    inline void SetPermission(ResourceSharePermissionDetail&& value) { m_permission = std::move(value); }

    /**
     * <p>An object that contains information about the permission.</p>
     */
    inline GetPermissionResult& WithPermission(const ResourceSharePermissionDetail& value) { SetPermission(value); return *this;}

    /**
     * <p>An object that contains information about the permission.</p>
     */
    inline GetPermissionResult& WithPermission(ResourceSharePermissionDetail&& value) { SetPermission(std::move(value)); return *this;}

  private:

    ResourceSharePermissionDetail m_permission;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
