/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KPIVisualStandardLayout.h>
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
   * <p>The options that determine the layout a KPI visual.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIVisualLayoutOptions">AWS
   * API Reference</a></p>
   */
  class KPIVisualLayoutOptions
  {
  public:
    AWS_QUICKSIGHT_API KPIVisualLayoutOptions() = default;
    AWS_QUICKSIGHT_API KPIVisualLayoutOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIVisualLayoutOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The standard layout of the KPI visual.</p>
     */
    inline const KPIVisualStandardLayout& GetStandardLayout() const { return m_standardLayout; }
    inline bool StandardLayoutHasBeenSet() const { return m_standardLayoutHasBeenSet; }
    template<typename StandardLayoutT = KPIVisualStandardLayout>
    void SetStandardLayout(StandardLayoutT&& value) { m_standardLayoutHasBeenSet = true; m_standardLayout = std::forward<StandardLayoutT>(value); }
    template<typename StandardLayoutT = KPIVisualStandardLayout>
    KPIVisualLayoutOptions& WithStandardLayout(StandardLayoutT&& value) { SetStandardLayout(std::forward<StandardLayoutT>(value)); return *this;}
    ///@}
  private:

    KPIVisualStandardLayout m_standardLayout;
    bool m_standardLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
