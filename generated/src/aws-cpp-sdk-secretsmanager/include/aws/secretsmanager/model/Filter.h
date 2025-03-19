/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/FilterNameStringType.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>Allows you to add filters when you use the search function in Secrets
   * Manager. For more information, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/manage_search-secret.html">Find
   * secrets in Secrets Manager</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_SECRETSMANAGER_API Filter() = default;
    AWS_SECRETSMANAGER_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The following are keys you can use:</p> <ul> <li> <p> <b>description</b>:
     * Prefix match, not case-sensitive.</p> </li> <li> <p> <b>name</b>: Prefix match,
     * case-sensitive.</p> </li> <li> <p> <b>tag-key</b>: Prefix match,
     * case-sensitive.</p> </li> <li> <p> <b>tag-value</b>: Prefix match,
     * case-sensitive.</p> </li> <li> <p> <b>primary-region</b>: Prefix match,
     * case-sensitive.</p> </li> <li> <p> <b>owning-service</b>: Prefix match,
     * case-sensitive.</p> </li> <li> <p> <b>all</b>: Breaks the filter value string
     * into words and then searches all attributes for matches. Not case-sensitive.</p>
     * </li> </ul>
     */
    inline FilterNameStringType GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(FilterNameStringType value) { m_keyHasBeenSet = true; m_key = value; }
    inline Filter& WithKey(FilterNameStringType value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keyword to filter for.</p> <p>You can prefix your search value with an
     * exclamation mark (<code>!</code>) in order to perform negation filters. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    Filter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    Filter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    FilterNameStringType m_key{FilterNameStringType::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
