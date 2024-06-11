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


    ///@{
    /**
     * <p>The identifier of the new WorkSpace image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageId.assign(value); }
    inline CreateWorkspaceImageResult& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline CreateWorkspaceImageResult& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline CreateWorkspaceImageResult& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateWorkspaceImageResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkspaceImageResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkspaceImageResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateWorkspaceImageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkspaceImageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkspaceImageResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system that the image is running.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystem = std::move(value); }
    inline CreateWorkspaceImageResult& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline CreateWorkspaceImageResult& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the image.</p>
     */
    inline const WorkspaceImageState& GetState() const{ return m_state; }
    inline void SetState(const WorkspaceImageState& value) { m_state = value; }
    inline void SetState(WorkspaceImageState&& value) { m_state = std::move(value); }
    inline CreateWorkspaceImageResult& WithState(const WorkspaceImageState& value) { SetState(value); return *this;}
    inline CreateWorkspaceImageResult& WithState(WorkspaceImageState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the image is running on dedicated hardware. When Bring Your
     * Own License (BYOL) is enabled, this value is set to DEDICATED. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.htm">
     * Bring Your Own Windows Desktop Images.</a>.</p>
     */
    inline const WorkspaceImageRequiredTenancy& GetRequiredTenancy() const{ return m_requiredTenancy; }
    inline void SetRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { m_requiredTenancy = value; }
    inline void SetRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { m_requiredTenancy = std::move(value); }
    inline CreateWorkspaceImageResult& WithRequiredTenancy(const WorkspaceImageRequiredTenancy& value) { SetRequiredTenancy(value); return *this;}
    inline CreateWorkspaceImageResult& WithRequiredTenancy(WorkspaceImageRequiredTenancy&& value) { SetRequiredTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }
    inline CreateWorkspaceImageResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline CreateWorkspaceImageResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the image.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }
    inline CreateWorkspaceImageResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline CreateWorkspaceImageResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline CreateWorkspaceImageResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkspaceImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkspaceImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkspaceImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_imageId;

    Aws::String m_name;

    Aws::String m_description;

    OperatingSystem m_operatingSystem;

    WorkspaceImageState m_state;

    WorkspaceImageRequiredTenancy m_requiredTenancy;

    Aws::Utils::DateTime m_created;

    Aws::String m_ownerAccountId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
