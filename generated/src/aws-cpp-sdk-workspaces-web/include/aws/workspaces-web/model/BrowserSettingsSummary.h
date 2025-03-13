/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The summary for browser settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/BrowserSettingsSummary">AWS
   * API Reference</a></p>
   */
  class BrowserSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API BrowserSettingsSummary() = default;
    AWS_WORKSPACESWEB_API BrowserSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API BrowserSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const { return m_browserSettingsArn; }
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }
    template<typename BrowserSettingsArnT = Aws::String>
    void SetBrowserSettingsArn(BrowserSettingsArnT&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::forward<BrowserSettingsArnT>(value); }
    template<typename BrowserSettingsArnT = Aws::String>
    BrowserSettingsSummary& WithBrowserSettingsArn(BrowserSettingsArnT&& value) { SetBrowserSettingsArn(std::forward<BrowserSettingsArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
