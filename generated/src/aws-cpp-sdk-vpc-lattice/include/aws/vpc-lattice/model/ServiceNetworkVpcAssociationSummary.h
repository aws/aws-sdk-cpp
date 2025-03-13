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
    AWS_VPCLATTICE_API ServiceNetworkVpcAssociationSummary() = default;
    AWS_VPCLATTICE_API ServiceNetworkVpcAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ServiceNetworkVpcAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was created, in ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceNetworkVpcAssociationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that created the association.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the association was last updated, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ServiceNetworkVpcAssociationSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    template<typename ServiceNetworkArnT = Aws::String>
    void SetServiceNetworkArn(ServiceNetworkArnT&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value); }
    template<typename ServiceNetworkArnT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithServiceNetworkArn(ServiceNetworkArnT&& value) { SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkId() const { return m_serviceNetworkId; }
    inline bool ServiceNetworkIdHasBeenSet() const { return m_serviceNetworkIdHasBeenSet; }
    template<typename ServiceNetworkIdT = Aws::String>
    void SetServiceNetworkId(ServiceNetworkIdT&& value) { m_serviceNetworkIdHasBeenSet = true; m_serviceNetworkId = std::forward<ServiceNetworkIdT>(value); }
    template<typename ServiceNetworkIdT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithServiceNetworkId(ServiceNetworkIdT&& value) { SetServiceNetworkId(std::forward<ServiceNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const { return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    template<typename ServiceNetworkNameT = Aws::String>
    void SetServiceNetworkName(ServiceNetworkNameT&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::forward<ServiceNetworkNameT>(value); }
    template<typename ServiceNetworkNameT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithServiceNetworkName(ServiceNetworkNameT&& value) { SetServiceNetworkName(std::forward<ServiceNetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline ServiceNetworkVpcAssociationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceNetworkVpcAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceNetworkVpcAssociationSummary& WithStatus(ServiceNetworkVpcAssociationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    ServiceNetworkVpcAssociationSummary& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_serviceNetworkId;
    bool m_serviceNetworkIdHasBeenSet = false;

    Aws::String m_serviceNetworkName;
    bool m_serviceNetworkNameHasBeenSet = false;

    ServiceNetworkVpcAssociationStatus m_status{ServiceNetworkVpcAssociationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
