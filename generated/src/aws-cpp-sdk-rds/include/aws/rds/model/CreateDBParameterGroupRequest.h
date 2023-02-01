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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBParameterGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBParameterGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First character must
     * be a letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul>  <p>This value is stored as a lowercase
     * string.</p> 
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the MySQL DB engine, use the following command:</p>
     * <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine mysql</code> </p> 
     * <p>The output contains duplicates.</p>  <p>The following are the valid DB
     * engine values:</p> <ul> <li> <p> <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora)</p> </li> <li> <p> <code>aurora-mysql</code> (for MySQL 5.7-compatible
     * and MySQL 8.0-compatible Aurora)</p> </li> <li> <p>
     * <code>aurora-postgresql</code> </p> </li> <li> <p> <code>mariadb</code> </p>
     * </li> <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code>
     * </p> </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

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
