/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ValueWhenUnsetOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration that defines the default value of a <code>String</code>
   * parameter when a value has not been set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringValueWhenUnsetConfiguration">AWS
   * API Reference</a></p>
   */
  class StringValueWhenUnsetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API StringValueWhenUnsetConfiguration() = default;
    AWS_QUICKSIGHT_API StringValueWhenUnsetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringValueWhenUnsetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The built-in options for default values. The value can be one of the
     * following:</p> <ul> <li> <p> <code>RECOMMENDED</code>: The recommended
     * value.</p> </li> <li> <p> <code>NULL</code>: The <code>NULL</code> value.</p>
     * </li> </ul>
     */
    inline ValueWhenUnsetOption GetValueWhenUnsetOption() const { return m_valueWhenUnsetOption; }
    inline bool ValueWhenUnsetOptionHasBeenSet() const { return m_valueWhenUnsetOptionHasBeenSet; }
    inline void SetValueWhenUnsetOption(ValueWhenUnsetOption value) { m_valueWhenUnsetOptionHasBeenSet = true; m_valueWhenUnsetOption = value; }
    inline StringValueWhenUnsetConfiguration& WithValueWhenUnsetOption(ValueWhenUnsetOption value) { SetValueWhenUnsetOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom value that's used when the value of a parameter isn't set.</p>
     */
    inline const Aws::String& GetCustomValue() const { return m_customValue; }
    inline bool CustomValueHasBeenSet() const { return m_customValueHasBeenSet; }
    template<typename CustomValueT = Aws::String>
    void SetCustomValue(CustomValueT&& value) { m_customValueHasBeenSet = true; m_customValue = std::forward<CustomValueT>(value); }
    template<typename CustomValueT = Aws::String>
    StringValueWhenUnsetConfiguration& WithCustomValue(CustomValueT&& value) { SetCustomValue(std::forward<CustomValueT>(value)); return *this;}
    ///@}
  private:

    ValueWhenUnsetOption m_valueWhenUnsetOption{ValueWhenUnsetOption::NOT_SET};
    bool m_valueWhenUnsetOptionHasBeenSet = false;

    Aws::String m_customValue;
    bool m_customValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
