/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>A response element in the <code>ModifyTenantDatabase</code> operation that
   * describes changes that will be applied. Specific changes are identified by
   * subelements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/TenantDatabasePendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class TenantDatabasePendingModifiedValues
  {
  public:
    AWS_RDS_API TenantDatabasePendingModifiedValues();
    AWS_RDS_API TenantDatabasePendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API TenantDatabasePendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The master password for the tenant database.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline TenantDatabasePendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline TenantDatabasePendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The master password for the tenant database.</p>
     */
    inline TenantDatabasePendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The name of the tenant database.</p>
     */
    inline const Aws::String& GetTenantDBName() const{ return m_tenantDBName; }

    /**
     * <p>The name of the tenant database.</p>
     */
    inline bool TenantDBNameHasBeenSet() const { return m_tenantDBNameHasBeenSet; }

    /**
     * <p>The name of the tenant database.</p>
     */
    inline void SetTenantDBName(const Aws::String& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = value; }

    /**
     * <p>The name of the tenant database.</p>
     */
    inline void SetTenantDBName(Aws::String&& value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName = std::move(value); }

    /**
     * <p>The name of the tenant database.</p>
     */
    inline void SetTenantDBName(const char* value) { m_tenantDBNameHasBeenSet = true; m_tenantDBName.assign(value); }

    /**
     * <p>The name of the tenant database.</p>
     */
    inline TenantDatabasePendingModifiedValues& WithTenantDBName(const Aws::String& value) { SetTenantDBName(value); return *this;}

    /**
     * <p>The name of the tenant database.</p>
     */
    inline TenantDatabasePendingModifiedValues& WithTenantDBName(Aws::String&& value) { SetTenantDBName(std::move(value)); return *this;}

    /**
     * <p>The name of the tenant database.</p>
     */
    inline TenantDatabasePendingModifiedValues& WithTenantDBName(const char* value) { SetTenantDBName(value); return *this;}

  private:

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_tenantDBName;
    bool m_tenantDBNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
