﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/SeveritySummary.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A summary of resources that are compliant. The summary is organized according
   * to the resource count for each compliance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CompliantSummary">AWS
   * API Reference</a></p>
   */
  class CompliantSummary
  {
  public:
    AWS_SSM_API CompliantSummary() = default;
    AWS_SSM_API CompliantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CompliantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of resources that are compliant.</p>
     */
    inline int GetCompliantCount() const { return m_compliantCount; }
    inline bool CompliantCountHasBeenSet() const { return m_compliantCountHasBeenSet; }
    inline void SetCompliantCount(int value) { m_compliantCountHasBeenSet = true; m_compliantCount = value; }
    inline CompliantSummary& WithCompliantCount(int value) { SetCompliantCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the compliance severity by compliance type.</p>
     */
    inline const SeveritySummary& GetSeveritySummary() const { return m_severitySummary; }
    inline bool SeveritySummaryHasBeenSet() const { return m_severitySummaryHasBeenSet; }
    template<typename SeveritySummaryT = SeveritySummary>
    void SetSeveritySummary(SeveritySummaryT&& value) { m_severitySummaryHasBeenSet = true; m_severitySummary = std::forward<SeveritySummaryT>(value); }
    template<typename SeveritySummaryT = SeveritySummary>
    CompliantSummary& WithSeveritySummary(SeveritySummaryT&& value) { SetSeveritySummary(std::forward<SeveritySummaryT>(value)); return *this;}
    ///@}
  private:

    int m_compliantCount{0};
    bool m_compliantCountHasBeenSet = false;

    SeveritySummary m_severitySummary;
    bool m_severitySummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
