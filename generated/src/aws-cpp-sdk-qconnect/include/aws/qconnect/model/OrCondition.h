/**
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
    AWS_QCONNECT_API OrCondition();
    AWS_QCONNECT_API OrCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API OrCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline OrCondition& WithAndConditions(const Aws::Vector<TagCondition>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline OrCondition& WithAndConditions(Aws::Vector<TagCondition>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline OrCondition& AddAndConditions(const TagCondition& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline OrCondition& AddAndConditions(TagCondition&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


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
    inline OrCondition& WithTagCondition(const TagCondition& value) { SetTagCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline OrCondition& WithTagCondition(TagCondition&& value) { SetTagCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<TagCondition> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
