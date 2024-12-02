/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/vpc-lattice/model/ServiceNetworkVpcAssociationStatus.h>
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
   * <p>Summary information about an association between a service network and a
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ServiceNetworkVpcAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ServiceNetworkVpcAssociationSummary
  {
  public:
    AWS_VPCLATTICE_API ServiceNetworkVpcAssociationSummary();
    AWS_VPCLATTICE_API ServiceNetworkVpcAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkVpcAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceNetworkVpcAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ServiceNetworkVpcAssociationSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const{ return m_serviceNetworkId; }
    inline bool ServiceNetworkIdHasBeenSet() const { return m_serviceNetworkIdHasBeenSet; }
    inline void SetServiceNetworkId(const Aws::String& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = value; }
    inline void SetServiceNetworkId(Aws::String&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::move(value); }
    inline void SetServiceNetworkId(const char* value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkId(const Aws::String& value) { SetServiceNetworkId(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkId(Aws::String&& value) { SetServiceNetworkId(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkId(const char* value) { SetServiceNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = value; }
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::move(value); }
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const ServiceNetworkVpcAssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceNetworkVpcAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceNetworkVpcAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceNetworkVpcAssociationSummary& WithStatus(const ServiceNetworkVpcAssociationStatus& value) { SetStatus(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithStatus(ServiceNetworkVpcAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ServiceNetworkVpcAssociationSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ServiceNetworkVpcAssociationSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_serviceNetworkId;
    bool m_serviceNetworkIdHasBeenSet = false;

    Aws::String m_serviceNetworkName;
    bool m_serviceNetworkNameHasBeenSet = false;

    ServiceNetworkVpcAssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
