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
   * <p>A summary of resources that aren't compliant. The summary is organized
   * according to resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/NonCompliantSummary">AWS
   * API Reference</a></p>
   */
  class NonCompliantSummary
  {
  public:
    AWS_SSM_API NonCompliantSummary() = default;
    AWS_SSM_API NonCompliantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NonCompliantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of compliance items that aren't compliant.</p>
     */
    inline int GetNonCompliantCount() const { return m_nonCompliantCount; }
    inline bool NonCompliantCountHasBeenSet() const { return m_nonCompliantCountHasBeenSet; }
    inline void SetNonCompliantCount(int value) { m_nonCompliantCountHasBeenSet = true; m_nonCompliantCount = value; }
    inline NonCompliantSummary& WithNonCompliantCount(int value) { SetNonCompliantCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline const SeveritySummary& GetSeveritySummary() const { return m_severitySummary; }
    inline bool SeveritySummaryHasBeenSet() const { return m_severitySummaryHasBeenSet; }
    template<typename SeveritySummaryT = SeveritySummary>
    void SetSeveritySummary(SeveritySummaryT&& value) { m_severitySummaryHasBeenSet = true; m_severitySummary = std::forward<SeveritySummaryT>(value); }
    template<typename SeveritySummaryT = SeveritySummary>
    NonCompliantSummary& WithSeveritySummary(SeveritySummaryT&& value) { SetSeveritySummary(std::forward<SeveritySummaryT>(value)); return *this;}
    ///@}
  private:

    int m_nonCompliantCount{0};
    bool m_nonCompliantCountHasBeenSet = false;

    SeveritySummary m_severitySummary;
    bool m_severitySummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
