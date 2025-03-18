/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>A structure to hold multiple values of an output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/WorkflowStepOutputUnion">AWS
   * API Reference</a></p>
   */
  class WorkflowStepOutputUnion
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutputUnion() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutputUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutputUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The integer value. </p>
     */
    inline int GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline WorkflowStepOutputUnion& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string value.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    WorkflowStepOutputUnion& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of string value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListOfStringValue() const { return m_listOfStringValue; }
    inline bool ListOfStringValueHasBeenSet() const { return m_listOfStringValueHasBeenSet; }
    template<typename ListOfStringValueT = Aws::Vector<Aws::String>>
    void SetListOfStringValue(ListOfStringValueT&& value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue = std::forward<ListOfStringValueT>(value); }
    template<typename ListOfStringValueT = Aws::Vector<Aws::String>>
    WorkflowStepOutputUnion& WithListOfStringValue(ListOfStringValueT&& value) { SetListOfStringValue(std::forward<ListOfStringValueT>(value)); return *this;}
    template<typename ListOfStringValueT = Aws::String>
    WorkflowStepOutputUnion& AddListOfStringValue(ListOfStringValueT&& value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue.emplace_back(std::forward<ListOfStringValueT>(value)); return *this; }
    ///@}
  private:

    int m_integerValue{0};
    bool m_integerValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_listOfStringValue;
    bool m_listOfStringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
