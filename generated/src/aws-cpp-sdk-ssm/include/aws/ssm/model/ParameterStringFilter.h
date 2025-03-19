/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ParameterStringFilter">AWS
   * API Reference</a></p>
   */
  class ParameterStringFilter
  {
  public:
    AWS_SSM_API ParameterStringFilter() = default;
    AWS_SSM_API ParameterStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ParameterStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p> <p>The <code>ParameterStringFilter</code> object
     * is used by the <a>DescribeParameters</a> and <a>GetParametersByPath</a> API
     * operations. However, not all of the pattern values listed for <code>Key</code>
     * can be used with both operations.</p> <p>For <code>DescribeParameters</code>,
     * all of the listed patterns are valid except <code>Label</code>.</p> <p>For
     * <code>GetParametersByPath</code>, the following patterns listed for
     * <code>Key</code> aren't valid: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> <p>For examples
     * of Amazon Web Services CLI commands demonstrating valid parameter filter
     * constructions, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/parameter-search.html">Searching
     * for Systems Manager parameters</a> in the <i>Amazon Web Services Systems Manager
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ParameterStringFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For all filters used with <a>DescribeParameters</a>, valid options include
     * <code>Equals</code> and <code>BeginsWith</code>. The <code>Name</code> filter
     * additionally supports the <code>Contains</code> option. (Exception: For filters
     * using the key <code>Path</code>, valid options include <code>Recursive</code>
     * and <code>OneLevel</code>.)</p> <p>For filters used with
     * <a>GetParametersByPath</a>, valid options include <code>Equals</code> and
     * <code>BeginsWith</code>. (Exception: For filters using <code>Label</code> as the
     * Key name, the only valid option is <code>Equals</code>.)</p>
     */
    inline const Aws::String& GetOption() const { return m_option; }
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }
    template<typename OptionT = Aws::String>
    void SetOption(OptionT&& value) { m_optionHasBeenSet = true; m_option = std::forward<OptionT>(value); }
    template<typename OptionT = Aws::String>
    ParameterStringFilter& WithOption(OptionT&& value) { SetOption(std::forward<OptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value you want to search for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ParameterStringFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ParameterStringFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_option;
    bool m_optionHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
