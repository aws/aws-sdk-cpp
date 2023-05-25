/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Defines different defaults to the users or groups based on
   * mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DynamicDefaultValue">AWS
   * API Reference</a></p>
   */
  class DynamicDefaultValue
  {
  public:
    AWS_QUICKSIGHT_API DynamicDefaultValue();
    AWS_QUICKSIGHT_API DynamicDefaultValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DynamicDefaultValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column that contains the username.</p>
     */
    inline const ColumnIdentifier& GetUserNameColumn() const{ return m_userNameColumn; }

    /**
     * <p>The column that contains the username.</p>
     */
    inline bool UserNameColumnHasBeenSet() const { return m_userNameColumnHasBeenSet; }

    /**
     * <p>The column that contains the username.</p>
     */
    inline void SetUserNameColumn(const ColumnIdentifier& value) { m_userNameColumnHasBeenSet = true; m_userNameColumn = value; }

    /**
     * <p>The column that contains the username.</p>
     */
    inline void SetUserNameColumn(ColumnIdentifier&& value) { m_userNameColumnHasBeenSet = true; m_userNameColumn = std::move(value); }

    /**
     * <p>The column that contains the username.</p>
     */
    inline DynamicDefaultValue& WithUserNameColumn(const ColumnIdentifier& value) { SetUserNameColumn(value); return *this;}

    /**
     * <p>The column that contains the username.</p>
     */
    inline DynamicDefaultValue& WithUserNameColumn(ColumnIdentifier&& value) { SetUserNameColumn(std::move(value)); return *this;}


    /**
     * <p>The column that contains the group name.</p>
     */
    inline const ColumnIdentifier& GetGroupNameColumn() const{ return m_groupNameColumn; }

    /**
     * <p>The column that contains the group name.</p>
     */
    inline bool GroupNameColumnHasBeenSet() const { return m_groupNameColumnHasBeenSet; }

    /**
     * <p>The column that contains the group name.</p>
     */
    inline void SetGroupNameColumn(const ColumnIdentifier& value) { m_groupNameColumnHasBeenSet = true; m_groupNameColumn = value; }

    /**
     * <p>The column that contains the group name.</p>
     */
    inline void SetGroupNameColumn(ColumnIdentifier&& value) { m_groupNameColumnHasBeenSet = true; m_groupNameColumn = std::move(value); }

    /**
     * <p>The column that contains the group name.</p>
     */
    inline DynamicDefaultValue& WithGroupNameColumn(const ColumnIdentifier& value) { SetGroupNameColumn(value); return *this;}

    /**
     * <p>The column that contains the group name.</p>
     */
    inline DynamicDefaultValue& WithGroupNameColumn(ColumnIdentifier&& value) { SetGroupNameColumn(std::move(value)); return *this;}


    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline const ColumnIdentifier& GetDefaultValueColumn() const{ return m_defaultValueColumn; }

    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline bool DefaultValueColumnHasBeenSet() const { return m_defaultValueColumnHasBeenSet; }

    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline void SetDefaultValueColumn(const ColumnIdentifier& value) { m_defaultValueColumnHasBeenSet = true; m_defaultValueColumn = value; }

    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline void SetDefaultValueColumn(ColumnIdentifier&& value) { m_defaultValueColumnHasBeenSet = true; m_defaultValueColumn = std::move(value); }

    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline DynamicDefaultValue& WithDefaultValueColumn(const ColumnIdentifier& value) { SetDefaultValueColumn(value); return *this;}

    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline DynamicDefaultValue& WithDefaultValueColumn(ColumnIdentifier&& value) { SetDefaultValueColumn(std::move(value)); return *this;}

  private:

    ColumnIdentifier m_userNameColumn;
    bool m_userNameColumnHasBeenSet = false;

    ColumnIdentifier m_groupNameColumn;
    bool m_groupNameColumnHasBeenSet = false;

    ColumnIdentifier m_defaultValueColumn;
    bool m_defaultValueColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
