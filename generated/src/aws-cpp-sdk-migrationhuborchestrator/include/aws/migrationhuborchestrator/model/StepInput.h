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
    AWS_MIGRATIONHUBORCHESTRATOR_API StepInput();
    AWS_MIGRATIONHUBORCHESTRATOR_API StepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API StepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the integer.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline StepInput& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String value.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline StepInput& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline StepInput& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline StepInput& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of string values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListOfStringsValue() const{ return m_listOfStringsValue; }
    inline bool ListOfStringsValueHasBeenSet() const { return m_listOfStringsValueHasBeenSet; }
    inline void SetListOfStringsValue(const Aws::Vector<Aws::String>& value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue = value; }
    inline void SetListOfStringsValue(Aws::Vector<Aws::String>&& value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue = std::move(value); }
    inline StepInput& WithListOfStringsValue(const Aws::Vector<Aws::String>& value) { SetListOfStringsValue(value); return *this;}
    inline StepInput& WithListOfStringsValue(Aws::Vector<Aws::String>&& value) { SetListOfStringsValue(std::move(value)); return *this;}
    inline StepInput& AddListOfStringsValue(const Aws::String& value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue.push_back(value); return *this; }
    inline StepInput& AddListOfStringsValue(Aws::String&& value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue.push_back(std::move(value)); return *this; }
    inline StepInput& AddListOfStringsValue(const char* value) { m_listOfStringsValueHasBeenSet = true; m_listOfStringsValue.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Map of string values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMapOfStringValue() const{ return m_mapOfStringValue; }
    inline bool MapOfStringValueHasBeenSet() const { return m_mapOfStringValueHasBeenSet; }
    inline void SetMapOfStringValue(const Aws::Map<Aws::String, Aws::String>& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue = value; }
    inline void SetMapOfStringValue(Aws::Map<Aws::String, Aws::String>&& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue = std::move(value); }
    inline StepInput& WithMapOfStringValue(const Aws::Map<Aws::String, Aws::String>& value) { SetMapOfStringValue(value); return *this;}
    inline StepInput& WithMapOfStringValue(Aws::Map<Aws::String, Aws::String>&& value) { SetMapOfStringValue(std::move(value)); return *this;}
    inline StepInput& AddMapOfStringValue(const Aws::String& key, const Aws::String& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(key, value); return *this; }
    inline StepInput& AddMapOfStringValue(Aws::String&& key, const Aws::String& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(std::move(key), value); return *this; }
    inline StepInput& AddMapOfStringValue(const Aws::String& key, Aws::String&& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(key, std::move(value)); return *this; }
    inline StepInput& AddMapOfStringValue(Aws::String&& key, Aws::String&& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(std::move(key), std::move(value)); return *this; }
    inline StepInput& AddMapOfStringValue(const char* key, Aws::String&& value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(key, std::move(value)); return *this; }
    inline StepInput& AddMapOfStringValue(Aws::String&& key, const char* value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(std::move(key), value); return *this; }
    inline StepInput& AddMapOfStringValue(const char* key, const char* value) { m_mapOfStringValueHasBeenSet = true; m_mapOfStringValue.emplace(key, value); return *this; }
    ///@}
  private:

    int m_integerValue;
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
