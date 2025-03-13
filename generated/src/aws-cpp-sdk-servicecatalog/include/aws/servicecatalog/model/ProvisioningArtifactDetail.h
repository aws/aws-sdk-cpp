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
    AWS_SERVICECATALOG_API ProvisioningArtifactDetail() = default;
    AWS_SERVICECATALOG_API ProvisioningArtifactDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProvisioningArtifactDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProvisioningArtifactDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProvisioningArtifactDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline ProvisioningArtifactType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ProvisioningArtifactType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProvisioningArtifactDetail& WithType(ProvisioningArtifactType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ProvisioningArtifactDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the product version is active.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline ProvisioningArtifactDetail& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information set by the administrator to provide guidance to end users about
     * which provisioning artifacts to use.</p>
     */
    inline ProvisioningArtifactGuidance GetGuidance() const { return m_guidance; }
    inline bool GuidanceHasBeenSet() const { return m_guidanceHasBeenSet; }
    inline void SetGuidance(ProvisioningArtifactGuidance value) { m_guidanceHasBeenSet = true; m_guidance = value; }
    inline ProvisioningArtifactDetail& WithGuidance(ProvisioningArtifactGuidance value) { SetGuidance(value); return *this;}
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
    inline const Aws::String& GetSourceRevision() const { return m_sourceRevision; }
    inline bool SourceRevisionHasBeenSet() const { return m_sourceRevisionHasBeenSet; }
    template<typename SourceRevisionT = Aws::String>
    void SetSourceRevision(SourceRevisionT&& value) { m_sourceRevisionHasBeenSet = true; m_sourceRevision = std::forward<SourceRevisionT>(value); }
    template<typename SourceRevisionT = Aws::String>
    ProvisioningArtifactDetail& WithSourceRevision(SourceRevisionT&& value) { SetSourceRevision(std::forward<SourceRevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProvisioningArtifactType m_type{ProvisioningArtifactType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    ProvisioningArtifactGuidance m_guidance{ProvisioningArtifactGuidance::NOT_SET};
    bool m_guidanceHasBeenSet = false;

    Aws::String m_sourceRevision;
    bool m_sourceRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
