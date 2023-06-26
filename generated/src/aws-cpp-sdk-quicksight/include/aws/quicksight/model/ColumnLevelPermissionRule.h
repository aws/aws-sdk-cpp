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
    AWS_QUICKSIGHT_API ColumnLevelPermissionRule();
    AWS_QUICKSIGHT_API ColumnLevelPermissionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnLevelPermissionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline ColumnLevelPermissionRule& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline ColumnLevelPermissionRule& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline ColumnLevelPermissionRule& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline ColumnLevelPermissionRule& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) for Amazon QuickSight users or
     * groups.</p>
     */
    inline ColumnLevelPermissionRule& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>An array of column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }

    /**
     * <p>An array of column names.</p>
     */
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }

    /**
     * <p>An array of column names.</p>
     */
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }

    /**
     * <p>An array of column names.</p>
     */
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }

    /**
     * <p>An array of column names.</p>
     */
    inline ColumnLevelPermissionRule& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}

    /**
     * <p>An array of column names.</p>
     */
    inline ColumnLevelPermissionRule& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}

    /**
     * <p>An array of column names.</p>
     */
    inline ColumnLevelPermissionRule& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

    /**
     * <p>An array of column names.</p>
     */
    inline ColumnLevelPermissionRule& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of column names.</p>
     */
    inline ColumnLevelPermissionRule& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
