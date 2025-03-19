/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicFilterOperator.h>
#include <aws/quicksight/model/TopicFilterAttribute.h>
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
   * <p>The filter that is used to search for a topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicSearchFilter">AWS
   * API Reference</a></p>
   */
  class TopicSearchFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicSearchFilter() = default;
    AWS_QUICKSIGHT_API TopicSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator like equals or like.</p>
     */
    inline TopicFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(TopicFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline TopicSearchFilter& WithOperator(TopicFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic search filter.</p>
     */
    inline TopicFilterAttribute GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(TopicFilterAttribute value) { m_nameHasBeenSet = true; m_name = value; }
    inline TopicSearchFilter& WithName(TopicFilterAttribute value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the topic search filter.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    TopicSearchFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    TopicFilterOperator m_operator{TopicFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    TopicFilterAttribute m_name{TopicFilterAttribute::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
