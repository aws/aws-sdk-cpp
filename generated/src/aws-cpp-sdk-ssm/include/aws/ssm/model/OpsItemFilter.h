/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItemFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemFilterOperator.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes an OpsItem filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemFilter">AWS
   * API Reference</a></p>
   */
  class OpsItemFilter
  {
  public:
    AWS_SSM_API OpsItemFilter();
    AWS_SSM_API OpsItemFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const OpsItemFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const OpsItemFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(OpsItemFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline OpsItemFilter& WithKey(const OpsItemFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline OpsItemFilter& WithKey(OpsItemFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The filter value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The filter value.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The filter value.</p>
     */
    inline OpsItemFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline OpsItemFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline OpsItemFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter value.</p>
     */
    inline OpsItemFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter value.</p>
     */
    inline OpsItemFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator used by the filter call.</p>
     */
    inline const OpsItemFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator used by the filter call.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator used by the filter call.</p>
     */
    inline void SetOperator(const OpsItemFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator used by the filter call.</p>
     */
    inline void SetOperator(OpsItemFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator used by the filter call.</p>
     */
    inline OpsItemFilter& WithOperator(const OpsItemFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator used by the filter call.</p>
     */
    inline OpsItemFilter& WithOperator(OpsItemFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    OpsItemFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    OpsItemFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
