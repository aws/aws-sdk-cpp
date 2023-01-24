/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/FilterOperator.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>A specific result obtained by specifying the name, value, and operator.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_SSMSAP_API Filter();
    AWS_SSMSAP_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter. Filter names are case-sensitive. </p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter values. Filter values are case-sensitive. If you specify multiple
     * values for a filter, the values are joined with an OR, and the request returns
     * all results that match any of the specified values</p>
     */
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The operator for the filter. </p>
     */
    inline const FilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator for the filter. </p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator for the filter. </p>
     */
    inline void SetOperator(const FilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator for the filter. </p>
     */
    inline void SetOperator(FilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator for the filter. </p>
     */
    inline Filter& WithOperator(const FilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator for the filter. </p>
     */
    inline Filter& WithOperator(FilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
