/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A rule defined to grant access on one or more restricted columns. Each
   * dataset can have multiple rules. To create a restricted column, you add it to
   * one or more rules. Each rule must contain at least one column and at least one
   * user or group. To be able to see a restricted column, a user or group needs to
   * be added to a rule for that column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnLevelPermissionRule">AWS
   * API Reference</a></p>
   */
  class ColumnLevelPermissionRule
  {
  public:
    AWS_QUICKSIGHT_API ColumnLevelPermissionRule() = default;
    AWS_QUICKSIGHT_API ColumnLevelPermissionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnLevelPermissionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) for QuickSight users or groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const { return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    void SetPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals = std::forward<PrincipalsT>(value); }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    ColumnLevelPermissionRule& WithPrincipals(PrincipalsT&& value) { SetPrincipals(std::forward<PrincipalsT>(value)); return *this;}
    template<typename PrincipalsT = Aws::String>
    ColumnLevelPermissionRule& AddPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals.emplace_back(std::forward<PrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    void SetColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::forward<ColumnNamesT>(value); }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    ColumnLevelPermissionRule& WithColumnNames(ColumnNamesT&& value) { SetColumnNames(std::forward<ColumnNamesT>(value)); return *this;}
    template<typename ColumnNamesT = Aws::String>
    ColumnLevelPermissionRule& AddColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames.emplace_back(std::forward<ColumnNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
