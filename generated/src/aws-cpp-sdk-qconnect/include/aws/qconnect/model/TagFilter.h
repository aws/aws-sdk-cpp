/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/TagCondition.h>
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
    AWS_QCONNECT_API TagFilter();
    AWS_QCONNECT_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<TagCondition>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndConditions(const Aws::Vector<TagCondition>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndConditions(Aws::Vector<TagCondition>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline TagFilter& WithAndConditions(const Aws::Vector<TagCondition>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline TagFilter& WithAndConditions(Aws::Vector<TagCondition>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline TagFilter& AddAndConditions(const TagCondition& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline TagFilter& AddAndConditions(TagCondition&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<OrCondition>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<OrCondition>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<OrCondition>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline TagFilter& WithOrConditions(const Aws::Vector<OrCondition>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline TagFilter& WithOrConditions(Aws::Vector<OrCondition>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline TagFilter& AddOrConditions(const OrCondition& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline TagFilter& AddOrConditions(OrCondition&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline const TagCondition& GetTagCondition() const{ return m_tagCondition; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline void SetTagCondition(const TagCondition& value) { m_tagConditionHasBeenSet = true; m_tagCondition = value; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline void SetTagCondition(TagCondition&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline TagFilter& WithTagCondition(const TagCondition& value) { SetTagCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline TagFilter& WithTagCondition(TagCondition&& value) { SetTagCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<TagCondition> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    Aws::Vector<OrCondition> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
