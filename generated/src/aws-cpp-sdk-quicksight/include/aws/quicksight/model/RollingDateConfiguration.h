/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The rolling date configuration of a date time filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RollingDateConfiguration">AWS
   * API Reference</a></p>
   */
  class RollingDateConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RollingDateConfiguration();
    AWS_QUICKSIGHT_API RollingDateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RollingDateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline RollingDateConfiguration& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline RollingDateConfiguration& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The data set that is used in the rolling date configuration.</p>
     */
    inline RollingDateConfiguration& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}


    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline RollingDateConfiguration& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline RollingDateConfiguration& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression of the rolling date configuration.</p>
     */
    inline RollingDateConfiguration& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
