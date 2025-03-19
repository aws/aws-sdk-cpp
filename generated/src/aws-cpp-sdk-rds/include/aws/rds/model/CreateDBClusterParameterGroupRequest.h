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
    AWS_RDS_API CreateDBClusterParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBClusterParameterGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must not match the name of an existing DB cluster parameter group.</p> </li>
     * </ul>  <p>This value is stored as a lowercase string.</p> 
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const { return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    void SetDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::forward<DBClusterParameterGroupNameT>(value); }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { SetDBClusterParameterGroupName(std::forward<DBClusterParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p> <p> <b>Aurora
     * MySQL</b> </p> <p>Example: <code>aurora-mysql5.7</code>,
     * <code>aurora-mysql8.0</code> </p> <p> <b>Aurora PostgreSQL</b> </p> <p>Example:
     * <code>aurora-postgresql14</code> </p> <p> <b>RDS for MySQL</b> </p> <p>Example:
     * <code>mysql8.0</code> </p> <p> <b>RDS for PostgreSQL</b> </p> <p>Example:
     * <code>postgres13</code> </p> <p>To list all of the available parameter group
     * families for a DB engine, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --query "DBEngineVersions[].DBParameterGroupFamily"
     * --engine &lt;engine&gt;</code> </p> <p>For example, to list all of the available
     * parameter group families for the Aurora PostgreSQL DB engine, use the following
     * command:</p> <p> <code>aws rds describe-db-engine-versions --query
     * "DBEngineVersions[].DBParameterGroupFamily" --engine aurora-postgresql</code>
     * </p>  <p>The output contains duplicates.</p>  <p>The following are
     * the valid DB engine values:</p> <ul> <li> <p> <code>aurora-mysql</code> </p>
     * </li> <li> <p> <code>aurora-postgresql</code> </p> </li> <li> <p>
     * <code>mysql</code> </p> </li> <li> <p> <code>postgres</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const { return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    template<typename DBParameterGroupFamilyT = Aws::String>
    void SetDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::forward<DBParameterGroupFamilyT>(value); }
    template<typename DBParameterGroupFamilyT = Aws::String>
    CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(DBParameterGroupFamilyT&& value) { SetDBParameterGroupFamily(std::forward<DBParameterGroupFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDBClusterParameterGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the DB cluster parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDBClusterParameterGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDBClusterParameterGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
