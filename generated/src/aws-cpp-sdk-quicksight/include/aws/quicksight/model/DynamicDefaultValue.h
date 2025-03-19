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
    AWS_QUICKSIGHT_API DynamicDefaultValue() = default;
    AWS_QUICKSIGHT_API DynamicDefaultValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DynamicDefaultValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that contains the username.</p>
     */
    inline const ColumnIdentifier& GetUserNameColumn() const { return m_userNameColumn; }
    inline bool UserNameColumnHasBeenSet() const { return m_userNameColumnHasBeenSet; }
    template<typename UserNameColumnT = ColumnIdentifier>
    void SetUserNameColumn(UserNameColumnT&& value) { m_userNameColumnHasBeenSet = true; m_userNameColumn = std::forward<UserNameColumnT>(value); }
    template<typename UserNameColumnT = ColumnIdentifier>
    DynamicDefaultValue& WithUserNameColumn(UserNameColumnT&& value) { SetUserNameColumn(std::forward<UserNameColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that contains the group name.</p>
     */
    inline const ColumnIdentifier& GetGroupNameColumn() const { return m_groupNameColumn; }
    inline bool GroupNameColumnHasBeenSet() const { return m_groupNameColumnHasBeenSet; }
    template<typename GroupNameColumnT = ColumnIdentifier>
    void SetGroupNameColumn(GroupNameColumnT&& value) { m_groupNameColumnHasBeenSet = true; m_groupNameColumn = std::forward<GroupNameColumnT>(value); }
    template<typename GroupNameColumnT = ColumnIdentifier>
    DynamicDefaultValue& WithGroupNameColumn(GroupNameColumnT&& value) { SetGroupNameColumn(std::forward<GroupNameColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that contains the default value of each user or group.</p>
     */
    inline const ColumnIdentifier& GetDefaultValueColumn() const { return m_defaultValueColumn; }
    inline bool DefaultValueColumnHasBeenSet() const { return m_defaultValueColumnHasBeenSet; }
    template<typename DefaultValueColumnT = ColumnIdentifier>
    void SetDefaultValueColumn(DefaultValueColumnT&& value) { m_defaultValueColumnHasBeenSet = true; m_defaultValueColumn = std::forward<DefaultValueColumnT>(value); }
    template<typename DefaultValueColumnT = ColumnIdentifier>
    DynamicDefaultValue& WithDefaultValueColumn(DefaultValueColumnT&& value) { SetDefaultValueColumn(std::forward<DefaultValueColumnT>(value)); return *this;}
    ///@}
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
