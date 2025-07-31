/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/ToolbarType.h>
#include <aws/workspaces-web/model/VisualMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/MaxDisplayResolution.h>
#include <aws/workspaces-web/model/ToolbarItem.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The configuration of the toolbar. This allows administrators to select the
   * toolbar type and visual mode, set maximum display resolution for sessions, and
   * choose which items are visible to end users during their sessions. If
   * administrators do not modify these settings, end users retain control over their
   * toolbar preferences.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ToolbarConfiguration">AWS
   * API Reference</a></p>
   */
  class ToolbarConfiguration
  {
  public:
    AWS_WORKSPACESWEB_API ToolbarConfiguration() = default;
    AWS_WORKSPACESWEB_API ToolbarConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API ToolbarConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of toolbar displayed during the session.</p>
     */
    inline ToolbarType GetToolbarType() const { return m_toolbarType; }
    inline bool ToolbarTypeHasBeenSet() const { return m_toolbarTypeHasBeenSet; }
    inline void SetToolbarType(ToolbarType value) { m_toolbarTypeHasBeenSet = true; m_toolbarType = value; }
    inline ToolbarConfiguration& WithToolbarType(ToolbarType value) { SetToolbarType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual mode of the toolbar.</p>
     */
    inline VisualMode GetVisualMode() const { return m_visualMode; }
    inline bool VisualModeHasBeenSet() const { return m_visualModeHasBeenSet; }
    inline void SetVisualMode(VisualMode value) { m_visualModeHasBeenSet = true; m_visualMode = value; }
    inline ToolbarConfiguration& WithVisualMode(VisualMode value) { SetVisualMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of toolbar items to be hidden.</p>
     */
    inline const Aws::Vector<ToolbarItem>& GetHiddenToolbarItems() const { return m_hiddenToolbarItems; }
    inline bool HiddenToolbarItemsHasBeenSet() const { return m_hiddenToolbarItemsHasBeenSet; }
    template<typename HiddenToolbarItemsT = Aws::Vector<ToolbarItem>>
    void SetHiddenToolbarItems(HiddenToolbarItemsT&& value) { m_hiddenToolbarItemsHasBeenSet = true; m_hiddenToolbarItems = std::forward<HiddenToolbarItemsT>(value); }
    template<typename HiddenToolbarItemsT = Aws::Vector<ToolbarItem>>
    ToolbarConfiguration& WithHiddenToolbarItems(HiddenToolbarItemsT&& value) { SetHiddenToolbarItems(std::forward<HiddenToolbarItemsT>(value)); return *this;}
    inline ToolbarConfiguration& AddHiddenToolbarItems(ToolbarItem value) { m_hiddenToolbarItemsHasBeenSet = true; m_hiddenToolbarItems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum display resolution that is allowed for the session.</p>
     */
    inline MaxDisplayResolution GetMaxDisplayResolution() const { return m_maxDisplayResolution; }
    inline bool MaxDisplayResolutionHasBeenSet() const { return m_maxDisplayResolutionHasBeenSet; }
    inline void SetMaxDisplayResolution(MaxDisplayResolution value) { m_maxDisplayResolutionHasBeenSet = true; m_maxDisplayResolution = value; }
    inline ToolbarConfiguration& WithMaxDisplayResolution(MaxDisplayResolution value) { SetMaxDisplayResolution(value); return *this;}
    ///@}
  private:

    ToolbarType m_toolbarType{ToolbarType::NOT_SET};
    bool m_toolbarTypeHasBeenSet = false;

    VisualMode m_visualMode{VisualMode::NOT_SET};
    bool m_visualModeHasBeenSet = false;

    Aws::Vector<ToolbarItem> m_hiddenToolbarItems;
    bool m_hiddenToolbarItemsHasBeenSet = false;

    MaxDisplayResolution m_maxDisplayResolution{MaxDisplayResolution::NOT_SET};
    bool m_maxDisplayResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
