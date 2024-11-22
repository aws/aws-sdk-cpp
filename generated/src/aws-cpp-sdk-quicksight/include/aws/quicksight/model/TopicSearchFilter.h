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
    AWS_QUICKSIGHT_API TopicSearchFilter();
    AWS_QUICKSIGHT_API TopicSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator like equals or like.</p>
     */
    inline const TopicFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const TopicFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(TopicFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline TopicSearchFilter& WithOperator(const TopicFilterOperator& value) { SetOperator(value); return *this;}
    inline TopicSearchFilter& WithOperator(TopicFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic search filter.</p>
     */
    inline const TopicFilterAttribute& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const TopicFilterAttribute& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(TopicFilterAttribute&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline TopicSearchFilter& WithName(const TopicFilterAttribute& value) { SetName(value); return *this;}
    inline TopicSearchFilter& WithName(TopicFilterAttribute&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the topic search filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline TopicSearchFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline TopicSearchFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline TopicSearchFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    TopicFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    TopicFilterAttribute m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
