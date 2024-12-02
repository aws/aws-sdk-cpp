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
    AWS_VPCLATTICE_API ResourceConfigurationSummary();
    AWS_VPCLATTICE_API ResourceConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ResourceConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the resource configuration was created and is managed by
     * Amazon.</p>
     */
    inline bool GetAmazonManaged() const{ return m_amazonManaged; }
    inline bool AmazonManagedHasBeenSet() const { return m_amazonManagedHasBeenSet; }
    inline void SetAmazonManaged(bool value) { m_amazonManagedHasBeenSet = true; m_amazonManaged = value; }
    inline ResourceConfigurationSummary& WithAmazonManaged(bool value) { SetAmazonManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceConfigurationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceConfigurationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceConfigurationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the resource configuration was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ResourceConfigurationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ResourceConfigurationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceConfigurationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceConfigurationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceConfigurationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the resource configuration was updated, in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ResourceConfigurationSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ResourceConfigurationSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupId() const{ return m_resourceConfigurationGroupId; }
    inline bool ResourceConfigurationGroupIdHasBeenSet() const { return m_resourceConfigurationGroupIdHasBeenSet; }
    inline void SetResourceConfigurationGroupId(const Aws::String& value) { m_resourceConfigurationGroupIdHasBeenSet = true; m_resourceConfigurationGroupId = value; }
    inline void SetResourceConfigurationGroupId(Aws::String&& value) { m_resourceConfigurationGroupIdHasBeenSet = true; m_resourceConfigurationGroupId = std::move(value); }
    inline void SetResourceConfigurationGroupId(const char* value) { m_resourceConfigurationGroupIdHasBeenSet = true; m_resourceConfigurationGroupId.assign(value); }
    inline ResourceConfigurationSummary& WithResourceConfigurationGroupId(const Aws::String& value) { SetResourceConfigurationGroupId(value); return *this;}
    inline ResourceConfigurationSummary& WithResourceConfigurationGroupId(Aws::String&& value) { SetResourceConfigurationGroupId(std::move(value)); return *this;}
    inline ResourceConfigurationSummary& WithResourceConfigurationGroupId(const char* value) { SetResourceConfigurationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway.</p>
     */
    inline const Aws::String& GetResourceGatewayId() const{ return m_resourceGatewayId; }
    inline bool ResourceGatewayIdHasBeenSet() const { return m_resourceGatewayIdHasBeenSet; }
    inline void SetResourceGatewayId(const Aws::String& value) { m_resourceGatewayIdHasBeenSet = true; m_resourceGatewayId = value; }
    inline void SetResourceGatewayId(Aws::String&& value) { m_resourceGatewayIdHasBeenSet = true; m_resourceGatewayId = std::move(value); }
    inline void SetResourceGatewayId(const char* value) { m_resourceGatewayIdHasBeenSet = true; m_resourceGatewayId.assign(value); }
    inline ResourceConfigurationSummary& WithResourceGatewayId(const Aws::String& value) { SetResourceGatewayId(value); return *this;}
    inline ResourceConfigurationSummary& WithResourceGatewayId(Aws::String&& value) { SetResourceGatewayId(std::move(value)); return *this;}
    inline ResourceConfigurationSummary& WithResourceGatewayId(const char* value) { SetResourceGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource configuration.</p>
     */
    inline const ResourceConfigurationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResourceConfigurationSummary& WithStatus(const ResourceConfigurationStatus& value) { SetStatus(value); return *this;}
    inline ResourceConfigurationSummary& WithStatus(ResourceConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource configuration.</p> <ul> <li> <p> <code>SINGLE</code> - A
     * single resource.</p> </li> <li> <p> <code>GROUP</code> - A group of
     * resources.</p> </li> <li> <p> <code>CHILD</code> - A single resource that is
     * part of a group resource configuration.</p> </li> <li> <p> <code>ARN</code> - An
     * Amazon Web Services resource.</p> </li> </ul>
     */
    inline const ResourceConfigurationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ResourceConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ResourceConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ResourceConfigurationSummary& WithType(const ResourceConfigurationType& value) { SetType(value); return *this;}
    inline ResourceConfigurationSummary& WithType(ResourceConfigurationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    bool m_amazonManaged;
    bool m_amazonManagedHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupId;
    bool m_resourceConfigurationGroupIdHasBeenSet = false;

    Aws::String m_resourceGatewayId;
    bool m_resourceGatewayIdHasBeenSet = false;

    ResourceConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    ResourceConfigurationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
