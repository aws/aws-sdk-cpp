/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/FilterRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>A container for object key name prefix and suffix filtering
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/S3KeyFilter">AWS API
   * Reference</a></p>
   */
  class S3KeyFilter
  {
  public:
    AWS_S3_API S3KeyFilter() = default;
    AWS_S3_API S3KeyFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API S3KeyFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::Vector<FilterRule>& GetFilterRules() const { return m_filterRules; }
    inline bool FilterRulesHasBeenSet() const { return m_filterRulesHasBeenSet; }
    template<typename FilterRulesT = Aws::Vector<FilterRule>>
    void SetFilterRules(FilterRulesT&& value) { m_filterRulesHasBeenSet = true; m_filterRules = std::forward<FilterRulesT>(value); }
    template<typename FilterRulesT = Aws::Vector<FilterRule>>
    S3KeyFilter& WithFilterRules(FilterRulesT&& value) { SetFilterRules(std::forward<FilterRulesT>(value)); return *this;}
    template<typename FilterRulesT = FilterRule>
    S3KeyFilter& AddFilterRules(FilterRulesT&& value) { m_filterRulesHasBeenSet = true; m_filterRules.emplace_back(std::forward<FilterRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FilterRule> m_filterRules;
    bool m_filterRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
