/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/SoftwareSetUpdateSchedule.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   */
  class UpdateDeviceRequest : public WorkSpacesThinClientRequest
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API UpdateDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDevice"; }

    AWS_WORKSPACESTHINCLIENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the device to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the device to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the device to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the device to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the device to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the device to update.</p>
     */
    inline UpdateDeviceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the device to update.</p>
     */
    inline UpdateDeviceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device to update.</p>
     */
    inline UpdateDeviceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the device to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the device to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the device to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the device to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the device to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the device to update.</p>
     */
    inline UpdateDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the device to update.</p>
     */
    inline UpdateDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the device to update.</p>
     */
    inline UpdateDeviceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline const Aws::String& GetDesiredSoftwareSetId() const{ return m_desiredSoftwareSetId; }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline bool DesiredSoftwareSetIdHasBeenSet() const { return m_desiredSoftwareSetIdHasBeenSet; }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline void SetDesiredSoftwareSetId(const Aws::String& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = value; }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline void SetDesiredSoftwareSetId(Aws::String&& value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId = std::move(value); }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline void SetDesiredSoftwareSetId(const char* value) { m_desiredSoftwareSetIdHasBeenSet = true; m_desiredSoftwareSetId.assign(value); }

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline UpdateDeviceRequest& WithDesiredSoftwareSetId(const Aws::String& value) { SetDesiredSoftwareSetId(value); return *this;}

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline UpdateDeviceRequest& WithDesiredSoftwareSetId(Aws::String&& value) { SetDesiredSoftwareSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the software set to apply.</p>
     */
    inline UpdateDeviceRequest& WithDesiredSoftwareSetId(const char* value) { SetDesiredSoftwareSetId(value); return *this;}


    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline const SoftwareSetUpdateSchedule& GetSoftwareSetUpdateSchedule() const{ return m_softwareSetUpdateSchedule; }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline bool SoftwareSetUpdateScheduleHasBeenSet() const { return m_softwareSetUpdateScheduleHasBeenSet; }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline void SetSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = value; }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline void SetSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { m_softwareSetUpdateScheduleHasBeenSet = true; m_softwareSetUpdateSchedule = std::move(value); }

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline UpdateDeviceRequest& WithSoftwareSetUpdateSchedule(const SoftwareSetUpdateSchedule& value) { SetSoftwareSetUpdateSchedule(value); return *this;}

    /**
     * <p>An option to define if software updates should be applied within a
     * maintenance window.</p>
     */
    inline UpdateDeviceRequest& WithSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule&& value) { SetSoftwareSetUpdateSchedule(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline UpdateDeviceRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline UpdateDeviceRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service key to use for
     * the update.</p>
     */
    inline UpdateDeviceRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_desiredSoftwareSetId;
    bool m_desiredSoftwareSetIdHasBeenSet = false;

    SoftwareSetUpdateSchedule m_softwareSetUpdateSchedule;
    bool m_softwareSetUpdateScheduleHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
