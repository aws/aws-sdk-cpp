/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/ProbabilisticRuleValueUpdate.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p> Update to an indexing rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/IndexingRuleValueUpdate">AWS
   * API Reference</a></p>
   */
  class IndexingRuleValueUpdate
  {
  public:
    AWS_XRAY_API IndexingRuleValueUpdate();
    AWS_XRAY_API IndexingRuleValueUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API IndexingRuleValueUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indexing rule configuration that is used to probabilistically sample
     * traceIds. </p>
     */
    inline const ProbabilisticRuleValueUpdate& GetProbabilistic() const{ return m_probabilistic; }
    inline bool ProbabilisticHasBeenSet() const { return m_probabilisticHasBeenSet; }
    inline void SetProbabilistic(const ProbabilisticRuleValueUpdate& value) { m_probabilisticHasBeenSet = true; m_probabilistic = value; }
    inline void SetProbabilistic(ProbabilisticRuleValueUpdate&& value) { m_probabilisticHasBeenSet = true; m_probabilistic = std::move(value); }
    inline IndexingRuleValueUpdate& WithProbabilistic(const ProbabilisticRuleValueUpdate& value) { SetProbabilistic(value); return *this;}
    inline IndexingRuleValueUpdate& WithProbabilistic(ProbabilisticRuleValueUpdate&& value) { SetProbabilistic(std::move(value)); return *this;}
    ///@}
  private:

    ProbabilisticRuleValueUpdate m_probabilistic;
    bool m_probabilisticHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
