/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Relation.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the total number of matching results and indicates how accurate
   * that count is.</p> <p>The <code>Value</code> field provides the count, which may
   * be exact or estimated. The <code>Relation</code> field indicates whether it's an
   * exact figure or a lower bound. This helps understand the full scope of search
   * results, especially when dealing with large result sets.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TotalHits">AWS
   * API Reference</a></p>
   */
  class TotalHits
  {
  public:
    AWS_SAGEMAKER_API TotalHits() = default;
    AWS_SAGEMAKER_API TotalHits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TotalHits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of matching results. This value may be exact or an estimate,
     * depending on the <code>Relation</code> field.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline TotalHits& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the relationship between the returned <code>Value</code> and the
     * actual total number of matching results. Possible values are:</p> <ul> <li> <p>
     * <code>EqualTo</code>: The <code>Value</code> is the exact count of matching
     * results.</p> </li> <li> <p> <code>GreaterThanOrEqualTo</code>: The
     * <code>Value</code> is a lower bound of the actual count of matching results.</p>
     * </li> </ul>
     */
    inline Relation GetRelation() const { return m_relation; }
    inline bool RelationHasBeenSet() const { return m_relationHasBeenSet; }
    inline void SetRelation(Relation value) { m_relationHasBeenSet = true; m_relation = value; }
    inline TotalHits& WithRelation(Relation value) { SetRelation(value); return *this;}
    ///@}
  private:

    long long m_value{0};
    bool m_valueHasBeenSet = false;

    Relation m_relation{Relation::NOT_SET};
    bool m_relationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
