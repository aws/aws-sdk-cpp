/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ParameterMapEntry.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> Name of the parameter from the Review policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/PolicyParameter">AWS
   * API Reference</a></p>
   */
  class PolicyParameter
  {
  public:
    AWS_MTURK_API PolicyParameter() = default;
    AWS_MTURK_API PolicyParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API PolicyParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    PolicyParameter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of values of the Parameter</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    PolicyParameter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    PolicyParameter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline const Aws::Vector<ParameterMapEntry>& GetMapEntries() const { return m_mapEntries; }
    inline bool MapEntriesHasBeenSet() const { return m_mapEntriesHasBeenSet; }
    template<typename MapEntriesT = Aws::Vector<ParameterMapEntry>>
    void SetMapEntries(MapEntriesT&& value) { m_mapEntriesHasBeenSet = true; m_mapEntries = std::forward<MapEntriesT>(value); }
    template<typename MapEntriesT = Aws::Vector<ParameterMapEntry>>
    PolicyParameter& WithMapEntries(MapEntriesT&& value) { SetMapEntries(std::forward<MapEntriesT>(value)); return *this;}
    template<typename MapEntriesT = ParameterMapEntry>
    PolicyParameter& AddMapEntries(MapEntriesT&& value) { m_mapEntriesHasBeenSet = true; m_mapEntries.emplace_back(std::forward<MapEntriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<ParameterMapEntry> m_mapEntries;
    bool m_mapEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
