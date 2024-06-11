/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/scheduler/model/PlacementConstraintType.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>An object representing a constraint on task placement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/PlacementConstraint">AWS
   * API Reference</a></p>
   */
  class PlacementConstraint
  {
  public:
    AWS_SCHEDULER_API PlacementConstraint();
    AWS_SCHEDULER_API PlacementConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API PlacementConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline PlacementConstraint& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline PlacementConstraint& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline PlacementConstraint& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid
     * candidates.</p>
     */
    inline const PlacementConstraintType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PlacementConstraintType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PlacementConstraintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PlacementConstraint& WithType(const PlacementConstraintType& value) { SetType(value); return *this;}
    inline PlacementConstraint& WithType(PlacementConstraintType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    PlacementConstraintType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
