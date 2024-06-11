/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog/model/ProvisioningArtifactGuidance.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a provisioning artifact (also known as a version) for a
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactDetail">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactDetail
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactDetail();
    AWS_SERVICECATALOG_API ProvisioningArtifactDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProvisioningArtifactDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProvisioningArtifactDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProvisioningArtifactDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProvisioningArtifactDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProvisioningArtifactDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProvisioningArtifactDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisioningArtifactDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisioningArtifactDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisioningArtifactDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>TERRAFORM_OPEN_SOURCE</code> - Terraform Open Source configuration
     * file</p> </li> <li> <p> <code>TERRAFORM_CLOUD</code> - Terraform Cloud
     * configuration file</p> </li> <li> <p> <code>EXTERNAL</code> - External
     * configuration file</p> </li> </ul>
     */
    inline const ProvisioningArtifactType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ProvisioningArtifactType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ProvisioningArtifactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ProvisioningArtifactDetail& WithType(const ProvisioningArtifactType& value) { SetType(value); return *this;}
    inline ProvisioningArtifactDetail& WithType(ProvisioningArtifactType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ProvisioningArtifactDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ProvisioningArtifactDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline bool GetActive() const{ return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline ProvisioningArtifactDetail& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline const ProvisioningArtifactGuidance& GetGuidance() const{ return m_guidance; }
    inline bool GuidanceHasBeenSet() const { return m_guidanceHasBeenSet; }
    inline void SetGuidance(const ProvisioningArtifactGuidance& value) { m_guidanceHasBeenSet = true; m_guidance = value; }
    inline void SetGuidance(ProvisioningArtifactGuidance&& value) { m_guidanceHasBeenSet = true; m_guidance = std::move(value); }
    inline ProvisioningArtifactDetail& WithGuidance(const ProvisioningArtifactGuidance& value) { SetGuidance(value); return *this;}
    inline ProvisioningArtifactDetail& WithGuidance(ProvisioningArtifactGuidance&& value) { SetGuidance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the revision of the external artifact that was used to
     * automatically sync the Service Catalog product and create the provisioning
     * artifact. Service Catalog includes this response parameter as a high level field
     * to the existing <code>ProvisioningArtifactDetail</code> type, which is returned
     * as part of the response for <code>CreateProduct</code>,
     * <code>UpdateProduct</code>, <code>DescribeProductAsAdmin</code>,
     * <code>DescribeProvisioningArtifact</code>,
     * <code>ListProvisioningArtifact</code>, and
     * <code>UpdateProvisioningArticat</code> APIs. </p> <p>This field only exists for
     * Repo-Synced products. </p>
     */
    inline const Aws::String& GetSourceRevision() const{ return m_sourceRevision; }
    inline bool SourceRevisionHasBeenSet() const { return m_sourceRevisionHasBeenSet; }
    inline void SetSourceRevision(const Aws::String& value) { m_sourceRevisionHasBeenSet = true; m_sourceRevision = value; }
    inline void SetSourceRevision(Aws::String&& value) { m_sourceRevisionHasBeenSet = true; m_sourceRevision = std::move(value); }
    inline void SetSourceRevision(const char* value) { m_sourceRevisionHasBeenSet = true; m_sourceRevision.assign(value); }
    inline ProvisioningArtifactDetail& WithSourceRevision(const Aws::String& value) { SetSourceRevision(value); return *this;}
    inline ProvisioningArtifactDetail& WithSourceRevision(Aws::String&& value) { SetSourceRevision(std::move(value)); return *this;}
    inline ProvisioningArtifactDetail& WithSourceRevision(const char* value) { SetSourceRevision(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProvisioningArtifactType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    ProvisioningArtifactGuidance m_guidance;
    bool m_guidanceHasBeenSet = false;

    Aws::String m_sourceRevision;
    bool m_sourceRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
