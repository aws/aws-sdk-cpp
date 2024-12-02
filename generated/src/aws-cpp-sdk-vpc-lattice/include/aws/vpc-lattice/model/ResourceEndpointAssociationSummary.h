/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary information about a VPC endpoint association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ResourceEndpointAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ResourceEndpointAssociationSummary
  {
  public:
    AWS_VPCLATTICE_API ResourceEndpointAssociationSummary();
    AWS_VPCLATTICE_API ResourceEndpointAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ResourceEndpointAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC endpoint association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceEndpointAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the VPC endpoint association was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ResourceEndpointAssociationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
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
    inline ResourceEndpointAssociationSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceEndpointAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const{ return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    inline void SetResourceConfigurationArn(const Aws::String& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = value; }
    inline void SetResourceConfigurationArn(Aws::String&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::move(value); }
    inline void SetResourceConfigurationArn(const char* value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn.assign(value); }
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationArn(const Aws::String& value) { SetResourceConfigurationArn(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationArn(Aws::String&& value) { SetResourceConfigurationArn(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationArn(const char* value) { SetResourceConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationId() const{ return m_resourceConfigurationId; }
    inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
    inline void SetResourceConfigurationId(const Aws::String& value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId = value; }
    inline void SetResourceConfigurationId(Aws::String&& value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId = std::move(value); }
    inline void SetResourceConfigurationId(const char* value) { m_resourceConfigurationIdHasBeenSet = true; m_resourceConfigurationId.assign(value); }
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationId(const Aws::String& value) { SetResourceConfigurationId(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationId(Aws::String&& value) { SetResourceConfigurationId(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationId(const char* value) { SetResourceConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationName() const{ return m_resourceConfigurationName; }
    inline bool ResourceConfigurationNameHasBeenSet() const { return m_resourceConfigurationNameHasBeenSet; }
    inline void SetResourceConfigurationName(const Aws::String& value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName = value; }
    inline void SetResourceConfigurationName(Aws::String&& value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName = std::move(value); }
    inline void SetResourceConfigurationName(const char* value) { m_resourceConfigurationNameHasBeenSet = true; m_resourceConfigurationName.assign(value); }
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationName(const Aws::String& value) { SetResourceConfigurationName(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationName(Aws::String&& value) { SetResourceConfigurationName(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithResourceConfigurationName(const char* value) { SetResourceConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline ResourceEndpointAssociationSummary& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }
    inline ResourceEndpointAssociationSummary& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}
    inline ResourceEndpointAssociationSummary& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}
    inline ResourceEndpointAssociationSummary& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}
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

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;

    Aws::String m_resourceConfigurationId;
    bool m_resourceConfigurationIdHasBeenSet = false;

    Aws::String m_resourceConfigurationName;
    bool m_resourceConfigurationNameHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
