﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for StartInputDeviceMaintenanceWindowRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartInputDeviceMaintenanceWindowRequest">AWS
   * API Reference</a></p>
   */
  class StartInputDeviceMaintenanceWindowRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API StartInputDeviceMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartInputDeviceMaintenanceWindow"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The unique ID of the input device to start a maintenance window for. For
     * example, hd-123456789abcdef.
     */
    inline const Aws::String& GetInputDeviceId() const{ return m_inputDeviceId; }
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }
    inline void SetInputDeviceId(const Aws::String& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = value; }
    inline void SetInputDeviceId(Aws::String&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::move(value); }
    inline void SetInputDeviceId(const char* value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId.assign(value); }
    inline StartInputDeviceMaintenanceWindowRequest& WithInputDeviceId(const Aws::String& value) { SetInputDeviceId(value); return *this;}
    inline StartInputDeviceMaintenanceWindowRequest& WithInputDeviceId(Aws::String&& value) { SetInputDeviceId(std::move(value)); return *this;}
    inline StartInputDeviceMaintenanceWindowRequest& WithInputDeviceId(const char* value) { SetInputDeviceId(value); return *this;}
    ///@}
  private:

    Aws::String m_inputDeviceId;
    bool m_inputDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
