/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-incidents/model/AttributeValueList.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>A conditional statement with which to compare a value, after a timestamp,
   * before a timestamp, or equal to a string or integer. If multiple conditions are
   * specified, the conditionals become an <code>AND</code>ed statement. If multiple
   * values are specified for a conditional, the values are
   * <code>OR</code>d.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_SSMINCIDENTS_API Condition();
    AWS_SSMINCIDENTS_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>After the specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetAfter() const{ return m_after; }

    /**
     * <p>After the specified timestamp.</p>
     */
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }

    /**
     * <p>After the specified timestamp.</p>
     */
    inline void SetAfter(const Aws::Utils::DateTime& value) { m_afterHasBeenSet = true; m_after = value; }

    /**
     * <p>After the specified timestamp.</p>
     */
    inline void SetAfter(Aws::Utils::DateTime&& value) { m_afterHasBeenSet = true; m_after = std::move(value); }

    /**
     * <p>After the specified timestamp.</p>
     */
    inline Condition& WithAfter(const Aws::Utils::DateTime& value) { SetAfter(value); return *this;}

    /**
     * <p>After the specified timestamp.</p>
     */
    inline Condition& WithAfter(Aws::Utils::DateTime&& value) { SetAfter(std::move(value)); return *this;}


    /**
     * <p>Before the specified timestamp</p>
     */
    inline const Aws::Utils::DateTime& GetBefore() const{ return m_before; }

    /**
     * <p>Before the specified timestamp</p>
     */
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }

    /**
     * <p>Before the specified timestamp</p>
     */
    inline void SetBefore(const Aws::Utils::DateTime& value) { m_beforeHasBeenSet = true; m_before = value; }

    /**
     * <p>Before the specified timestamp</p>
     */
    inline void SetBefore(Aws::Utils::DateTime&& value) { m_beforeHasBeenSet = true; m_before = std::move(value); }

    /**
     * <p>Before the specified timestamp</p>
     */
    inline Condition& WithBefore(const Aws::Utils::DateTime& value) { SetBefore(value); return *this;}

    /**
     * <p>Before the specified timestamp</p>
     */
    inline Condition& WithBefore(Aws::Utils::DateTime&& value) { SetBefore(std::move(value)); return *this;}


    /**
     * <p>The value is equal to the provided string or integer. </p>
     */
    inline const AttributeValueList& GetEquals() const{ return m_equals; }

    /**
     * <p>The value is equal to the provided string or integer. </p>
     */
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    /**
     * <p>The value is equal to the provided string or integer. </p>
     */
    inline void SetEquals(const AttributeValueList& value) { m_equalsHasBeenSet = true; m_equals = value; }

    /**
     * <p>The value is equal to the provided string or integer. </p>
     */
    inline void SetEquals(AttributeValueList&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    /**
     * <p>The value is equal to the provided string or integer. </p>
     */
    inline Condition& WithEquals(const AttributeValueList& value) { SetEquals(value); return *this;}

    /**
     * <p>The value is equal to the provided string or integer. </p>
     */
    inline Condition& WithEquals(AttributeValueList&& value) { SetEquals(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_after;
    bool m_afterHasBeenSet = false;

    Aws::Utils::DateTime m_before;
    bool m_beforeHasBeenSet = false;

    AttributeValueList m_equals;
    bool m_equalsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
