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
    AWS_QUICKSIGHT_API TopicConstantValue();
    AWS_QUICKSIGHT_API TopicConstantValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicConstantValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The constant type of a <code>TopicConstantValue</code>.</p>
     */
    inline const ConstantType& GetConstantType() const{ return m_constantType; }
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }
    inline void SetConstantType(const ConstantType& value) { m_constantTypeHasBeenSet = true; m_constantType = value; }
    inline void SetConstantType(ConstantType&& value) { m_constantTypeHasBeenSet = true; m_constantType = std::move(value); }
    inline TopicConstantValue& WithConstantType(const ConstantType& value) { SetConstantType(value); return *this;}
    inline TopicConstantValue& WithConstantType(ConstantType&& value) { SetConstantType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline TopicConstantValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline TopicConstantValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline TopicConstantValue& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum for the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::String& GetMinimum() const{ return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(const Aws::String& value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline void SetMinimum(Aws::String&& value) { m_minimumHasBeenSet = true; m_minimum = std::move(value); }
    inline void SetMinimum(const char* value) { m_minimumHasBeenSet = true; m_minimum.assign(value); }
    inline TopicConstantValue& WithMinimum(const Aws::String& value) { SetMinimum(value); return *this;}
    inline TopicConstantValue& WithMinimum(Aws::String&& value) { SetMinimum(std::move(value)); return *this;}
    inline TopicConstantValue& WithMinimum(const char* value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum for the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::String& GetMaximum() const{ return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(const Aws::String& value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline void SetMaximum(Aws::String&& value) { m_maximumHasBeenSet = true; m_maximum = std::move(value); }
    inline void SetMaximum(const char* value) { m_maximumHasBeenSet = true; m_maximum.assign(value); }
    inline TopicConstantValue& WithMaximum(const Aws::String& value) { SetMaximum(value); return *this;}
    inline TopicConstantValue& WithMaximum(Aws::String&& value) { SetMaximum(std::move(value)); return *this;}
    inline TopicConstantValue& WithMaximum(const char* value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value list of the <code>TopicConstantValue</code>.</p>
     */
    inline const Aws::Vector<CollectiveConstantEntry>& GetValueList() const{ return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    inline void SetValueList(const Aws::Vector<CollectiveConstantEntry>& value) { m_valueListHasBeenSet = true; m_valueList = value; }
    inline void SetValueList(Aws::Vector<CollectiveConstantEntry>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }
    inline TopicConstantValue& WithValueList(const Aws::Vector<CollectiveConstantEntry>& value) { SetValueList(value); return *this;}
    inline TopicConstantValue& WithValueList(Aws::Vector<CollectiveConstantEntry>&& value) { SetValueList(std::move(value)); return *this;}
    inline TopicConstantValue& AddValueList(const CollectiveConstantEntry& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }
    inline TopicConstantValue& AddValueList(CollectiveConstantEntry&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ConstantType m_constantType;
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
