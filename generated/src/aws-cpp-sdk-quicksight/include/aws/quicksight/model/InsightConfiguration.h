/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CustomNarrativeOptions.h>
#include <aws/quicksight/model/Computation.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of an insight visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InsightConfiguration">AWS
   * API Reference</a></p>
   */
  class InsightConfiguration
  {
  public:
    AWS_QUICKSIGHT_API InsightConfiguration();
    AWS_QUICKSIGHT_API InsightConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API InsightConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline const Aws::Vector<Computation>& GetComputations() const{ return m_computations; }

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline bool ComputationsHasBeenSet() const { return m_computationsHasBeenSet; }

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline void SetComputations(const Aws::Vector<Computation>& value) { m_computationsHasBeenSet = true; m_computations = value; }

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline void SetComputations(Aws::Vector<Computation>&& value) { m_computationsHasBeenSet = true; m_computations = std::move(value); }

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline InsightConfiguration& WithComputations(const Aws::Vector<Computation>& value) { SetComputations(value); return *this;}

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline InsightConfiguration& WithComputations(Aws::Vector<Computation>&& value) { SetComputations(std::move(value)); return *this;}

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline InsightConfiguration& AddComputations(const Computation& value) { m_computationsHasBeenSet = true; m_computations.push_back(value); return *this; }

    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline InsightConfiguration& AddComputations(Computation&& value) { m_computationsHasBeenSet = true; m_computations.push_back(std::move(value)); return *this; }


    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline const CustomNarrativeOptions& GetCustomNarrative() const{ return m_customNarrative; }

    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline bool CustomNarrativeHasBeenSet() const { return m_customNarrativeHasBeenSet; }

    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline void SetCustomNarrative(const CustomNarrativeOptions& value) { m_customNarrativeHasBeenSet = true; m_customNarrative = value; }

    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline void SetCustomNarrative(CustomNarrativeOptions&& value) { m_customNarrativeHasBeenSet = true; m_customNarrative = std::move(value); }

    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline InsightConfiguration& WithCustomNarrative(const CustomNarrativeOptions& value) { SetCustomNarrative(value); return *this;}

    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline InsightConfiguration& WithCustomNarrative(CustomNarrativeOptions&& value) { SetCustomNarrative(std::move(value)); return *this;}

  private:

    Aws::Vector<Computation> m_computations;
    bool m_computationsHasBeenSet = false;

    CustomNarrativeOptions m_customNarrative;
    bool m_customNarrativeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
