/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBClusterParameterGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBClusterParameterGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora5.6</code>, <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql9.6</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres12</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL
     * 5.6-compatible Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL
     * 5.7-compatible and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mysql</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
