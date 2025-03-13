/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/InsightResultValue.h>
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
   * <p>The insight results returned by the <code>GetInsightResults</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InsightResults">AWS
   * API Reference</a></p>
   */
  class InsightResults
  {
  public:
    AWS_SECURITYHUB_API InsightResults() = default;
    AWS_SECURITYHUB_API InsightResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API InsightResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::String& GetInsightArn() const { return m_insightArn; }
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }
    template<typename InsightArnT = Aws::String>
    void SetInsightArn(InsightArnT&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::forward<InsightArnT>(value); }
    template<typename InsightArnT = Aws::String>
    InsightResults& WithInsightArn(InsightArnT&& value) { SetInsightArn(std::forward<InsightArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const { return m_groupByAttribute; }
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }
    template<typename GroupByAttributeT = Aws::String>
    void SetGroupByAttribute(GroupByAttributeT&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::forward<GroupByAttributeT>(value); }
    template<typename GroupByAttributeT = Aws::String>
    InsightResults& WithGroupByAttribute(GroupByAttributeT&& value) { SetGroupByAttribute(std::forward<GroupByAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::Vector<InsightResultValue>& GetResultValues() const { return m_resultValues; }
    inline bool ResultValuesHasBeenSet() const { return m_resultValuesHasBeenSet; }
    template<typename ResultValuesT = Aws::Vector<InsightResultValue>>
    void SetResultValues(ResultValuesT&& value) { m_resultValuesHasBeenSet = true; m_resultValues = std::forward<ResultValuesT>(value); }
    template<typename ResultValuesT = Aws::Vector<InsightResultValue>>
    InsightResults& WithResultValues(ResultValuesT&& value) { SetResultValues(std::forward<ResultValuesT>(value)); return *this;}
    template<typename ResultValuesT = InsightResultValue>
    InsightResults& AddResultValues(ResultValuesT&& value) { m_resultValuesHasBeenSet = true; m_resultValues.emplace_back(std::forward<ResultValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet = false;

    Aws::String m_groupByAttribute;
    bool m_groupByAttributeHasBeenSet = false;

    Aws::Vector<InsightResultValue> m_resultValues;
    bool m_resultValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
