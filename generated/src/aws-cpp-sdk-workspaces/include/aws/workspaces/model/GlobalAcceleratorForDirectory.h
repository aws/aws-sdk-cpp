/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AGAModeForDirectoryEnum.h>
#include <aws/workspaces/model/AGAPreferredProtocolForDirectory.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the Global Accelerator for directory</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/GlobalAcceleratorForDirectory">AWS
   * API Reference</a></p>
   */
  class GlobalAcceleratorForDirectory
  {
  public:
    AWS_WORKSPACES_API GlobalAcceleratorForDirectory() = default;
    AWS_WORKSPACES_API GlobalAcceleratorForDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API GlobalAcceleratorForDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if Global Accelerator for directory is enabled or disabled.</p>
     */
    inline AGAModeForDirectoryEnum GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(AGAModeForDirectoryEnum value) { m_modeHasBeenSet = true; m_mode = value; }
    inline GlobalAcceleratorForDirectory& WithMode(AGAModeForDirectoryEnum value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the preferred protocol for Global Accelerator.</p>
     */
    inline AGAPreferredProtocolForDirectory GetPreferredProtocol() const { return m_preferredProtocol; }
    inline bool PreferredProtocolHasBeenSet() const { return m_preferredProtocolHasBeenSet; }
    inline void SetPreferredProtocol(AGAPreferredProtocolForDirectory value) { m_preferredProtocolHasBeenSet = true; m_preferredProtocol = value; }
    inline GlobalAcceleratorForDirectory& WithPreferredProtocol(AGAPreferredProtocolForDirectory value) { SetPreferredProtocol(value); return *this;}
    ///@}
  private:

    AGAModeForDirectoryEnum m_mode{AGAModeForDirectoryEnum::NOT_SET};
    bool m_modeHasBeenSet = false;

    AGAPreferredProtocolForDirectory m_preferredProtocol{AGAPreferredProtocolForDirectory::NOT_SET};
    bool m_preferredProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
