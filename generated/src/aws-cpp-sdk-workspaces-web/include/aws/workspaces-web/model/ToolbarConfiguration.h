/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/MaxDisplayResolution.h>
#include <aws/workspaces-web/model/ToolbarType.h>
#include <aws/workspaces-web/model/VisualMode.h>
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
    AWS_WORKSPACESWEB_API ToolbarConfiguration();
    AWS_WORKSPACESWEB_API ToolbarConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API ToolbarConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of toolbar items to be hidden.</p>
     */
    inline const Aws::Vector<ToolbarItem>& GetHiddenToolbarItems() const{ return m_hiddenToolbarItems; }
    inline bool HiddenToolbarItemsHasBeenSet() const { return m_hiddenToolbarItemsHasBeenSet; }
    inline void SetHiddenToolbarItems(const Aws::Vector<ToolbarItem>& value) { m_hiddenToolbarItemsHasBeenSet = true; m_hiddenToolbarItems = value; }
    inline void SetHiddenToolbarItems(Aws::Vector<ToolbarItem>&& value) { m_hiddenToolbarItemsHasBeenSet = true; m_hiddenToolbarItems = std::move(value); }
    inline ToolbarConfiguration& WithHiddenToolbarItems(const Aws::Vector<ToolbarItem>& value) { SetHiddenToolbarItems(value); return *this;}
    inline ToolbarConfiguration& WithHiddenToolbarItems(Aws::Vector<ToolbarItem>&& value) { SetHiddenToolbarItems(std::move(value)); return *this;}
    inline ToolbarConfiguration& AddHiddenToolbarItems(const ToolbarItem& value) { m_hiddenToolbarItemsHasBeenSet = true; m_hiddenToolbarItems.push_back(value); return *this; }
    inline ToolbarConfiguration& AddHiddenToolbarItems(ToolbarItem&& value) { m_hiddenToolbarItemsHasBeenSet = true; m_hiddenToolbarItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum display resolution that is allowed for the session.</p>
     */
    inline const MaxDisplayResolution& GetMaxDisplayResolution() const{ return m_maxDisplayResolution; }
    inline bool MaxDisplayResolutionHasBeenSet() const { return m_maxDisplayResolutionHasBeenSet; }
    inline void SetMaxDisplayResolution(const MaxDisplayResolution& value) { m_maxDisplayResolutionHasBeenSet = true; m_maxDisplayResolution = value; }
    inline void SetMaxDisplayResolution(MaxDisplayResolution&& value) { m_maxDisplayResolutionHasBeenSet = true; m_maxDisplayResolution = std::move(value); }
    inline ToolbarConfiguration& WithMaxDisplayResolution(const MaxDisplayResolution& value) { SetMaxDisplayResolution(value); return *this;}
    inline ToolbarConfiguration& WithMaxDisplayResolution(MaxDisplayResolution&& value) { SetMaxDisplayResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of toolbar displayed during the session.</p>
     */
    inline const ToolbarType& GetToolbarType() const{ return m_toolbarType; }
    inline bool ToolbarTypeHasBeenSet() const { return m_toolbarTypeHasBeenSet; }
    inline void SetToolbarType(const ToolbarType& value) { m_toolbarTypeHasBeenSet = true; m_toolbarType = value; }
    inline void SetToolbarType(ToolbarType&& value) { m_toolbarTypeHasBeenSet = true; m_toolbarType = std::move(value); }
    inline ToolbarConfiguration& WithToolbarType(const ToolbarType& value) { SetToolbarType(value); return *this;}
    inline ToolbarConfiguration& WithToolbarType(ToolbarType&& value) { SetToolbarType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visual mode of the toolbar.</p>
     */
    inline const VisualMode& GetVisualMode() const{ return m_visualMode; }
    inline bool VisualModeHasBeenSet() const { return m_visualModeHasBeenSet; }
    inline void SetVisualMode(const VisualMode& value) { m_visualModeHasBeenSet = true; m_visualMode = value; }
    inline void SetVisualMode(VisualMode&& value) { m_visualModeHasBeenSet = true; m_visualMode = std::move(value); }
    inline ToolbarConfiguration& WithVisualMode(const VisualMode& value) { SetVisualMode(value); return *this;}
    inline ToolbarConfiguration& WithVisualMode(VisualMode&& value) { SetVisualMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ToolbarItem> m_hiddenToolbarItems;
    bool m_hiddenToolbarItemsHasBeenSet = false;

    MaxDisplayResolution m_maxDisplayResolution;
    bool m_maxDisplayResolutionHasBeenSet = false;

    ToolbarType m_toolbarType;
    bool m_toolbarTypeHasBeenSet = false;

    VisualMode m_visualMode;
    bool m_visualModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
