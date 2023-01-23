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
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class CreateWorkspaceImageResult
  {
  public:
    AWS_WORKSPACES_API CreateWorkspaceImageResult();
    AWS_WORKSPACES_API CreateWorkspaceImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateWorkspaceImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }

    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }

    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline void SetImageId(const char* value) { m_imageId.assign(value); }

    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline CreateWorkspaceImageResult& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline CreateWorkspaceImageResult& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline CreateWorkspaceImageResult& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operating system that the image is running.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system that the image is running.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystem = value; }

    /**
     * <p>The operating system that the image is running.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system that the image is running.</p>
     */
    inline CreateWorkspaceImageResult& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system that the image is running.</p>
     */
    inline CreateWorkspaceImageResult& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>The availability status of the image.</p>
     */
    inline const WorkspaceImageState& GetState() const{ return m_state; }

    /**
     * <p>The availability status of the image.</p>
     */
    inline void SetState(const WorkspaceImageState& value) { m_state = value; }

    /**
     * <p>The availability status of the image.</p>
     */
    inline void SetState(WorkspaceImageState&& value) { m_state = std::move(value); }

    /**
     * <p>The availability status of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithState(const WorkspaceImageState& value) { SetState(value); return *this;}

    /**
     * <p>The availability status of the image.</p>
     */
    inline CreateWorkspaceImageResult& WithState(WorkspaceImageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to DEDICATED. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.htm">
     * Bring Your Own Windows Desktop Images.</a>.</p>
     */
    inline const WorkspaceImageRequiredTenancy& GetRequiredTenancy() const{ return m_requiredTenancy; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to DEDICATED. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.htm">
     * Bring Your Own Windows Desktop Images.</a>.</p>
     */
    inline void SetRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { m_requiredTenancy = value; }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to DEDICATED. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.htm">
     * Bring Your Own Windows Desktop Images.</a>.</p>
     */
    inline void SetRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { m_requiredTenancy = std::move(value); }

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to DEDICATED. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.htm">
     * Bring Your Own Windows Desktop Images.</a>.</p>
     */
    inline CreateWorkspaceImageResult& WithRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { SetRequiredTenancy(value); return *this;}

    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to DEDICATED. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.htm">
     * Bring Your Own Windows Desktop Images.</a>.</p>
     */
    inline CreateWorkspaceImageResult& WithRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { SetRequiredTenancy(std::move(value)); return *this;}


    /**
     * <p>The date when the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date when the image was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * <p>The date when the image was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * <p>The date when the image was created.</p>
     */
    inline CreateWorkspaceImageResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date when the image was created.</p>
     */
    inline CreateWorkspaceImageResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline CreateWorkspaceImageResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline CreateWorkspaceImageResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline CreateWorkspaceImageResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}

  private:

    Aws::String m_imageId;

    Aws::String m_name;

    Aws::String m_description;

    OperatingSystem m_operatingSystem;

    WorkspaceImageState m_state;

    WorkspaceImageRequiredTenancy m_requiredTenancy;

    Aws::Utils::DateTime m_created;

    Aws::String m_ownerAccountId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
