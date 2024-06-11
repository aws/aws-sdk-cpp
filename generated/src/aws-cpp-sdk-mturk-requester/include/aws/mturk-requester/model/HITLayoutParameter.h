﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The HITLayoutParameter data structure defines parameter values used with a
   * HITLayout. A HITLayout is a reusable Amazon Mechanical Turk project template
   * used to provide Human Intelligence Task (HIT) question data for CreateHIT.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/HITLayoutParameter">AWS
   * API Reference</a></p>
   */
  class HITLayoutParameter
  {
  public:
    AWS_MTURK_API HITLayoutParameter();
    AWS_MTURK_API HITLayoutParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API HITLayoutParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the parameter in the HITLayout. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HITLayoutParameter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HITLayoutParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HITLayoutParameter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value substituted for the parameter referenced in the HITLayout. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline HITLayoutParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline HITLayoutParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline HITLayoutParameter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
