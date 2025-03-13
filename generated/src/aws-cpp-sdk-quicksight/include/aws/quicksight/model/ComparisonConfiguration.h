/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ComparisonMethod.h>
#include <aws/quicksight/model/ComparisonFormatConfiguration.h>
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
   * <p>The comparison display configuration of a KPI or gauge chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComparisonConfiguration">AWS
   * API Reference</a></p>
   */
  class ComparisonConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ComparisonConfiguration() = default;
    AWS_QUICKSIGHT_API ComparisonConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComparisonConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline ComparisonMethod GetComparisonMethod() const { return m_comparisonMethod; }
    inline bool ComparisonMethodHasBeenSet() const { return m_comparisonMethodHasBeenSet; }
    inline void SetComparisonMethod(ComparisonMethod value) { m_comparisonMethodHasBeenSet = true; m_comparisonMethod = value; }
    inline ComparisonConfiguration& WithComparisonMethod(ComparisonMethod value) { SetComparisonMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the comparison.</p>
     */
    inline const ComparisonFormatConfiguration& GetComparisonFormat() const { return m_comparisonFormat; }
    inline bool ComparisonFormatHasBeenSet() const { return m_comparisonFormatHasBeenSet; }
    template<typename ComparisonFormatT = ComparisonFormatConfiguration>
    void SetComparisonFormat(ComparisonFormatT&& value) { m_comparisonFormatHasBeenSet = true; m_comparisonFormat = std::forward<ComparisonFormatT>(value); }
    template<typename ComparisonFormatT = ComparisonFormatConfiguration>
    ComparisonConfiguration& WithComparisonFormat(ComparisonFormatT&& value) { SetComparisonFormat(std::forward<ComparisonFormatT>(value)); return *this;}
    ///@}
  private:

    ComparisonMethod m_comparisonMethod{ComparisonMethod::NOT_SET};
    bool m_comparisonMethodHasBeenSet = false;

    ComparisonFormatConfiguration m_comparisonFormat;
    bool m_comparisonFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
