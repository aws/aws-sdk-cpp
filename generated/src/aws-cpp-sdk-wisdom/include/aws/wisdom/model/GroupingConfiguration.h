/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The configuration information of the grouping of Wisdom users.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GroupingConfiguration">AWS
   * API Reference</a></p>
   */
  class GroupingConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GroupingConfiguration();
    AWS_CONNECTWISDOMSERVICE_API GroupingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API GroupingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline const Aws::String& GetCriteria() const{ return m_criteria; }

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline void SetCriteria(const Aws::String& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline void SetCriteria(Aws::String&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline void SetCriteria(const char* value) { m_criteriaHasBeenSet = true; m_criteria.assign(value); }

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline GroupingConfiguration& WithCriteria(const Aws::String& value) { SetCriteria(value); return *this;}

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline GroupingConfiguration& WithCriteria(Aws::String&& value) { SetCriteria(std::move(value)); return *this;}

    /**
     * <p>The criteria used for grouping Wisdom users.</p> <p>The following is the list
     * of supported criteria values.</p> <ul> <li> <p> <code>RoutingProfileArn</code>:
     * Grouping the users by their <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profile ARN</a>. User should have <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchRoutingProfiles.html">SearchRoutingProfile</a>
     * and <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeRoutingProfile.html">DescribeRoutingProfile</a>
     * permissions when setting criteria to this value.</p> </li> </ul>
     */
    inline GroupingConfiguration& WithCriteria(const char* value) { SetCriteria(value); return *this;}


    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline GroupingConfiguration& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline GroupingConfiguration& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline GroupingConfiguration& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline GroupingConfiguration& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values that define different groups of Wisdom users.</p> <ul>
     * <li> <p>When setting <code>criteria</code> to <code>RoutingProfileArn</code>,
     * you need to provide a list of ARNs of <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_RoutingProfile.html">Amazon
     * Connect routing profiles</a> as values of this parameter.</p> </li> </ul>
     */
    inline GroupingConfiguration& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
