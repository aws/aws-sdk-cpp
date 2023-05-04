/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
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
   * <p>A structure that represents a singular filter constant, used in filters to
   * specify a single value to match against.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicSingularFilterConstant">AWS
   * API Reference</a></p>
   */
  class TopicSingularFilterConstant
  {
  public:
    AWS_QUICKSIGHT_API TopicSingularFilterConstant();
    AWS_QUICKSIGHT_API TopicSingularFilterConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSingularFilterConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline const ConstantType& GetConstantType() const{ return m_constantType; }

    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }

    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline void SetConstantType(const ConstantType& value) { m_constantTypeHasBeenSet = true; m_constantType = value; }

    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline void SetConstantType(ConstantType&& value) { m_constantTypeHasBeenSet = true; m_constantType = std::move(value); }

    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline TopicSingularFilterConstant& WithConstantType(const ConstantType& value) { SetConstantType(value); return *this;}

    /**
     * <p>The type of the singular filter constant. Valid values for this structure are
     * <code>SINGULAR</code>.</p>
     */
    inline TopicSingularFilterConstant& WithConstantType(ConstantType&& value) { SetConstantType(std::move(value)); return *this;}


    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline const Aws::String& GetSingularConstant() const{ return m_singularConstant; }

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline bool SingularConstantHasBeenSet() const { return m_singularConstantHasBeenSet; }

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline void SetSingularConstant(const Aws::String& value) { m_singularConstantHasBeenSet = true; m_singularConstant = value; }

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline void SetSingularConstant(Aws::String&& value) { m_singularConstantHasBeenSet = true; m_singularConstant = std::move(value); }

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline void SetSingularConstant(const char* value) { m_singularConstantHasBeenSet = true; m_singularConstant.assign(value); }

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline TopicSingularFilterConstant& WithSingularConstant(const Aws::String& value) { SetSingularConstant(value); return *this;}

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline TopicSingularFilterConstant& WithSingularConstant(Aws::String&& value) { SetSingularConstant(std::move(value)); return *this;}

    /**
     * <p>The value of the singular filter constant.</p>
     */
    inline TopicSingularFilterConstant& WithSingularConstant(const char* value) { SetSingularConstant(value); return *this;}

  private:

    ConstantType m_constantType;
    bool m_constantTypeHasBeenSet = false;

    Aws::String m_singularConstant;
    bool m_singularConstantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
