/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ComplianceQueryOperatorType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more filters. Use a filter to return a more specific list of
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceStringFilter">AWS
   * API Reference</a></p>
   */
  class ComplianceStringFilter
  {
  public:
    AWS_SSM_API ComplianceStringFilter();
    AWS_SSM_API ComplianceStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline ComplianceStringFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline ComplianceStringFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline ComplianceStringFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for which to search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for which to search.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value for which to search.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for which to search.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for which to search.</p>
     */
    inline ComplianceStringFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for which to search.</p>
     */
    inline ComplianceStringFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for which to search.</p>
     */
    inline ComplianceStringFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for which to search.</p>
     */
    inline ComplianceStringFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for which to search.</p>
     */
    inline ComplianceStringFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, BeginWith, LessThan, or GreaterThan.</p>
     */
    inline const ComplianceQueryOperatorType& GetType() const{ return m_type; }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, BeginWith, LessThan, or GreaterThan.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, BeginWith, LessThan, or GreaterThan.</p>
     */
    inline void SetType(const ComplianceQueryOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, BeginWith, LessThan, or GreaterThan.</p>
     */
    inline void SetType(ComplianceQueryOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, BeginWith, LessThan, or GreaterThan.</p>
     */
    inline ComplianceStringFilter& WithType(const ComplianceQueryOperatorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, BeginWith, LessThan, or GreaterThan.</p>
     */
    inline ComplianceStringFilter& WithType(ComplianceQueryOperatorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ComplianceQueryOperatorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
