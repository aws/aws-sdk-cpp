﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CascadingControlSource.h>
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
   * <p>The values that are displayed in a control can be configured to only show
   * values that are valid based on what's selected in other controls.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CascadingControlConfiguration">AWS
   * API Reference</a></p>
   */
  class CascadingControlConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CascadingControlConfiguration() = default;
    AWS_QUICKSIGHT_API CascadingControlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CascadingControlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of source controls that determine the values that are used in the
     * current control.</p>
     */
    inline const Aws::Vector<CascadingControlSource>& GetSourceControls() const { return m_sourceControls; }
    inline bool SourceControlsHasBeenSet() const { return m_sourceControlsHasBeenSet; }
    template<typename SourceControlsT = Aws::Vector<CascadingControlSource>>
    void SetSourceControls(SourceControlsT&& value) { m_sourceControlsHasBeenSet = true; m_sourceControls = std::forward<SourceControlsT>(value); }
    template<typename SourceControlsT = Aws::Vector<CascadingControlSource>>
    CascadingControlConfiguration& WithSourceControls(SourceControlsT&& value) { SetSourceControls(std::forward<SourceControlsT>(value)); return *this;}
    template<typename SourceControlsT = CascadingControlSource>
    CascadingControlConfiguration& AddSourceControls(SourceControlsT&& value) { m_sourceControlsHasBeenSet = true; m_sourceControls.emplace_back(std::forward<SourceControlsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CascadingControlSource> m_sourceControls;
    bool m_sourceControlsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
