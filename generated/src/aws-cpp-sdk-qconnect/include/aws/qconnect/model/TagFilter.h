/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TagCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/OrCondition.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>An object that can be used to specify Tag conditions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/TagFilter">AWS
   * API Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_QCONNECT_API TagFilter() = default;
    AWS_QCONNECT_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
    template<typename TagConditionT = TagCondition>
    void SetTagCondition(TagConditionT&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::forward<TagConditionT>(value); }
    template<typename TagConditionT = TagCondition>
    TagFilter& WithTagCondition(TagConditionT&& value) { SetTagCondition(std::forward<TagConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<TagCondition>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<TagCondition>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<TagCondition>>
    TagFilter& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = TagCondition>
    TagFilter& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<OrCondition>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<OrCondition>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<OrCondition>>
    TagFilter& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = OrCondition>
    TagFilter& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}
  private:

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;

    Aws::Vector<TagCondition> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    Aws::Vector<OrCondition> m_orConditions;
    bool m_orConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
