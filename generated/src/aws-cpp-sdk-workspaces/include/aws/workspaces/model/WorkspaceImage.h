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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ErrorDetails.h>
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
    AWS_WORKSPACES_API WorkspaceImage() = default;
    AWS_WORKSPACES_API WorkspaceImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    WorkspaceImage& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkspaceImage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkspaceImage& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that the image is running. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    template<typename OperatingSystemT = OperatingSystem>
    void SetOperatingSystem(OperatingSystemT&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::forward<OperatingSystemT>(value); }
    template<typename OperatingSystemT = OperatingSystem>
    WorkspaceImage& WithOperatingSystem(OperatingSystemT&& value) { SetOperatingSystem(std::forward<OperatingSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image.</p>
     */
    inline WorkspaceImageState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkspaceImageState value) { m_stateHasBeenSet = true; m_state = value; }
    inline WorkspaceImage& WithState(WorkspaceImageState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to <code>DEDICATED</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline WorkspaceImageRequiredTenancy GetRequiredTenancy() const { return m_requiredTenancy; }
    inline bool RequiredTenancyHasBeenSet() const { return m_requiredTenancyHasBeenSet; }
    inline void SetRequiredTenancy(WorkspaceImageRequiredTenancy value) { m_requiredTenancyHasBeenSet = true; m_requiredTenancy = value; }
    inline WorkspaceImage& WithRequiredTenancy(WorkspaceImageRequiredTenancy value) { SetRequiredTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned for the image.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    WorkspaceImage& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned for the image.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    WorkspaceImage& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the image was created. If the image has been shared, the Amazon
     * Web Services account that the image has been shared with sees the original
     * creation date of the image.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    WorkspaceImage& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    WorkspaceImage& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updates (if any) that are available for the specified image.</p>
     */
    inline const UpdateResult& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = UpdateResult>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = UpdateResult>
    WorkspaceImage& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details of the error returned for the image, including the
     * possible causes of the errors and troubleshooting information.</p>
     */
    inline const Aws::Vector<ErrorDetails>& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetails>>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetails>>
    WorkspaceImage& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    template<typename ErrorDetailsT = ErrorDetails>
    WorkspaceImage& AddErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    WorkspaceImageState m_state{WorkspaceImageState::NOT_SET};
    bool m_stateHasBeenSet = false;

    WorkspaceImageRequiredTenancy m_requiredTenancy{WorkspaceImageRequiredTenancy::NOT_SET};
    bool m_requiredTenancyHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    UpdateResult m_updates;
    bool m_updatesHasBeenSet = false;

    Aws::Vector<ErrorDetails> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
