/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/Condition.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Filter the selection by using a condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_SSMINCIDENTS_API Filter();
    AWS_SSMINCIDENTS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition accepts before or after a specified time, equal to a string, or
     * equal to an integer.</p>
     */
    inline const Condition& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline Filter& WithCondition(const Condition& value) { SetCondition(value); return *this;}
    inline Filter& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key that you're filtering on.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Filter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Filter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Filter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
