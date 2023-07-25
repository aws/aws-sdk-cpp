/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StringFilterComparison.h>
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
   * <p>A string filter for filtering Security Hub findings.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StringFilter">AWS
   * API Reference</a></p>
   */
  class StringFilter
  {
  public:
    AWS_SECURITYHUB_API StringFilter();
    AWS_SECURITYHUB_API StringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline StringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline StringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string filter value. Filter values are case sensitive. For example, the
     * product name for control-based findings is <code>Security Hub</code>. If you
     * provide <code>security hub</code> as the filter value, there's no match.</p>
     */
    inline StringFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The condition to apply to a string value when filtering Security Hub
     * findings.</p> <p>To search for values that have the filter value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * include the filter value, use <code>CONTAINS</code>. For example, the filter
     * <code>Title CONTAINS CloudFront</code> matches findings that have a
     * <code>Title</code> that includes the string CloudFront.</p> </li> <li> <p>To
     * search for values that exactly match the filter value, use <code>EQUALS</code>.
     * For example, the filter <code>AwsAccountId EQUALS 123456789012</code> only
     * matches findings that have an account ID of <code>123456789012</code>.</p> </li>
     * <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>. For example, the filter <code>ResourceRegion PREFIX
     * us</code> matches findings that have a <code>ResourceRegion</code> that starts
     * with <code>us</code>. A <code>ResourceRegion</code> that starts with a different
     * value, such as <code>af</code>, <code>ap</code>, or <code>ca</code>, doesn't
     * match.</p> </li> </ul> <p> <code>CONTAINS</code>, <code>EQUALS</code>, and
     * <code>PREFIX</code> filters on the same field are joined by <code>OR</code>. A
     * finding matches if it matches any one of those filters. For example, the filters
     * <code>Title CONTAINS CloudFront OR Title CONTAINS CloudWatch</code> match a
     * finding that includes either <code>CloudFront</code>, <code>CloudWatch</code>,
     * or both strings in the title.</p> <p>To search for values that don’t have the
     * filter value, use one of the following comparison operators:</p> <ul> <li> <p>To
     * search for values that exclude the filter value, use <code>NOT_CONTAINS</code>.
     * For example, the filter <code>Title NOT_CONTAINS CloudFront</code> matches
     * findings that have a <code>Title</code> that excludes the string CloudFront.</p>
     * </li> <li> <p>To search for values other than the filter value, use
     * <code>NOT_EQUALS</code>. For example, the filter <code>AwsAccountId NOT_EQUALS
     * 123456789012</code> only matches findings that have an account ID other than
     * <code>123456789012</code>.</p> </li> <li> <p>To search for values that don't
     * start with the filter value, use <code>PREFIX_NOT_EQUALS</code>. For example,
     * the filter <code>ResourceRegion PREFIX_NOT_EQUALS us</code> matches findings
     * with a <code>ResourceRegion</code> that starts with a value other than
     * <code>us</code>.</p> </li> </ul> <p> <code>NOT_CONTAINS</code>,
     * <code>NOT_EQUALS</code>, and <code>PREFIX_NOT_EQUALS</code> filters on the same
     * field are joined by <code>AND</code>. A finding matches only if it matches all
     * of those filters. For example, the filters <code>Title NOT_CONTAINS CloudFront
     * AND Title NOT_CONTAINS CloudWatch</code> match a finding that excludes both
     * <code>CloudFront</code> and <code>CloudWatch</code> in the title.</p> <p>You
     * can’t have both a <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code>
     * filter on the same field. Similarly, you can't provide both an
     * <code>EQUALS</code> filter and a <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filter on the same field. Combining filters in
     * this way returns an error. <code>CONTAINS</code> filters can only be used with
     * other <code>CONTAINS</code> filters. <code>NOT_CONTAINS</code> filters can only
     * be used with other <code>NOT_CONTAINS</code> filters. </p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, and then the <code>NOT_EQUALS</code>
     * or <code>PREFIX_NOT_EQUALS</code> filters.</p> <p>For example, for the following
     * filters, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIam</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul> <p> <code>CONTAINS</code> and
     * <code>NOT_CONTAINS</code> operators can be used only with automation rules. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline const StringFilterComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The condition to apply to a string value when filtering Security Hub
     * findings.</p> <p>To search for values that have the filter value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * include the filter value, use <code>CONTAINS</code>. For example, the filter
     * <code>Title CONTAINS CloudFront</code> matches findings that have a
     * <code>Title</code> that includes the string CloudFront.</p> </li> <li> <p>To
     * search for values that exactly match the filter value, use <code>EQUALS</code>.
     * For example, the filter <code>AwsAccountId EQUALS 123456789012</code> only
     * matches findings that have an account ID of <code>123456789012</code>.</p> </li>
     * <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>. For example, the filter <code>ResourceRegion PREFIX
     * us</code> matches findings that have a <code>ResourceRegion</code> that starts
     * with <code>us</code>. A <code>ResourceRegion</code> that starts with a different
     * value, such as <code>af</code>, <code>ap</code>, or <code>ca</code>, doesn't
     * match.</p> </li> </ul> <p> <code>CONTAINS</code>, <code>EQUALS</code>, and
     * <code>PREFIX</code> filters on the same field are joined by <code>OR</code>. A
     * finding matches if it matches any one of those filters. For example, the filters
     * <code>Title CONTAINS CloudFront OR Title CONTAINS CloudWatch</code> match a
     * finding that includes either <code>CloudFront</code>, <code>CloudWatch</code>,
     * or both strings in the title.</p> <p>To search for values that don’t have the
     * filter value, use one of the following comparison operators:</p> <ul> <li> <p>To
     * search for values that exclude the filter value, use <code>NOT_CONTAINS</code>.
     * For example, the filter <code>Title NOT_CONTAINS CloudFront</code> matches
     * findings that have a <code>Title</code> that excludes the string CloudFront.</p>
     * </li> <li> <p>To search for values other than the filter value, use
     * <code>NOT_EQUALS</code>. For example, the filter <code>AwsAccountId NOT_EQUALS
     * 123456789012</code> only matches findings that have an account ID other than
     * <code>123456789012</code>.</p> </li> <li> <p>To search for values that don't
     * start with the filter value, use <code>PREFIX_NOT_EQUALS</code>. For example,
     * the filter <code>ResourceRegion PREFIX_NOT_EQUALS us</code> matches findings
     * with a <code>ResourceRegion</code> that starts with a value other than
     * <code>us</code>.</p> </li> </ul> <p> <code>NOT_CONTAINS</code>,
     * <code>NOT_EQUALS</code>, and <code>PREFIX_NOT_EQUALS</code> filters on the same
     * field are joined by <code>AND</code>. A finding matches only if it matches all
     * of those filters. For example, the filters <code>Title NOT_CONTAINS CloudFront
     * AND Title NOT_CONTAINS CloudWatch</code> match a finding that excludes both
     * <code>CloudFront</code> and <code>CloudWatch</code> in the title.</p> <p>You
     * can’t have both a <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code>
     * filter on the same field. Similarly, you can't provide both an
     * <code>EQUALS</code> filter and a <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filter on the same field. Combining filters in
     * this way returns an error. <code>CONTAINS</code> filters can only be used with
     * other <code>CONTAINS</code> filters. <code>NOT_CONTAINS</code> filters can only
     * be used with other <code>NOT_CONTAINS</code> filters. </p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, and then the <code>NOT_EQUALS</code>
     * or <code>PREFIX_NOT_EQUALS</code> filters.</p> <p>For example, for the following
     * filters, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIam</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul> <p> <code>CONTAINS</code> and
     * <code>NOT_CONTAINS</code> operators can be used only with automation rules. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The condition to apply to a string value when filtering Security Hub
     * findings.</p> <p>To search for values that have the filter value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * include the filter value, use <code>CONTAINS</code>. For example, the filter
     * <code>Title CONTAINS CloudFront</code> matches findings that have a
     * <code>Title</code> that includes the string CloudFront.</p> </li> <li> <p>To
     * search for values that exactly match the filter value, use <code>EQUALS</code>.
     * For example, the filter <code>AwsAccountId EQUALS 123456789012</code> only
     * matches findings that have an account ID of <code>123456789012</code>.</p> </li>
     * <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>. For example, the filter <code>ResourceRegion PREFIX
     * us</code> matches findings that have a <code>ResourceRegion</code> that starts
     * with <code>us</code>. A <code>ResourceRegion</code> that starts with a different
     * value, such as <code>af</code>, <code>ap</code>, or <code>ca</code>, doesn't
     * match.</p> </li> </ul> <p> <code>CONTAINS</code>, <code>EQUALS</code>, and
     * <code>PREFIX</code> filters on the same field are joined by <code>OR</code>. A
     * finding matches if it matches any one of those filters. For example, the filters
     * <code>Title CONTAINS CloudFront OR Title CONTAINS CloudWatch</code> match a
     * finding that includes either <code>CloudFront</code>, <code>CloudWatch</code>,
     * or both strings in the title.</p> <p>To search for values that don’t have the
     * filter value, use one of the following comparison operators:</p> <ul> <li> <p>To
     * search for values that exclude the filter value, use <code>NOT_CONTAINS</code>.
     * For example, the filter <code>Title NOT_CONTAINS CloudFront</code> matches
     * findings that have a <code>Title</code> that excludes the string CloudFront.</p>
     * </li> <li> <p>To search for values other than the filter value, use
     * <code>NOT_EQUALS</code>. For example, the filter <code>AwsAccountId NOT_EQUALS
     * 123456789012</code> only matches findings that have an account ID other than
     * <code>123456789012</code>.</p> </li> <li> <p>To search for values that don't
     * start with the filter value, use <code>PREFIX_NOT_EQUALS</code>. For example,
     * the filter <code>ResourceRegion PREFIX_NOT_EQUALS us</code> matches findings
     * with a <code>ResourceRegion</code> that starts with a value other than
     * <code>us</code>.</p> </li> </ul> <p> <code>NOT_CONTAINS</code>,
     * <code>NOT_EQUALS</code>, and <code>PREFIX_NOT_EQUALS</code> filters on the same
     * field are joined by <code>AND</code>. A finding matches only if it matches all
     * of those filters. For example, the filters <code>Title NOT_CONTAINS CloudFront
     * AND Title NOT_CONTAINS CloudWatch</code> match a finding that excludes both
     * <code>CloudFront</code> and <code>CloudWatch</code> in the title.</p> <p>You
     * can’t have both a <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code>
     * filter on the same field. Similarly, you can't provide both an
     * <code>EQUALS</code> filter and a <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filter on the same field. Combining filters in
     * this way returns an error. <code>CONTAINS</code> filters can only be used with
     * other <code>CONTAINS</code> filters. <code>NOT_CONTAINS</code> filters can only
     * be used with other <code>NOT_CONTAINS</code> filters. </p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, and then the <code>NOT_EQUALS</code>
     * or <code>PREFIX_NOT_EQUALS</code> filters.</p> <p>For example, for the following
     * filters, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIam</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul> <p> <code>CONTAINS</code> and
     * <code>NOT_CONTAINS</code> operators can be used only with automation rules. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline void SetComparison(const StringFilterComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The condition to apply to a string value when filtering Security Hub
     * findings.</p> <p>To search for values that have the filter value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * include the filter value, use <code>CONTAINS</code>. For example, the filter
     * <code>Title CONTAINS CloudFront</code> matches findings that have a
     * <code>Title</code> that includes the string CloudFront.</p> </li> <li> <p>To
     * search for values that exactly match the filter value, use <code>EQUALS</code>.
     * For example, the filter <code>AwsAccountId EQUALS 123456789012</code> only
     * matches findings that have an account ID of <code>123456789012</code>.</p> </li>
     * <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>. For example, the filter <code>ResourceRegion PREFIX
     * us</code> matches findings that have a <code>ResourceRegion</code> that starts
     * with <code>us</code>. A <code>ResourceRegion</code> that starts with a different
     * value, such as <code>af</code>, <code>ap</code>, or <code>ca</code>, doesn't
     * match.</p> </li> </ul> <p> <code>CONTAINS</code>, <code>EQUALS</code>, and
     * <code>PREFIX</code> filters on the same field are joined by <code>OR</code>. A
     * finding matches if it matches any one of those filters. For example, the filters
     * <code>Title CONTAINS CloudFront OR Title CONTAINS CloudWatch</code> match a
     * finding that includes either <code>CloudFront</code>, <code>CloudWatch</code>,
     * or both strings in the title.</p> <p>To search for values that don’t have the
     * filter value, use one of the following comparison operators:</p> <ul> <li> <p>To
     * search for values that exclude the filter value, use <code>NOT_CONTAINS</code>.
     * For example, the filter <code>Title NOT_CONTAINS CloudFront</code> matches
     * findings that have a <code>Title</code> that excludes the string CloudFront.</p>
     * </li> <li> <p>To search for values other than the filter value, use
     * <code>NOT_EQUALS</code>. For example, the filter <code>AwsAccountId NOT_EQUALS
     * 123456789012</code> only matches findings that have an account ID other than
     * <code>123456789012</code>.</p> </li> <li> <p>To search for values that don't
     * start with the filter value, use <code>PREFIX_NOT_EQUALS</code>. For example,
     * the filter <code>ResourceRegion PREFIX_NOT_EQUALS us</code> matches findings
     * with a <code>ResourceRegion</code> that starts with a value other than
     * <code>us</code>.</p> </li> </ul> <p> <code>NOT_CONTAINS</code>,
     * <code>NOT_EQUALS</code>, and <code>PREFIX_NOT_EQUALS</code> filters on the same
     * field are joined by <code>AND</code>. A finding matches only if it matches all
     * of those filters. For example, the filters <code>Title NOT_CONTAINS CloudFront
     * AND Title NOT_CONTAINS CloudWatch</code> match a finding that excludes both
     * <code>CloudFront</code> and <code>CloudWatch</code> in the title.</p> <p>You
     * can’t have both a <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code>
     * filter on the same field. Similarly, you can't provide both an
     * <code>EQUALS</code> filter and a <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filter on the same field. Combining filters in
     * this way returns an error. <code>CONTAINS</code> filters can only be used with
     * other <code>CONTAINS</code> filters. <code>NOT_CONTAINS</code> filters can only
     * be used with other <code>NOT_CONTAINS</code> filters. </p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, and then the <code>NOT_EQUALS</code>
     * or <code>PREFIX_NOT_EQUALS</code> filters.</p> <p>For example, for the following
     * filters, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIam</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul> <p> <code>CONTAINS</code> and
     * <code>NOT_CONTAINS</code> operators can be used only with automation rules. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline void SetComparison(StringFilterComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The condition to apply to a string value when filtering Security Hub
     * findings.</p> <p>To search for values that have the filter value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * include the filter value, use <code>CONTAINS</code>. For example, the filter
     * <code>Title CONTAINS CloudFront</code> matches findings that have a
     * <code>Title</code> that includes the string CloudFront.</p> </li> <li> <p>To
     * search for values that exactly match the filter value, use <code>EQUALS</code>.
     * For example, the filter <code>AwsAccountId EQUALS 123456789012</code> only
     * matches findings that have an account ID of <code>123456789012</code>.</p> </li>
     * <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>. For example, the filter <code>ResourceRegion PREFIX
     * us</code> matches findings that have a <code>ResourceRegion</code> that starts
     * with <code>us</code>. A <code>ResourceRegion</code> that starts with a different
     * value, such as <code>af</code>, <code>ap</code>, or <code>ca</code>, doesn't
     * match.</p> </li> </ul> <p> <code>CONTAINS</code>, <code>EQUALS</code>, and
     * <code>PREFIX</code> filters on the same field are joined by <code>OR</code>. A
     * finding matches if it matches any one of those filters. For example, the filters
     * <code>Title CONTAINS CloudFront OR Title CONTAINS CloudWatch</code> match a
     * finding that includes either <code>CloudFront</code>, <code>CloudWatch</code>,
     * or both strings in the title.</p> <p>To search for values that don’t have the
     * filter value, use one of the following comparison operators:</p> <ul> <li> <p>To
     * search for values that exclude the filter value, use <code>NOT_CONTAINS</code>.
     * For example, the filter <code>Title NOT_CONTAINS CloudFront</code> matches
     * findings that have a <code>Title</code> that excludes the string CloudFront.</p>
     * </li> <li> <p>To search for values other than the filter value, use
     * <code>NOT_EQUALS</code>. For example, the filter <code>AwsAccountId NOT_EQUALS
     * 123456789012</code> only matches findings that have an account ID other than
     * <code>123456789012</code>.</p> </li> <li> <p>To search for values that don't
     * start with the filter value, use <code>PREFIX_NOT_EQUALS</code>. For example,
     * the filter <code>ResourceRegion PREFIX_NOT_EQUALS us</code> matches findings
     * with a <code>ResourceRegion</code> that starts with a value other than
     * <code>us</code>.</p> </li> </ul> <p> <code>NOT_CONTAINS</code>,
     * <code>NOT_EQUALS</code>, and <code>PREFIX_NOT_EQUALS</code> filters on the same
     * field are joined by <code>AND</code>. A finding matches only if it matches all
     * of those filters. For example, the filters <code>Title NOT_CONTAINS CloudFront
     * AND Title NOT_CONTAINS CloudWatch</code> match a finding that excludes both
     * <code>CloudFront</code> and <code>CloudWatch</code> in the title.</p> <p>You
     * can’t have both a <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code>
     * filter on the same field. Similarly, you can't provide both an
     * <code>EQUALS</code> filter and a <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filter on the same field. Combining filters in
     * this way returns an error. <code>CONTAINS</code> filters can only be used with
     * other <code>CONTAINS</code> filters. <code>NOT_CONTAINS</code> filters can only
     * be used with other <code>NOT_CONTAINS</code> filters. </p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, and then the <code>NOT_EQUALS</code>
     * or <code>PREFIX_NOT_EQUALS</code> filters.</p> <p>For example, for the following
     * filters, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIam</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul> <p> <code>CONTAINS</code> and
     * <code>NOT_CONTAINS</code> operators can be used only with automation rules. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline StringFilter& WithComparison(const StringFilterComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The condition to apply to a string value when filtering Security Hub
     * findings.</p> <p>To search for values that have the filter value, use one of the
     * following comparison operators:</p> <ul> <li> <p>To search for values that
     * include the filter value, use <code>CONTAINS</code>. For example, the filter
     * <code>Title CONTAINS CloudFront</code> matches findings that have a
     * <code>Title</code> that includes the string CloudFront.</p> </li> <li> <p>To
     * search for values that exactly match the filter value, use <code>EQUALS</code>.
     * For example, the filter <code>AwsAccountId EQUALS 123456789012</code> only
     * matches findings that have an account ID of <code>123456789012</code>.</p> </li>
     * <li> <p>To search for values that start with the filter value, use
     * <code>PREFIX</code>. For example, the filter <code>ResourceRegion PREFIX
     * us</code> matches findings that have a <code>ResourceRegion</code> that starts
     * with <code>us</code>. A <code>ResourceRegion</code> that starts with a different
     * value, such as <code>af</code>, <code>ap</code>, or <code>ca</code>, doesn't
     * match.</p> </li> </ul> <p> <code>CONTAINS</code>, <code>EQUALS</code>, and
     * <code>PREFIX</code> filters on the same field are joined by <code>OR</code>. A
     * finding matches if it matches any one of those filters. For example, the filters
     * <code>Title CONTAINS CloudFront OR Title CONTAINS CloudWatch</code> match a
     * finding that includes either <code>CloudFront</code>, <code>CloudWatch</code>,
     * or both strings in the title.</p> <p>To search for values that don’t have the
     * filter value, use one of the following comparison operators:</p> <ul> <li> <p>To
     * search for values that exclude the filter value, use <code>NOT_CONTAINS</code>.
     * For example, the filter <code>Title NOT_CONTAINS CloudFront</code> matches
     * findings that have a <code>Title</code> that excludes the string CloudFront.</p>
     * </li> <li> <p>To search for values other than the filter value, use
     * <code>NOT_EQUALS</code>. For example, the filter <code>AwsAccountId NOT_EQUALS
     * 123456789012</code> only matches findings that have an account ID other than
     * <code>123456789012</code>.</p> </li> <li> <p>To search for values that don't
     * start with the filter value, use <code>PREFIX_NOT_EQUALS</code>. For example,
     * the filter <code>ResourceRegion PREFIX_NOT_EQUALS us</code> matches findings
     * with a <code>ResourceRegion</code> that starts with a value other than
     * <code>us</code>.</p> </li> </ul> <p> <code>NOT_CONTAINS</code>,
     * <code>NOT_EQUALS</code>, and <code>PREFIX_NOT_EQUALS</code> filters on the same
     * field are joined by <code>AND</code>. A finding matches only if it matches all
     * of those filters. For example, the filters <code>Title NOT_CONTAINS CloudFront
     * AND Title NOT_CONTAINS CloudWatch</code> match a finding that excludes both
     * <code>CloudFront</code> and <code>CloudWatch</code> in the title.</p> <p>You
     * can’t have both a <code>CONTAINS</code> filter and a <code>NOT_CONTAINS</code>
     * filter on the same field. Similarly, you can't provide both an
     * <code>EQUALS</code> filter and a <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filter on the same field. Combining filters in
     * this way returns an error. <code>CONTAINS</code> filters can only be used with
     * other <code>CONTAINS</code> filters. <code>NOT_CONTAINS</code> filters can only
     * be used with other <code>NOT_CONTAINS</code> filters. </p> <p>You can combine
     * <code>PREFIX</code> filters with <code>NOT_EQUALS</code> or
     * <code>PREFIX_NOT_EQUALS</code> filters for the same field. Security Hub first
     * processes the <code>PREFIX</code> filters, and then the <code>NOT_EQUALS</code>
     * or <code>PREFIX_NOT_EQUALS</code> filters.</p> <p>For example, for the following
     * filters, Security Hub first identifies findings that have resource types that
     * start with either <code>AwsIam</code> or <code>AwsEc2</code>. It then excludes
     * findings that have a resource type of <code>AwsIamPolicy</code> and findings
     * that have a resource type of <code>AwsEc2NetworkInterface</code>.</p> <ul> <li>
     * <p> <code>ResourceType PREFIX AwsIam</code> </p> </li> <li> <p>
     * <code>ResourceType PREFIX AwsEc2</code> </p> </li> <li> <p> <code>ResourceType
     * NOT_EQUALS AwsIamPolicy</code> </p> </li> <li> <p> <code>ResourceType NOT_EQUALS
     * AwsEc2NetworkInterface</code> </p> </li> </ul> <p> <code>CONTAINS</code> and
     * <code>NOT_CONTAINS</code> operators can be used only with automation rules. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/automation-rules.html">Automation
     * rules</a> in the <i>Security Hub User Guide</i>.</p>
     */
    inline StringFilter& WithComparison(StringFilterComparison&& value) { SetComparison(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    StringFilterComparison m_comparison;
    bool m_comparisonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
