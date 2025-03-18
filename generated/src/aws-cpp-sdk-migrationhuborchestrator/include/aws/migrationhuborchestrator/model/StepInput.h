/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>A map of key value pairs that is generated when you create a migration
   * workflow. The key value pairs will differ based on your selection of the
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StepInput">AWS
   * API Reference</a></p>
   */
  class StepInput
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API StepInput() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API StepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API StepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the integer.</p>
     */
    inline int GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline StepInput& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String value.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    StepInput& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of string values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListOfStringsValue() const { return m_listOfStringsValue; }
    inline bool ListOfStringsValueHasBeenSet() const { return m_listOfStringsValueHasBeenSet; }
    template<typename ListOfStringsValueT = Aws::Vector<Aws::String>>
    void SetListOfStringsValue(ListOfStringsValueT&& value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue = std::forward<ListOfStringsValueT>(value); }
    template<typename ListOfStringsValueT = Aws::Vector<Aws::String>>
    StepInput& WithListOfStringsValue(ListOfStringsValueT&& value) { SetListOfStringsValue(std::forward<ListOfStringsValueT>(value)); return *this;}
    template<typename ListOfStringsValueT = Aws::String>
    StepInput& AddListOfStringsValue(ListOfStringsValueT&& value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue.emplace_back(std::forward<ListOfStringsValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Map of string values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMapOfStringValue() const { return m_mapOfStringValue; }
    inline bool MapOfStringValueHasBeenSet() const { return m_mapOfStringValueHasBeenSet; }
    template<typename MapOfStringValueT = Aws::Map<Aws::String, Aws::String>>
    void SetMapOfStringValue(MapOfStringValueT&& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue = std::forward<MapOfStringValueT>(value); }
    template<typename MapOfStringValueT = Aws::Map<Aws::String, Aws::String>>
    StepInput& WithMapOfStringValue(MapOfStringValueT&& value) { SetMapOfStringValue(std::forward<MapOfStringValueT>(value)); return *this;}
    template<typename MapOfStringValueKeyT = Aws::String, typename MapOfStringValueValueT = Aws::String>
    StepInput& AddMapOfStringValue(MapOfStringValueKeyT&& key, MapOfStringValueValueT&& value) {
      m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(std::forward<MapOfStringValueKeyT>(key), std::forward<MapOfStringValueValueT>(value)); return *this;
    }
    ///@}
  private:

    int m_integerValue{0};
    bool m_integerValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_listOfStringsValue;
    bool m_listOfStringsValueHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_mapOfStringValue;
    bool m_mapOfStringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
