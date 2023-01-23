/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents a single security group and its status.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/SecurityGroupMembership">AWS
   * API Reference</a></p>
   */
  class SecurityGroupMembership
  {
  public:
    AWS_MEMORYDB_API SecurityGroupMembership();
    AWS_MEMORYDB_API SecurityGroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API SecurityGroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the security group.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>The identifier of the security group.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the security group.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The identifier of the security group.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>The identifier of the security group.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>The identifier of the security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of the security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the security group.</p>
     */
    inline SecurityGroupMembership& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}


    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline SecurityGroupMembership& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline SecurityGroupMembership& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the security group membership. The status changes whenever a
     * security group is modified, or when the security groups assigned to a cluster
     * are modified.</p>
     */
    inline SecurityGroupMembership& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
