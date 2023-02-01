/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/ObjectiveSensitivity.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the additional objective for the solution, such as maximizing
   * streaming minutes or increasing revenue. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/optimizing-solution-for-objective.html">Optimizing
   * a solution</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/OptimizationObjective">AWS
   * API Reference</a></p>
   */
  class OptimizationObjective
  {
  public:
    AWS_PERSONALIZE_API OptimizationObjective();
    AWS_PERSONALIZE_API OptimizationObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API OptimizationObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline const Aws::String& GetItemAttribute() const{ return m_itemAttribute; }

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline bool ItemAttributeHasBeenSet() const { return m_itemAttributeHasBeenSet; }

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline void SetItemAttribute(const Aws::String& value) { m_itemAttributeHasBeenSet = true; m_itemAttribute = value; }

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline void SetItemAttribute(Aws::String&& value) { m_itemAttributeHasBeenSet = true; m_itemAttribute = std::move(value); }

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline void SetItemAttribute(const char* value) { m_itemAttributeHasBeenSet = true; m_itemAttribute.assign(value); }

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline OptimizationObjective& WithItemAttribute(const Aws::String& value) { SetItemAttribute(value); return *this;}

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline OptimizationObjective& WithItemAttribute(Aws::String&& value) { SetItemAttribute(std::move(value)); return *this;}

    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline OptimizationObjective& WithItemAttribute(const char* value) { SetItemAttribute(value); return *this;}


    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline const ObjectiveSensitivity& GetObjectiveSensitivity() const{ return m_objectiveSensitivity; }

    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline bool ObjectiveSensitivityHasBeenSet() const { return m_objectiveSensitivityHasBeenSet; }

    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline void SetObjectiveSensitivity(const ObjectiveSensitivity& value) { m_objectiveSensitivityHasBeenSet = true; m_objectiveSensitivity = value; }

    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline void SetObjectiveSensitivity(ObjectiveSensitivity&& value) { m_objectiveSensitivityHasBeenSet = true; m_objectiveSensitivity = std::move(value); }

    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline OptimizationObjective& WithObjectiveSensitivity(const ObjectiveSensitivity& value) { SetObjectiveSensitivity(value); return *this;}

    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline OptimizationObjective& WithObjectiveSensitivity(ObjectiveSensitivity&& value) { SetObjectiveSensitivity(std::move(value)); return *this;}

  private:

    Aws::String m_itemAttribute;
    bool m_itemAttributeHasBeenSet = false;

    ObjectiveSensitivity m_objectiveSensitivity;
    bool m_objectiveSensitivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
