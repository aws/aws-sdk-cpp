/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Summary information about a provisioning artifact (also known as a version)
   * for a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactSummary">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactSummary
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactSummary() = default;
    AWS_SERVICECATALOG_API ProvisioningArtifactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ProvisioningArtifactSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    ProvisioningArtifactSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ProvisioningArtifactSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ProvisioningArtifactSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the provisioning artifact. This is used with Amazon Web
     * Services Marketplace products.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProvisioningArtifactMetadata() const { return m_provisioningArtifactMetadata; }
    inline bool ProvisioningArtifactMetadataHasBeenSet() const { return m_provisioningArtifactMetadataHasBeenSet; }
    template<typename ProvisioningArtifactMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetProvisioningArtifactMetadata(ProvisioningArtifactMetadataT&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata = std::forward<ProvisioningArtifactMetadataT>(value); }
    template<typename ProvisioningArtifactMetadataT = Aws::Map<Aws::String, Aws::String>>
    ProvisioningArtifactSummary& WithProvisioningArtifactMetadata(ProvisioningArtifactMetadataT&& value) { SetProvisioningArtifactMetadata(std::forward<ProvisioningArtifactMetadataT>(value)); return *this;}
    template<typename ProvisioningArtifactMetadataKeyT = Aws::String, typename ProvisioningArtifactMetadataValueT = Aws::String>
    ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(ProvisioningArtifactMetadataKeyT&& key, ProvisioningArtifactMetadataValueT&& value) {
      m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::forward<ProvisioningArtifactMetadataKeyT>(key), std::forward<ProvisioningArtifactMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_provisioningArtifactMetadata;
    bool m_provisioningArtifactMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
