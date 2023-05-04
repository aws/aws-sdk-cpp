/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConstantType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/CollectiveConstant.h>
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
   * <p>A constant used in a category filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicCategoryFilterConstant">AWS
   * API Reference</a></p>
   */
  class TopicCategoryFilterConstant
  {
  public:
    AWS_QUICKSIGHT_API TopicCategoryFilterConstant();
    AWS_QUICKSIGHT_API TopicCategoryFilterConstant(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicCategoryFilterConstant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline const ConstantType& GetConstantType() const{ return m_constantType; }

    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline bool ConstantTypeHasBeenSet() const { return m_constantTypeHasBeenSet; }

    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline void SetConstantType(const ConstantType& value) { m_constantTypeHasBeenSet = true; m_constantType = value; }

    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline void SetConstantType(ConstantType&& value) { m_constantTypeHasBeenSet = true; m_constantType = std::move(value); }

    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline TopicCategoryFilterConstant& WithConstantType(const ConstantType& value) { SetConstantType(value); return *this;}

    /**
     * <p>The type of category filter constant. This element is used to specify whether
     * a constant is a singular or collective. Valid values are <code>SINGULAR</code>
     * and <code>COLLECTIVE</code>.</p>
     */
    inline TopicCategoryFilterConstant& WithConstantType(ConstantType&& value) { SetConstantType(std::move(value)); return *this;}


    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline const Aws::String& GetSingularConstant() const{ return m_singularConstant; }

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline bool SingularConstantHasBeenSet() const { return m_singularConstantHasBeenSet; }

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline void SetSingularConstant(const Aws::String& value) { m_singularConstantHasBeenSet = true; m_singularConstant = value; }

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline void SetSingularConstant(Aws::String&& value) { m_singularConstantHasBeenSet = true; m_singularConstant = std::move(value); }

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline void SetSingularConstant(const char* value) { m_singularConstantHasBeenSet = true; m_singularConstant.assign(value); }

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline TopicCategoryFilterConstant& WithSingularConstant(const Aws::String& value) { SetSingularConstant(value); return *this;}

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline TopicCategoryFilterConstant& WithSingularConstant(Aws::String&& value) { SetSingularConstant(std::move(value)); return *this;}

    /**
     * <p>A singular constant used in a category filter. This element is used to
     * specify a single value for the constant.</p>
     */
    inline TopicCategoryFilterConstant& WithSingularConstant(const char* value) { SetSingularConstant(value); return *this;}


    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline const CollectiveConstant& GetCollectiveConstant() const{ return m_collectiveConstant; }

    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline bool CollectiveConstantHasBeenSet() const { return m_collectiveConstantHasBeenSet; }

    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline void SetCollectiveConstant(const CollectiveConstant& value) { m_collectiveConstantHasBeenSet = true; m_collectiveConstant = value; }

    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline void SetCollectiveConstant(CollectiveConstant&& value) { m_collectiveConstantHasBeenSet = true; m_collectiveConstant = std::move(value); }

    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline TopicCategoryFilterConstant& WithCollectiveConstant(const CollectiveConstant& value) { SetCollectiveConstant(value); return *this;}

    /**
     * <p>A collective constant used in a category filter. This element is used to
     * specify a list of values for the constant.</p>
     */
    inline TopicCategoryFilterConstant& WithCollectiveConstant(CollectiveConstant&& value) { SetCollectiveConstant(std::move(value)); return *this;}

  private:

    ConstantType m_constantType;
    bool m_constantTypeHasBeenSet = false;

    Aws::String m_singularConstant;
    bool m_singularConstantHasBeenSet = false;

    CollectiveConstant m_collectiveConstant;
    bool m_collectiveConstantHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
