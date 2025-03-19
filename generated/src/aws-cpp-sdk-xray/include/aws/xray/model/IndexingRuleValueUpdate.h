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
    AWS_XRAY_API IndexingRuleValueUpdate() = default;
    AWS_XRAY_API IndexingRuleValueUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API IndexingRuleValueUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indexing rule configuration that is used to probabilistically sample
     * traceIds. </p>
     */
    inline const ProbabilisticRuleValueUpdate& GetProbabilistic() const { return m_probabilistic; }
    inline bool ProbabilisticHasBeenSet() const { return m_probabilisticHasBeenSet; }
    template<typename ProbabilisticT = ProbabilisticRuleValueUpdate>
    void SetProbabilistic(ProbabilisticT&& value) { m_probabilisticHasBeenSet = true; m_probabilistic = std::forward<ProbabilisticT>(value); }
    template<typename ProbabilisticT = ProbabilisticRuleValueUpdate>
    IndexingRuleValueUpdate& WithProbabilistic(ProbabilisticT&& value) { SetProbabilistic(std::forward<ProbabilisticT>(value)); return *this;}
    ///@}
  private:

    ProbabilisticRuleValueUpdate m_probabilistic;
    bool m_probabilisticHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
