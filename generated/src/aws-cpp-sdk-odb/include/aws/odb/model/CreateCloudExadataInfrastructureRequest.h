/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/MaintenanceWindow.h>
#include <aws/odb/model/CustomerContact.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class CreateCloudExadataInfrastructureRequest : public OdbRequest
  {
  public:
    AWS_ODB_API CreateCloudExadataInfrastructureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudExadataInfrastructure"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-friendly name for the Exadata infrastructure.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model name of the Exadata infrastructure. For the list of valid model
     * names, use the <code>ListDbSystemShapes</code> operation.</p>
     */
    inline const Aws::String& GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    template<typename ShapeT = Aws::String>
    void SetShape(ShapeT&& value) { m_shapeHasBeenSet = true; m_shape = std::forward<ShapeT>(value); }
    template<typename ShapeT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithShape(ShapeT&& value) { SetShape(std::forward<ShapeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone (AZ) where the Exadata infrastructure is
     * located.</p> <p>This operation requires that you specify a value for either
     * <code>availabilityZone</code> or <code>availabilityZoneId</code>.</p>
     * <p>Example: <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AZ ID of the AZ where the Exadata infrastructure is located.</p> <p>This
     * operation requires that you specify a value for either
     * <code>availabilityZone</code> or <code>availabilityZoneId</code>.</p>
     * <p>Example: <code>use1-az1</code> </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource tags to apply to the Exadata infrastructure.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCloudExadataInfrastructureRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCloudExadataInfrastructureRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of database servers for the Exadata infrastructure. Valid values
     * for this parameter depend on the shape. To get information about the minimum and
     * maximum values, use the <code>ListDbSystemShapes</code> operation.</p>
     */
    inline int GetComputeCount() const { return m_computeCount; }
    inline bool ComputeCountHasBeenSet() const { return m_computeCountHasBeenSet; }
    inline void SetComputeCount(int value) { m_computeCountHasBeenSet = true; m_computeCount = value; }
    inline CreateCloudExadataInfrastructureRequest& WithComputeCount(int value) { SetComputeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses of contacts to receive notification from Oracle about
     * maintenance updates for the Exadata infrastructure.</p>
     */
    inline const Aws::Vector<CustomerContact>& GetCustomerContactsToSendToOCI() const { return m_customerContactsToSendToOCI; }
    inline bool CustomerContactsToSendToOCIHasBeenSet() const { return m_customerContactsToSendToOCIHasBeenSet; }
    template<typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
    void SetCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) { m_customerContactsToSendToOCIHasBeenSet = true; m_customerContactsToSendToOCI = std::forward<CustomerContactsToSendToOCIT>(value); }
    template<typename CustomerContactsToSendToOCIT = Aws::Vector<CustomerContact>>
    CreateCloudExadataInfrastructureRequest& WithCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) { SetCustomerContactsToSendToOCI(std::forward<CustomerContactsToSendToOCIT>(value)); return *this;}
    template<typename CustomerContactsToSendToOCIT = CustomerContact>
    CreateCloudExadataInfrastructureRequest& AddCustomerContactsToSendToOCI(CustomerContactsToSendToOCIT&& value) { m_customerContactsToSendToOCIHasBeenSet = true; m_customerContactsToSendToOCI.emplace_back(std::forward<CustomerContactsToSendToOCIT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maintenance window configuration for the Exadata Cloud
     * infrastructure.</p> <p>This allows you to define when maintenance operations
     * such as patching and updates can be performed on the infrastructure.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const { return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    void SetMaintenanceWindow(MaintenanceWindowT&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::forward<MaintenanceWindowT>(value); }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    CreateCloudExadataInfrastructureRequest& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of storage servers to activate for this Exadata infrastructure.
     * Valid values for this parameter depend on the shape. To get information about
     * the minimum and maximum values, use the <code>ListDbSystemShapes</code>
     * operation.</p>
     */
    inline int GetStorageCount() const { return m_storageCount; }
    inline bool StorageCountHasBeenSet() const { return m_storageCountHasBeenSet; }
    inline void SetStorageCount(int value) { m_storageCountHasBeenSet = true; m_storageCount = value; }
    inline CreateCloudExadataInfrastructureRequest& WithStorageCount(int value) { SetStorageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don't specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The client token is valid for up to 24 hours after it's
     * first used.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database server model type of the Exadata infrastructure. For the list of
     * valid model names, use the <code>ListDbSystemShapes</code> operation.</p>
     */
    inline const Aws::String& GetDatabaseServerType() const { return m_databaseServerType; }
    inline bool DatabaseServerTypeHasBeenSet() const { return m_databaseServerTypeHasBeenSet; }
    template<typename DatabaseServerTypeT = Aws::String>
    void SetDatabaseServerType(DatabaseServerTypeT&& value) { m_databaseServerTypeHasBeenSet = true; m_databaseServerType = std::forward<DatabaseServerTypeT>(value); }
    template<typename DatabaseServerTypeT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithDatabaseServerType(DatabaseServerTypeT&& value) { SetDatabaseServerType(std::forward<DatabaseServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage server model type of the Exadata infrastructure. For the list of
     * valid model names, use the <code>ListDbSystemShapes</code> operation.</p>
     */
    inline const Aws::String& GetStorageServerType() const { return m_storageServerType; }
    inline bool StorageServerTypeHasBeenSet() const { return m_storageServerTypeHasBeenSet; }
    template<typename StorageServerTypeT = Aws::String>
    void SetStorageServerType(StorageServerTypeT&& value) { m_storageServerTypeHasBeenSet = true; m_storageServerType = std::forward<StorageServerTypeT>(value); }
    template<typename StorageServerTypeT = Aws::String>
    CreateCloudExadataInfrastructureRequest& WithStorageServerType(StorageServerTypeT&& value) { SetStorageServerType(std::forward<StorageServerTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_shape;
    bool m_shapeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_computeCount{0};
    bool m_computeCountHasBeenSet = false;

    Aws::Vector<CustomerContact> m_customerContactsToSendToOCI;
    bool m_customerContactsToSendToOCIHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    int m_storageCount{0};
    bool m_storageCountHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_databaseServerType;
    bool m_databaseServerTypeHasBeenSet = false;

    Aws::String m_storageServerType;
    bool m_storageServerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
