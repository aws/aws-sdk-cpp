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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateOptionGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateOptionGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateOptionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOptionGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline CreateOptionGroupRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline CreateOptionGroupRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the option group to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must be 1 to 255 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>myoptiongroup</code> </p>
     */
    inline CreateOptionGroupRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateOptionGroupRequest& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateOptionGroupRequest& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the engine that this option group should be associated
     * with.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>oracle-se2</code> </p> </li> <li> <p> <code>oracle-se2-cdb</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateOptionGroupRequest& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline CreateOptionGroupRequest& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline CreateOptionGroupRequest& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the major version of the engine that this option group should be
     * associated with.</p>
     */
    inline CreateOptionGroupRequest& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}


    /**
     * <p>The description of the option group.</p>
     */
    inline const Aws::String& GetOptionGroupDescription() const{ return m_optionGroupDescription; }

    /**
     * <p>The description of the option group.</p>
     */
    inline bool OptionGroupDescriptionHasBeenSet() const { return m_optionGroupDescriptionHasBeenSet; }

    /**
     * <p>The description of the option group.</p>
     */
    inline void SetOptionGroupDescription(const Aws::String& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = value; }

    /**
     * <p>The description of the option group.</p>
     */
    inline void SetOptionGroupDescription(Aws::String&& value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription = std::move(value); }

    /**
     * <p>The description of the option group.</p>
     */
    inline void SetOptionGroupDescription(const char* value) { m_optionGroupDescriptionHasBeenSet = true; m_optionGroupDescription.assign(value); }

    /**
     * <p>The description of the option group.</p>
     */
    inline CreateOptionGroupRequest& WithOptionGroupDescription(const Aws::String& value) { SetOptionGroupDescription(value); return *this;}

    /**
     * <p>The description of the option group.</p>
     */
    inline CreateOptionGroupRequest& WithOptionGroupDescription(Aws::String&& value) { SetOptionGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the option group.</p>
     */
    inline CreateOptionGroupRequest& WithOptionGroupDescription(const char* value) { SetOptionGroupDescription(value); return *this;}


    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline CreateOptionGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline CreateOptionGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline CreateOptionGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the option group.</p>
     */
    inline CreateOptionGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::String m_optionGroupDescription;
    bool m_optionGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
