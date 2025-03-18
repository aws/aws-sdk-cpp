﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/TagCondition.h>
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
   * <p>A list of conditions which would be applied together with an <code>OR</code>
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/OrCondition">AWS
   * API Reference</a></p>
   */
  class OrCondition
  {
  public:
    AWS_QCONNECT_API OrCondition() = default;
    AWS_QCONNECT_API OrCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API OrCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    OrCondition& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = TagCondition>
    OrCondition& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
    template<typename TagConditionT = TagCondition>
    void SetTagCondition(TagConditionT&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::forward<TagConditionT>(value); }
    template<typename TagConditionT = TagCondition>
    OrCondition& WithTagCondition(TagConditionT&& value) { SetTagCondition(std::forward<TagConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TagCondition> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
