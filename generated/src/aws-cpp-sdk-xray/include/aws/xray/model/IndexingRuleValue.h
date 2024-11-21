﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/ProbabilisticRuleValue.h>
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
   * <p> The indexing rule configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/IndexingRuleValue">AWS
   * API Reference</a></p>
   */
  class IndexingRuleValue
  {
  public:
    AWS_XRAY_API IndexingRuleValue();
    AWS_XRAY_API IndexingRuleValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API IndexingRuleValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indexing rule configuration that is used to probabilistically sample
     * traceIds. </p>
     */
    inline const ProbabilisticRuleValue& GetProbabilistic() const{ return m_probabilistic; }
    inline bool ProbabilisticHasBeenSet() const { return m_probabilisticHasBeenSet; }
    inline void SetProbabilistic(const ProbabilisticRuleValue& value) { m_probabilisticHasBeenSet = true; m_probabilistic = value; }
    inline void SetProbabilistic(ProbabilisticRuleValue&& value) { m_probabilisticHasBeenSet = true; m_probabilistic = std::move(value); }
    inline IndexingRuleValue& WithProbabilistic(const ProbabilisticRuleValue& value) { SetProbabilistic(value); return *this;}
    inline IndexingRuleValue& WithProbabilistic(ProbabilisticRuleValue&& value) { SetProbabilistic(std::move(value)); return *this;}
    ///@}
  private:

    ProbabilisticRuleValue m_probabilistic;
    bool m_probabilisticHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
