/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A placement constraint for the tasks in the service.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServicePlacementConstraintsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServicePlacementConstraintsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServicePlacementConstraintsDetails();
    AWS_SECURITYHUB_API AwsEcsServicePlacementConstraintsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServicePlacementConstraintsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline AwsEcsServicePlacementConstraintsDetails& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline AwsEcsServicePlacementConstraintsDetails& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is
     * <code>distinctInstance</code>.</p>
     */
    inline AwsEcsServicePlacementConstraintsDetails& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline AwsEcsServicePlacementConstraintsDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline AwsEcsServicePlacementConstraintsDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to run each task in
     * a particular group on a different container instance. Use <code>memberOf</code>
     * to restrict the selection to a group of valid candidates.</p> <p>Valid values:
     * <code>distinctInstance</code> | <code>memberOf</code> </p>
     */
    inline AwsEcsServicePlacementConstraintsDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
