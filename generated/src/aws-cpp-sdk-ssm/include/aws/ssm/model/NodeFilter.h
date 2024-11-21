/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/NodeFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/NodeFilterOperatorType.h>
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
   * <p>The filters for the operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/NodeFilter">AWS API
   * Reference</a></p>
   */
  class NodeFilter
  {
  public:
    AWS_SSM_API NodeFilter();
    AWS_SSM_API NodeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NodeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const NodeFilterKey& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const NodeFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(NodeFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline NodeFilter& WithKey(const NodeFilterKey& value) { SetKey(value); return *this;}
    inline NodeFilter& WithKey(NodeFilterKey&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter value supported by the specified key. For example, for the key
     * <code>PlatformType</code>, supported values include <code>Linux</code> and
     * <code>Windows</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline NodeFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline NodeFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline NodeFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline NodeFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline NodeFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of filter operator.</p>
     */
    inline const NodeFilterOperatorType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NodeFilterOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NodeFilterOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NodeFilter& WithType(const NodeFilterOperatorType& value) { SetType(value); return *this;}
    inline NodeFilter& WithType(NodeFilterOperatorType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    NodeFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    NodeFilterOperatorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
