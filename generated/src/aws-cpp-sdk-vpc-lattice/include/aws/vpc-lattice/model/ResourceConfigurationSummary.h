/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/vpc-lattice/model/ResourceConfigurationStatus.h>
#include <aws/vpc-lattice/model/ResourceConfigurationType.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Summary information about a resource configuration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ResourceConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class ResourceConfigurationSummary
  {
  public:
    AWS_VPCLATTICE_API ResourceConfigurationSummary() = default;
    AWS_VPCLATTICE_API ResourceConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ResourceConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the resource configuration was created and is managed by
     * Amazon.</p>
     */
    inline bool GetAmazonManaged() const { return m_amazonManaged; }
    inline bool AmazonManagedHasBeenSet() const { return m_amazonManagedHasBeenSet; }
    inline void SetAmazonManaged(bool value) { m_amazonManagedHasBeenSet = true; m_amazonManaged = value; }
    inline ResourceConfigurationSummary& WithAmazonManaged(bool value) { SetAmazonManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResourceConfigurationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the resource configuration was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ResourceConfigurationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResourceConfigurationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the resource configuration was updated, in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ResourceConfigurationSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResourceConfigurationSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupId() const { return m_resourceConfigurationGroupId; }
    inline bool ResourceConfigurationGroupIdHasBeenSet() const { return m_resourceConfigurationGroupIdHasBeenSet; }
    template<typename ResourceConfigurationGroupIdT = Aws::String>
    void SetResourceConfigurationGroupId(ResourceConfigurationGroupIdT&& value) { m_resourceConfigurationGroupIdHasBeenSet = true; m_resourceConfigurationGroupId = std::forward<ResourceConfigurationGroupIdT>(value); }
    template<typename ResourceConfigurationGroupIdT = Aws::String>
    ResourceConfigurationSummary& WithResourceConfigurationGroupId(ResourceConfigurationGroupIdT&& value) { SetResourceConfigurationGroupId(std::forward<ResourceConfigurationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetResourceGatewayId() const { return m_resourceGatewayId; }
    inline bool ResourceGatewayIdHasBeenSet() const { return m_resourceGatewayIdHasBeenSet; }
    template<typename ResourceGatewayIdT = Aws::String>
    void SetResourceGatewayId(ResourceGatewayIdT&& value) { m_resourceGatewayIdHasBeenSet = true; m_resourceGatewayId = std::forward<ResourceGatewayIdT>(value); }
    template<typename ResourceGatewayIdT = Aws::String>
    ResourceConfigurationSummary& WithResourceGatewayId(ResourceGatewayIdT&& value) { SetResourceGatewayId(std::forward<ResourceGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource configuration.</p>
     */
    inline ResourceConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceConfigurationSummary& WithStatus(ResourceConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource configuration.</p> <ul> <li> <p> <code>SINGLE</code> - A
     * single resource.</p> </li> <li> <p> <code>GROUP</code> - A group of
     * resources.</p> </li> <li> <p> <code>CHILD</code> - A single resource that is
     * part of a group resource configuration.</p> </li> <li> <p> <code>ARN</code> - An
     * Amazon Web Services resource.</p> </li> </ul>
     */
    inline ResourceConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ResourceConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResourceConfigurationSummary& WithType(ResourceConfigurationType value) { SetType(value); return *this;}
    ///@}
  private:

    bool m_amazonManaged{false};
    bool m_amazonManagedHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupId;
    bool m_resourceConfigurationGroupIdHasBeenSet = false;

    Aws::String m_resourceGatewayId;
    bool m_resourceGatewayIdHasBeenSet = false;

    ResourceConfigurationStatus m_status{ResourceConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ResourceConfigurationType m_type{ResourceConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
