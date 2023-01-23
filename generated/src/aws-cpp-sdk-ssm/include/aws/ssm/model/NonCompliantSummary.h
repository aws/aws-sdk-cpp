/**
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
    AWS_SSM_API NonCompliantSummary();
    AWS_SSM_API NonCompliantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API NonCompliantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of compliance items that aren't compliant.</p>
     */
    inline int GetNonCompliantCount() const{ return m_nonCompliantCount; }

    /**
     * <p>The total number of compliance items that aren't compliant.</p>
     */
    inline bool NonCompliantCountHasBeenSet() const { return m_nonCompliantCountHasBeenSet; }

    /**
     * <p>The total number of compliance items that aren't compliant.</p>
     */
    inline void SetNonCompliantCount(int value) { m_nonCompliantCountHasBeenSet = true; m_nonCompliantCount = value; }

    /**
     * <p>The total number of compliance items that aren't compliant.</p>
     */
    inline NonCompliantSummary& WithNonCompliantCount(int value) { SetNonCompliantCount(value); return *this;}


    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline const SeveritySummary& GetSeveritySummary() const{ return m_severitySummary; }

    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline bool SeveritySummaryHasBeenSet() const { return m_severitySummaryHasBeenSet; }

    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline void SetSeveritySummary(const SeveritySummary& value) { m_severitySummaryHasBeenSet = true; m_severitySummary = value; }

    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline void SetSeveritySummary(SeveritySummary&& value) { m_severitySummaryHasBeenSet = true; m_severitySummary = std::move(value); }

    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline NonCompliantSummary& WithSeveritySummary(const SeveritySummary& value) { SetSeveritySummary(value); return *this;}

    /**
     * <p>A summary of the non-compliance severity by compliance type</p>
     */
    inline NonCompliantSummary& WithSeveritySummary(SeveritySummary&& value) { SetSeveritySummary(std::move(value)); return *this;}

  private:

    int m_nonCompliantCount;
    bool m_nonCompliantCountHasBeenSet = false;

    SeveritySummary m_severitySummary;
    bool m_severitySummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
