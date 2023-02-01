/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/OperatingSystem.h>
#include <aws/workspaces/model/WorkspaceImageState.h>
#include <aws/workspaces/model/WorkspaceImageRequiredTenancy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/UpdateResult.h>
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
   * <p>Describes a WorkSpace image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceImage">AWS
   * API Reference</a></p>
   */
  class WorkspaceImage
  {
  public:
    AWS_WORKSPACES_API WorkspaceImage();
    AWS_WORKSPACES_API WorkspaceImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline WorkspaceImage& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline WorkspaceImage& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline WorkspaceImage& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline WorkspaceImage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline WorkspaceImage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline WorkspaceImage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline WorkspaceImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline WorkspaceImage& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline WorkspaceImage& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operating system that the image is running. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline WorkspaceImage& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system that the image is running. </p>
     */
    inline WorkspaceImage& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>The status of the image.</p>
     */
    inline const WorkspaceImageState& GetState() const{ return m_state; }

    /**
     * <p>The status of the image.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the image.</p>
     */
    inline void SetState(const WorkspaceImageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the image.</p>
     */
    inline void SetState(WorkspaceImageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the image.</p>
     */
    inline WorkspaceImage& WithState(const WorkspaceImageState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the image.</p>
     */
    inline WorkspaceImage& WithState(WorkspaceImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline const WorkspaceImageRequiredTenancy& GetRequiredTenancy() const{ return m_requiredTenancy; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline bool RequiredTenancyHasBeenSet() const { return m_requiredTenancyHasBeenSet; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline void SetRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { m_requiredTenancyHasBeenSet = true; m_requiredTenancy = value; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline void SetRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { m_requiredTenancyHasBeenSet = true; m_requiredTenancy = std::move(value); }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline WorkspaceImage& WithRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { SetRequiredTenancy(value); return *this;}

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline WorkspaceImage& WithRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { SetRequiredTenancy(std::move(value)); return *this;}


    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline WorkspaceImage& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline WorkspaceImage& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline WorkspaceImage& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline WorkspaceImage& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline WorkspaceImage& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline WorkspaceImage& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline const UpdateResult& GetUpdates() const{ return m_updates; }

    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline void SetUpdates(const UpdateResult& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline void SetUpdates(UpdateResult&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline WorkspaceImage& WithUpdates(const UpdateResult& value) { SetUpdates(value); return *this;}

    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline WorkspaceImage& WithUpdates(UpdateResult&& value) { SetUpdates(std::move(value)); return *this;}

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    WorkspaceImageState m_state;
    bool m_stateHasBeenSet = false;

    WorkspaceImageRequiredTenancy m_requiredTenancy;
    bool m_requiredTenancyHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    UpdateResult m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
