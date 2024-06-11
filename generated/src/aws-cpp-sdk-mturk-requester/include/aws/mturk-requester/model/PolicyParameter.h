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
    AWS_MTURK_API PolicyParameter();
    AWS_MTURK_API PolicyParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API PolicyParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of the parameter from the list of Review Polices. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline PolicyParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline PolicyParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline PolicyParameter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of values of the Parameter</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline PolicyParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline PolicyParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline PolicyParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline PolicyParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline PolicyParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of ParameterMapEntry objects. </p>
     */
    inline const Aws::Vector<ParameterMapEntry>& GetMapEntries() const{ return m_mapEntries; }
    inline bool MapEntriesHasBeenSet() const { return m_mapEntriesHasBeenSet; }
    inline void SetMapEntries(const Aws::Vector<ParameterMapEntry>& value) { m_mapEntriesHasBeenSet = true; m_mapEntries = value; }
    inline void SetMapEntries(Aws::Vector<ParameterMapEntry>&& value) { m_mapEntriesHasBeenSet = true; m_mapEntries = std::move(value); }
    inline PolicyParameter& WithMapEntries(const Aws::Vector<ParameterMapEntry>& value) { SetMapEntries(value); return *this;}
    inline PolicyParameter& WithMapEntries(Aws::Vector<ParameterMapEntry>&& value) { SetMapEntries(std::move(value)); return *this;}
    inline PolicyParameter& AddMapEntries(const ParameterMapEntry& value) { m_mapEntriesHasBeenSet = true; m_mapEntries.push_back(value); return *this; }
    inline PolicyParameter& AddMapEntries(ParameterMapEntry&& value) { m_mapEntriesHasBeenSet = true; m_mapEntries.push_back(std::move(value)); return *this; }
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
