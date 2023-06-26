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
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutputUnion();
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutputUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepOutputUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The integer value. </p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>The integer value. </p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>The integer value. </p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>The integer value. </p>
     */
    inline WorkflowStepOutputUnion& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}


    /**
     * <p>The string value.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The string value.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The string value.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The string value.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The string value.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The string value.</p>
     */
    inline WorkflowStepOutputUnion& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The string value.</p>
     */
    inline WorkflowStepOutputUnion& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The string value.</p>
     */
    inline WorkflowStepOutputUnion& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>The list of string value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetListOfStringValue() const{ return m_listOfStringValue; }

    /**
     * <p>The list of string value.</p>
     */
    inline bool ListOfStringValueHasBeenSet() const { return m_listOfStringValueHasBeenSet; }

    /**
     * <p>The list of string value.</p>
     */
    inline void SetListOfStringValue(const Aws::Vector<Aws::String>& value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue = value; }

    /**
     * <p>The list of string value.</p>
     */
    inline void SetListOfStringValue(Aws::Vector<Aws::String>&& value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue = std::move(value); }

    /**
     * <p>The list of string value.</p>
     */
    inline WorkflowStepOutputUnion& WithListOfStringValue(const Aws::Vector<Aws::String>& value) { SetListOfStringValue(value); return *this;}

    /**
     * <p>The list of string value.</p>
     */
    inline WorkflowStepOutputUnion& WithListOfStringValue(Aws::Vector<Aws::String>&& value) { SetListOfStringValue(std::move(value)); return *this;}

    /**
     * <p>The list of string value.</p>
     */
    inline WorkflowStepOutputUnion& AddListOfStringValue(const Aws::String& value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue.push_back(value); return *this; }

    /**
     * <p>The list of string value.</p>
     */
    inline WorkflowStepOutputUnion& AddListOfStringValue(Aws::String&& value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of string value.</p>
     */
    inline WorkflowStepOutputUnion& AddListOfStringValue(const char* value) { m_listOfStringValueHasBeenSet = true; m_listOfStringValue.push_back(value); return *this; }

  private:

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_listOfStringValue;
    bool m_listOfStringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
