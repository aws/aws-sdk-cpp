/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AGAModeForWorkSpaceEnum.h>
#include <aws/workspaces/model/AGAPreferredProtocolForWorkSpace.h>
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
   * <p>Describes the Global Accelerator for WorkSpaces.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/GlobalAcceleratorForWorkSpace">AWS
   * API Reference</a></p>
   */
  class GlobalAcceleratorForWorkSpace
  {
  public:
    AWS_WORKSPACES_API GlobalAcceleratorForWorkSpace();
    AWS_WORKSPACES_API GlobalAcceleratorForWorkSpace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API GlobalAcceleratorForWorkSpace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if Global Accelerator for WorkSpaces is enabled, disabled, or the
     * same mode as the associated directory.</p>
     */
    inline const AGAModeForWorkSpaceEnum& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const AGAModeForWorkSpaceEnum& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(AGAModeForWorkSpaceEnum&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline GlobalAcceleratorForWorkSpace& WithMode(const AGAModeForWorkSpaceEnum& value) { SetMode(value); return *this;}
    inline GlobalAcceleratorForWorkSpace& WithMode(AGAModeForWorkSpaceEnum&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the preferred protocol for Global Accelerator.</p>
     */
    inline const AGAPreferredProtocolForWorkSpace& GetPreferredProtocol() const{ return m_preferredProtocol; }
    inline bool PreferredProtocolHasBeenSet() const { return m_preferredProtocolHasBeenSet; }
    inline void SetPreferredProtocol(const AGAPreferredProtocolForWorkSpace& value) { m_preferredProtocolHasBeenSet = true; m_preferredProtocol = value; }
    inline void SetPreferredProtocol(AGAPreferredProtocolForWorkSpace&& value) { m_preferredProtocolHasBeenSet = true; m_preferredProtocol = std::move(value); }
    inline GlobalAcceleratorForWorkSpace& WithPreferredProtocol(const AGAPreferredProtocolForWorkSpace& value) { SetPreferredProtocol(value); return *this;}
    inline GlobalAcceleratorForWorkSpace& WithPreferredProtocol(AGAPreferredProtocolForWorkSpace&& value) { SetPreferredProtocol(std::move(value)); return *this;}
    ///@}
  private:

    AGAModeForWorkSpaceEnum m_mode;
    bool m_modeHasBeenSet = false;

    AGAPreferredProtocolForWorkSpace m_preferredProtocol;
    bool m_preferredProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
