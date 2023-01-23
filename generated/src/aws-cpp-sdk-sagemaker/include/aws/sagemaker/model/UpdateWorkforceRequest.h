/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SourceIpConfig.h>
#include <aws/sagemaker/model/OidcConfig.h>
#include <aws/sagemaker/model/WorkforceVpcConfigRequest.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateWorkforceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateWorkforceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkforce"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline const Aws::String& GetWorkforceName() const{ return m_workforceName; }

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline void SetWorkforceName(const Aws::String& value) { m_workforceNameHasBeenSet = true; m_workforceName = value; }

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline void SetWorkforceName(Aws::String&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::move(value); }

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline void SetWorkforceName(const char* value) { m_workforceNameHasBeenSet = true; m_workforceName.assign(value); }

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline UpdateWorkforceRequest& WithWorkforceName(const Aws::String& value) { SetWorkforceName(value); return *this;}

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline UpdateWorkforceRequest& WithWorkforceName(Aws::String&& value) { SetWorkforceName(std::move(value)); return *this;}

    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the operation.</p>
     */
    inline UpdateWorkforceRequest& WithWorkforceName(const char* value) { SetWorkforceName(value); return *this;}


    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline const SourceIpConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }

    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }

    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline void SetSourceIpConfig(const SourceIpConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }

    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline void SetSourceIpConfig(SourceIpConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }

    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline UpdateWorkforceRequest& WithSourceIpConfig(const SourceIpConfig& value) { SetSourceIpConfig(value); return *this;}

    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline UpdateWorkforceRequest& WithSourceIpConfig(SourceIpConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}


    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline const OidcConfig& GetOidcConfig() const{ return m_oidcConfig; }

    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline bool OidcConfigHasBeenSet() const { return m_oidcConfigHasBeenSet; }

    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline void SetOidcConfig(const OidcConfig& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = value; }

    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline void SetOidcConfig(OidcConfig&& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = std::move(value); }

    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline UpdateWorkforceRequest& WithOidcConfig(const OidcConfig& value) { SetOidcConfig(value); return *this;}

    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline UpdateWorkforceRequest& WithOidcConfig(OidcConfig&& value) { SetOidcConfig(std::move(value)); return *this;}


    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline const WorkforceVpcConfigRequest& GetWorkforceVpcConfig() const{ return m_workforceVpcConfig; }

    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline bool WorkforceVpcConfigHasBeenSet() const { return m_workforceVpcConfigHasBeenSet; }

    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline void SetWorkforceVpcConfig(const WorkforceVpcConfigRequest& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = value; }

    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline void SetWorkforceVpcConfig(WorkforceVpcConfigRequest&& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = std::move(value); }

    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline UpdateWorkforceRequest& WithWorkforceVpcConfig(const WorkforceVpcConfigRequest& value) { SetWorkforceVpcConfig(value); return *this;}

    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline UpdateWorkforceRequest& WithWorkforceVpcConfig(WorkforceVpcConfigRequest&& value) { SetWorkforceVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet = false;

    OidcConfig m_oidcConfig;
    bool m_oidcConfigHasBeenSet = false;

    WorkforceVpcConfigRequest m_workforceVpcConfig;
    bool m_workforceVpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
