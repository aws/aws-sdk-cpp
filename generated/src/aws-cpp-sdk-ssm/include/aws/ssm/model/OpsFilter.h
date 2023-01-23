/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsFilterOperatorType.h>
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
   * <p>A filter for viewing OpsData summaries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsFilter">AWS API
   * Reference</a></p>
   */
  class OpsFilter
  {
  public:
    AWS_SSM_API OpsFilter();
    AWS_SSM_API OpsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline OpsFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline OpsFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline OpsFilter& WithKey(const char* value) { SetKey(value); return *this;}


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
    inline OpsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline OpsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline OpsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter value.</p>
     */
    inline OpsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter value.</p>
     */
    inline OpsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The type of filter.</p>
     */
    inline const OpsFilterOperatorType& GetType() const{ return m_type; }

    /**
     * <p>The type of filter.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of filter.</p>
     */
    inline void SetType(const OpsFilterOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of filter.</p>
     */
    inline void SetType(OpsFilterOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of filter.</p>
     */
    inline OpsFilter& WithType(const OpsFilterOperatorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of filter.</p>
     */
    inline OpsFilter& WithType(OpsFilterOperatorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    OpsFilterOperatorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
