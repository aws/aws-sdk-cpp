/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CollectiveConstantEntry.h>
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
   * <p>The definition for a <code>TopicConstantValue</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicConstantValue">AWS
   * API Reference</a></p>
   */
  class TopicConstantValue
  {
  public:
    AWS_QUICKSIGHT_API TopicConstantValue() = default;
    AWS_QUICKSIGHT_API TopicConstantValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicConstantValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The constant type of a <code>TopicConstantValue</code>.</p>
     */
    inline ConstantType GetConstantType() const { return m_constantType; }
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }
    inline void SetConstantType(ConstantType value) { m_constantTypeHasBeenSet = true; m_constantType = value; }
    inline TopicConstantValue& WithConstantType(ConstantType value) { SetConstantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    TopicConstantValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum for the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::String& GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    template<typename MinimumT = Aws::String>
    void SetMinimum(MinimumT&& value) { m_minimumHasBeenSet = true; m_minimum = std::forward<MinimumT>(value); }
    template<typename MinimumT = Aws::String>
    TopicConstantValue& WithMinimum(MinimumT&& value) { SetMinimum(std::forward<MinimumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum for the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::String& GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    template<typename MaximumT = Aws::String>
    void SetMaximum(MaximumT&& value) { m_maximumHasBeenSet = true; m_maximum = std::forward<MaximumT>(value); }
    template<typename MaximumT = Aws::String>
    TopicConstantValue& WithMaximum(MaximumT&& value) { SetMaximum(std::forward<MaximumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value list of the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::Vector<CollectiveConstantEntry>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<CollectiveConstantEntry>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<CollectiveConstantEntry>>
    TopicConstantValue& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = CollectiveConstantEntry>
    TopicConstantValue& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}
  private:

    ConstantType m_constantType{ConstantType::NOT_SET};
    bool m_constantTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_minimum;
    bool m_minimumHasBeenSet = false;

    Aws::String m_maximum;
    bool m_maximumHasBeenSet = false;

    Aws::Vector<CollectiveConstantEntry> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
