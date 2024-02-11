/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/MapFilterComparison.h>
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
   * <p>A map filter for filtering Security Hub findings. Each map filter provides
   * the field to check for, the value to check for, and the comparison
   * operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/MapFilter">AWS
   * API Reference</a></p>
   */
  class MapFilter
  {
  public:
    AWS_SECURITYHUB_API MapFilter();
    AWS_SECURITYHUB_API MapFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API MapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline MapFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline MapFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the map filter. For example, for <code>ResourceTags</code>,
     * <code>Key</code> identifies the name of the tag. For
     * <code>UserDefinedFields</code>, <code>Key</code> is the name of the field.</p>
     */
    inline MapFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline MapFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline MapFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the key in the map filter. Filter values are case sensitive.
     * For example, one of the values for a tag called <code>Department</code> might be
     * <code>Security</code>. If you provide <code>security</code> as the filter value,
     * then there's no match.</p>
     */
    inline MapFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The condition to apply to the key value when filtering Security Hub findings
     * with a map filter.</p> <p>To search for values that have the filter value, use
     * one of the following comparison operators:</p> <ul> <li> <p>To search for values
     * that include the filter value, use <code>CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department CONTAINS
     * Security</code> matches findings that include the value <code>Security</code>
     * for the <code>Department</code> tag. In the same example, a finding with a value
     * of <code>Security team</code> for the <code>Department</code> tag is a
     * match.</p> </li> <li> <p>To search for values that exactly match the filter
     * value, use <code>EQUALS</code>. For example, for the <code>ResourceTags</code>
     * field, the filter <code>Department EQUALS Security</code> matches findings that
     * have the value <code>Security</code> for the <code>Department</code> tag.</p>
     * </li> </ul> <p> <code>CONTAINS</code> and <code>EQUALS</code> filters on the
     * same field are joined by <code>OR</code>. A finding matches if it matches any
     * one of those filters. For example, the filters <code>Department CONTAINS
     * Security OR Department CONTAINS Finance</code> match a finding that includes
     * either <code>Security</code>, <code>Finance</code>, or both values.</p> <p>To
     * search for values that don't have the filter value, use one of the following
     * comparison operators:</p> <ul> <li> <p>To search for values that exclude the
     * filter value, use <code>NOT_CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_CONTAINS
     * Finance</code> matches findings that exclude the value <code>Finance</code> for
     * the <code>Department</code> tag.</p> </li> <li> <p>To search for values other
     * than the filter value, use <code>NOT_EQUALS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_EQUALS
     * Finance</code> matches findings that don’t have the value <code>Finance</code>
     * for the <code>Department</code> tag.</p> </li> </ul> <p>
     * <code>NOT_CONTAINS</code> and <code>NOT_EQUALS</code> filters on the same field
     * are joined by <code>AND</code>. A finding matches only if it matches all of
     * those filters. For example, the filters <code>Department NOT_CONTAINS Security
     * AND Department NOT_CONTAINS Finance</code> match a finding that excludes both
     * the <code>Security</code> and <code>Finance</code> values.</p> <p>
     * <code>CONTAINS</code> filters can only be used with other <code>CONTAINS</code>
     * filters. <code>NOT_CONTAINS</code> filters can only be used with other
     * <code>NOT_CONTAINS</code> filters.</p> <p>You can’t have both a
     * <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code> filter on the same
     * field. Similarly, you can’t have both an <code>EQUALS</code> filter and a
     * <code>NOT_EQUALS</code> filter on the same field. Combining filters in this way
     * returns an error. </p> <p> <code>CONTAINS</code> and <code>NOT_CONTAINS</code>
     * operators can be used only with automation rules. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline const MapFilterComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The condition to apply to the key value when filtering Security Hub findings
     * with a map filter.</p> <p>To search for values that have the filter value, use
     * one of the following comparison operators:</p> <ul> <li> <p>To search for values
     * that include the filter value, use <code>CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department CONTAINS
     * Security</code> matches findings that include the value <code>Security</code>
     * for the <code>Department</code> tag. In the same example, a finding with a value
     * of <code>Security team</code> for the <code>Department</code> tag is a
     * match.</p> </li> <li> <p>To search for values that exactly match the filter
     * value, use <code>EQUALS</code>. For example, for the <code>ResourceTags</code>
     * field, the filter <code>Department EQUALS Security</code> matches findings that
     * have the value <code>Security</code> for the <code>Department</code> tag.</p>
     * </li> </ul> <p> <code>CONTAINS</code> and <code>EQUALS</code> filters on the
     * same field are joined by <code>OR</code>. A finding matches if it matches any
     * one of those filters. For example, the filters <code>Department CONTAINS
     * Security OR Department CONTAINS Finance</code> match a finding that includes
     * either <code>Security</code>, <code>Finance</code>, or both values.</p> <p>To
     * search for values that don't have the filter value, use one of the following
     * comparison operators:</p> <ul> <li> <p>To search for values that exclude the
     * filter value, use <code>NOT_CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_CONTAINS
     * Finance</code> matches findings that exclude the value <code>Finance</code> for
     * the <code>Department</code> tag.</p> </li> <li> <p>To search for values other
     * than the filter value, use <code>NOT_EQUALS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_EQUALS
     * Finance</code> matches findings that don’t have the value <code>Finance</code>
     * for the <code>Department</code> tag.</p> </li> </ul> <p>
     * <code>NOT_CONTAINS</code> and <code>NOT_EQUALS</code> filters on the same field
     * are joined by <code>AND</code>. A finding matches only if it matches all of
     * those filters. For example, the filters <code>Department NOT_CONTAINS Security
     * AND Department NOT_CONTAINS Finance</code> match a finding that excludes both
     * the <code>Security</code> and <code>Finance</code> values.</p> <p>
     * <code>CONTAINS</code> filters can only be used with other <code>CONTAINS</code>
     * filters. <code>NOT_CONTAINS</code> filters can only be used with other
     * <code>NOT_CONTAINS</code> filters.</p> <p>You can’t have both a
     * <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code> filter on the same
     * field. Similarly, you can’t have both an <code>EQUALS</code> filter and a
     * <code>NOT_EQUALS</code> filter on the same field. Combining filters in this way
     * returns an error. </p> <p> <code>CONTAINS</code> and <code>NOT_CONTAINS</code>
     * operators can be used only with automation rules. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The condition to apply to the key value when filtering Security Hub findings
     * with a map filter.</p> <p>To search for values that have the filter value, use
     * one of the following comparison operators:</p> <ul> <li> <p>To search for values
     * that include the filter value, use <code>CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department CONTAINS
     * Security</code> matches findings that include the value <code>Security</code>
     * for the <code>Department</code> tag. In the same example, a finding with a value
     * of <code>Security team</code> for the <code>Department</code> tag is a
     * match.</p> </li> <li> <p>To search for values that exactly match the filter
     * value, use <code>EQUALS</code>. For example, for the <code>ResourceTags</code>
     * field, the filter <code>Department EQUALS Security</code> matches findings that
     * have the value <code>Security</code> for the <code>Department</code> tag.</p>
     * </li> </ul> <p> <code>CONTAINS</code> and <code>EQUALS</code> filters on the
     * same field are joined by <code>OR</code>. A finding matches if it matches any
     * one of those filters. For example, the filters <code>Department CONTAINS
     * Security OR Department CONTAINS Finance</code> match a finding that includes
     * either <code>Security</code>, <code>Finance</code>, or both values.</p> <p>To
     * search for values that don't have the filter value, use one of the following
     * comparison operators:</p> <ul> <li> <p>To search for values that exclude the
     * filter value, use <code>NOT_CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_CONTAINS
     * Finance</code> matches findings that exclude the value <code>Finance</code> for
     * the <code>Department</code> tag.</p> </li> <li> <p>To search for values other
     * than the filter value, use <code>NOT_EQUALS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_EQUALS
     * Finance</code> matches findings that don’t have the value <code>Finance</code>
     * for the <code>Department</code> tag.</p> </li> </ul> <p>
     * <code>NOT_CONTAINS</code> and <code>NOT_EQUALS</code> filters on the same field
     * are joined by <code>AND</code>. A finding matches only if it matches all of
     * those filters. For example, the filters <code>Department NOT_CONTAINS Security
     * AND Department NOT_CONTAINS Finance</code> match a finding that excludes both
     * the <code>Security</code> and <code>Finance</code> values.</p> <p>
     * <code>CONTAINS</code> filters can only be used with other <code>CONTAINS</code>
     * filters. <code>NOT_CONTAINS</code> filters can only be used with other
     * <code>NOT_CONTAINS</code> filters.</p> <p>You can’t have both a
     * <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code> filter on the same
     * field. Similarly, you can’t have both an <code>EQUALS</code> filter and a
     * <code>NOT_EQUALS</code> filter on the same field. Combining filters in this way
     * returns an error. </p> <p> <code>CONTAINS</code> and <code>NOT_CONTAINS</code>
     * operators can be used only with automation rules. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline void SetComparison(const MapFilterComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The condition to apply to the key value when filtering Security Hub findings
     * with a map filter.</p> <p>To search for values that have the filter value, use
     * one of the following comparison operators:</p> <ul> <li> <p>To search for values
     * that include the filter value, use <code>CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department CONTAINS
     * Security</code> matches findings that include the value <code>Security</code>
     * for the <code>Department</code> tag. In the same example, a finding with a value
     * of <code>Security team</code> for the <code>Department</code> tag is a
     * match.</p> </li> <li> <p>To search for values that exactly match the filter
     * value, use <code>EQUALS</code>. For example, for the <code>ResourceTags</code>
     * field, the filter <code>Department EQUALS Security</code> matches findings that
     * have the value <code>Security</code> for the <code>Department</code> tag.</p>
     * </li> </ul> <p> <code>CONTAINS</code> and <code>EQUALS</code> filters on the
     * same field are joined by <code>OR</code>. A finding matches if it matches any
     * one of those filters. For example, the filters <code>Department CONTAINS
     * Security OR Department CONTAINS Finance</code> match a finding that includes
     * either <code>Security</code>, <code>Finance</code>, or both values.</p> <p>To
     * search for values that don't have the filter value, use one of the following
     * comparison operators:</p> <ul> <li> <p>To search for values that exclude the
     * filter value, use <code>NOT_CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_CONTAINS
     * Finance</code> matches findings that exclude the value <code>Finance</code> for
     * the <code>Department</code> tag.</p> </li> <li> <p>To search for values other
     * than the filter value, use <code>NOT_EQUALS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_EQUALS
     * Finance</code> matches findings that don’t have the value <code>Finance</code>
     * for the <code>Department</code> tag.</p> </li> </ul> <p>
     * <code>NOT_CONTAINS</code> and <code>NOT_EQUALS</code> filters on the same field
     * are joined by <code>AND</code>. A finding matches only if it matches all of
     * those filters. For example, the filters <code>Department NOT_CONTAINS Security
     * AND Department NOT_CONTAINS Finance</code> match a finding that excludes both
     * the <code>Security</code> and <code>Finance</code> values.</p> <p>
     * <code>CONTAINS</code> filters can only be used with other <code>CONTAINS</code>
     * filters. <code>NOT_CONTAINS</code> filters can only be used with other
     * <code>NOT_CONTAINS</code> filters.</p> <p>You can’t have both a
     * <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code> filter on the same
     * field. Similarly, you can’t have both an <code>EQUALS</code> filter and a
     * <code>NOT_EQUALS</code> filter on the same field. Combining filters in this way
     * returns an error. </p> <p> <code>CONTAINS</code> and <code>NOT_CONTAINS</code>
     * operators can be used only with automation rules. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline void SetComparison(MapFilterComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The condition to apply to the key value when filtering Security Hub findings
     * with a map filter.</p> <p>To search for values that have the filter value, use
     * one of the following comparison operators:</p> <ul> <li> <p>To search for values
     * that include the filter value, use <code>CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department CONTAINS
     * Security</code> matches findings that include the value <code>Security</code>
     * for the <code>Department</code> tag. In the same example, a finding with a value
     * of <code>Security team</code> for the <code>Department</code> tag is a
     * match.</p> </li> <li> <p>To search for values that exactly match the filter
     * value, use <code>EQUALS</code>. For example, for the <code>ResourceTags</code>
     * field, the filter <code>Department EQUALS Security</code> matches findings that
     * have the value <code>Security</code> for the <code>Department</code> tag.</p>
     * </li> </ul> <p> <code>CONTAINS</code> and <code>EQUALS</code> filters on the
     * same field are joined by <code>OR</code>. A finding matches if it matches any
     * one of those filters. For example, the filters <code>Department CONTAINS
     * Security OR Department CONTAINS Finance</code> match a finding that includes
     * either <code>Security</code>, <code>Finance</code>, or both values.</p> <p>To
     * search for values that don't have the filter value, use one of the following
     * comparison operators:</p> <ul> <li> <p>To search for values that exclude the
     * filter value, use <code>NOT_CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_CONTAINS
     * Finance</code> matches findings that exclude the value <code>Finance</code> for
     * the <code>Department</code> tag.</p> </li> <li> <p>To search for values other
     * than the filter value, use <code>NOT_EQUALS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_EQUALS
     * Finance</code> matches findings that don’t have the value <code>Finance</code>
     * for the <code>Department</code> tag.</p> </li> </ul> <p>
     * <code>NOT_CONTAINS</code> and <code>NOT_EQUALS</code> filters on the same field
     * are joined by <code>AND</code>. A finding matches only if it matches all of
     * those filters. For example, the filters <code>Department NOT_CONTAINS Security
     * AND Department NOT_CONTAINS Finance</code> match a finding that excludes both
     * the <code>Security</code> and <code>Finance</code> values.</p> <p>
     * <code>CONTAINS</code> filters can only be used with other <code>CONTAINS</code>
     * filters. <code>NOT_CONTAINS</code> filters can only be used with other
     * <code>NOT_CONTAINS</code> filters.</p> <p>You can’t have both a
     * <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code> filter on the same
     * field. Similarly, you can’t have both an <code>EQUALS</code> filter and a
     * <code>NOT_EQUALS</code> filter on the same field. Combining filters in this way
     * returns an error. </p> <p> <code>CONTAINS</code> and <code>NOT_CONTAINS</code>
     * operators can be used only with automation rules. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline MapFilter& WithComparison(const MapFilterComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The condition to apply to the key value when filtering Security Hub findings
     * with a map filter.</p> <p>To search for values that have the filter value, use
     * one of the following comparison operators:</p> <ul> <li> <p>To search for values
     * that include the filter value, use <code>CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department CONTAINS
     * Security</code> matches findings that include the value <code>Security</code>
     * for the <code>Department</code> tag. In the same example, a finding with a value
     * of <code>Security team</code> for the <code>Department</code> tag is a
     * match.</p> </li> <li> <p>To search for values that exactly match the filter
     * value, use <code>EQUALS</code>. For example, for the <code>ResourceTags</code>
     * field, the filter <code>Department EQUALS Security</code> matches findings that
     * have the value <code>Security</code> for the <code>Department</code> tag.</p>
     * </li> </ul> <p> <code>CONTAINS</code> and <code>EQUALS</code> filters on the
     * same field are joined by <code>OR</code>. A finding matches if it matches any
     * one of those filters. For example, the filters <code>Department CONTAINS
     * Security OR Department CONTAINS Finance</code> match a finding that includes
     * either <code>Security</code>, <code>Finance</code>, or both values.</p> <p>To
     * search for values that don't have the filter value, use one of the following
     * comparison operators:</p> <ul> <li> <p>To search for values that exclude the
     * filter value, use <code>NOT_CONTAINS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_CONTAINS
     * Finance</code> matches findings that exclude the value <code>Finance</code> for
     * the <code>Department</code> tag.</p> </li> <li> <p>To search for values other
     * than the filter value, use <code>NOT_EQUALS</code>. For example, for the
     * <code>ResourceTags</code> field, the filter <code>Department NOT_EQUALS
     * Finance</code> matches findings that don’t have the value <code>Finance</code>
     * for the <code>Department</code> tag.</p> </li> </ul> <p>
     * <code>NOT_CONTAINS</code> and <code>NOT_EQUALS</code> filters on the same field
     * are joined by <code>AND</code>. A finding matches only if it matches all of
     * those filters. For example, the filters <code>Department NOT_CONTAINS Security
     * AND Department NOT_CONTAINS Finance</code> match a finding that excludes both
     * the <code>Security</code> and <code>Finance</code> values.</p> <p>
     * <code>CONTAINS</code> filters can only be used with other <code>CONTAINS</code>
     * filters. <code>NOT_CONTAINS</code> filters can only be used with other
     * <code>NOT_CONTAINS</code> filters.</p> <p>You can’t have both a
     * <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code> filter on the same
     * field. Similarly, you can’t have both an <code>EQUALS</code> filter and a
     * <code>NOT_EQUALS</code> filter on the same field. Combining filters in this way
     * returns an error. </p> <p> <code>CONTAINS</code> and <code>NOT_CONTAINS</code>
     * operators can be used only with automation rules. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline MapFilter& WithComparison(MapFilterComparison&& value) { SetComparison(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    MapFilterComparison m_comparison;
    bool m_comparisonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
