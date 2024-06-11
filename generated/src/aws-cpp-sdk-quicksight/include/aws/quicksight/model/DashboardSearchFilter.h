﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterOperator.h>
#include <aws/quicksight/model/DashboardFilterAttribute.h>
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
   * <p>A filter that you apply when searching for dashboards. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardSearchFilter">AWS
   * API Reference</a></p>
   */
  class DashboardSearchFilter
  {
  public:
    AWS_QUICKSIGHT_API DashboardSearchFilter();
    AWS_QUICKSIGHT_API DashboardSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StringEquals"</code>. Valid values are
     * <code>"StringEquals"</code> and <code>"StringLike"</code>.</p> <p>If you set the
     * operator value to <code>"StringEquals"</code>, you need to provide an ownership
     * related filter in the <code>"NAME"</code> field and the arn of the user or group
     * whose folders you want to search in the <code>"Value"</code> field. For example,
     * <code>"Name":"DIRECT_QUICKSIGHT_OWNER", "Operator": "StringEquals", "Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>.</p> <p>If you
     * set the value to <code>"StringLike"</code>, you need to provide the name of the
     * folders you are searching for. For example, <code>"Name":"DASHBOARD_NAME",
     * "Operator": "StringLike", "Value": "Test"</code>. The <code>"StringLike"</code>
     * operator only supports the <code>NAME</code> value
     * <code>DASHBOARD_NAME</code>.</p>
     */
    inline const FilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const FilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(FilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline DashboardSearchFilter& WithOperator(const FilterOperator& value) { SetOperator(value); return *this;}
    inline DashboardSearchFilter& WithOperator(FilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the value that you want to use as a filter, for example,
     * <code>"Name": "QUICKSIGHT_OWNER"</code>.</p> <p>Valid values are defined as
     * follows:</p> <ul> <li> <p> <code>QUICKSIGHT_VIEWER_OR_OWNER</code>: Provide an
     * ARN of a user or group, and any dashboards with that ARN listed as one of the
     * dashboards's owners or viewers are returned. Implicit permissions from folders
     * or groups are considered.</p> </li> <li> <p> <code>QUICKSIGHT_OWNER</code>:
     * Provide an ARN of a user or group, and any dashboards with that ARN listed as
     * one of the owners of the dashboards are returned. Implicit permissions from
     * folders or groups are considered.</p> </li> <li> <p>
     * <code>DIRECT_QUICKSIGHT_SOLE_OWNER</code>: Provide an ARN of a user or group,
     * and any dashboards with that ARN listed as the only owner of the dashboard are
     * returned. Implicit permissions from folders or groups are not considered.</p>
     * </li> <li> <p> <code>DIRECT_QUICKSIGHT_OWNER</code>: Provide an ARN of a user or
     * group, and any dashboards with that ARN listed as one of the owners of the
     * dashboards are returned. Implicit permissions from folders or groups are not
     * considered.</p> </li> <li> <p> <code>DIRECT_QUICKSIGHT_VIEWER_OR_OWNER</code>:
     * Provide an ARN of a user or group, and any dashboards with that ARN listed as
     * one of the owners or viewers of the dashboards are returned. Implicit
     * permissions from folders or groups are not considered.</p> </li> <li> <p>
     * <code>DASHBOARD_NAME</code>: Any dashboards whose names have a substring match
     * to this value will be returned.</p> </li> </ul>
     */
    inline const DashboardFilterAttribute& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const DashboardFilterAttribute& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(DashboardFilterAttribute&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline DashboardSearchFilter& WithName(const DashboardFilterAttribute& value) { SetName(value); return *this;}
    inline DashboardSearchFilter& WithName(DashboardFilterAttribute&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the named item, in this case <code>QUICKSIGHT_USER</code>, that
     * you want to use as a filter, for example, <code>"Value":
     * "arn:aws:quicksight:us-east-1:1:user/default/UserName1"</code>. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline DashboardSearchFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline DashboardSearchFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline DashboardSearchFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    FilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    DashboardFilterAttribute m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
