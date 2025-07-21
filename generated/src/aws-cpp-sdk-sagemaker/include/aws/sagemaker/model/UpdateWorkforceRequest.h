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
#include <aws/sagemaker/model/WorkforceIpAddressType.h>
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
    AWS_SAGEMAKER_API UpdateWorkforceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkforce"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the private workforce that you want to update. You can find your
     * workforce name by using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListWorkforces.html">ListWorkforces</a>
     * operation.</p>
     */
    inline const Aws::String& GetWorkforceName() const { return m_workforceName; }
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }
    template<typename WorkforceNameT = Aws::String>
    void SetWorkforceName(WorkforceNameT&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::forward<WorkforceNameT>(value); }
    template<typename WorkforceNameT = Aws::String>
    UpdateWorkforceRequest& WithWorkforceName(WorkforceNameT&& value) { SetWorkforceName(std::forward<WorkforceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one to ten worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum: Ten
     * CIDR values</p>
     */
    inline const SourceIpConfig& GetSourceIpConfig() const { return m_sourceIpConfig; }
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }
    template<typename SourceIpConfigT = SourceIpConfig>
    void SetSourceIpConfig(SourceIpConfigT&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::forward<SourceIpConfigT>(value); }
    template<typename SourceIpConfigT = SourceIpConfig>
    UpdateWorkforceRequest& WithSourceIpConfig(SourceIpConfigT&& value) { SetSourceIpConfig(std::forward<SourceIpConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to update your OIDC Identity Provider (IdP) configuration
     * for a workforce made using your own IdP.</p>
     */
    inline const OidcConfig& GetOidcConfig() const { return m_oidcConfig; }
    inline bool OidcConfigHasBeenSet() const { return m_oidcConfigHasBeenSet; }
    template<typename OidcConfigT = OidcConfig>
    void SetOidcConfig(OidcConfigT&& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = std::forward<OidcConfigT>(value); }
    template<typename OidcConfigT = OidcConfig>
    UpdateWorkforceRequest& WithOidcConfig(OidcConfigT&& value) { SetOidcConfig(std::forward<OidcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to update your VPC configuration for a workforce.</p>
     */
    inline const WorkforceVpcConfigRequest& GetWorkforceVpcConfig() const { return m_workforceVpcConfig; }
    inline bool WorkforceVpcConfigHasBeenSet() const { return m_workforceVpcConfigHasBeenSet; }
    template<typename WorkforceVpcConfigT = WorkforceVpcConfigRequest>
    void SetWorkforceVpcConfig(WorkforceVpcConfigT&& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = std::forward<WorkforceVpcConfigT>(value); }
    template<typename WorkforceVpcConfigT = WorkforceVpcConfigRequest>
    UpdateWorkforceRequest& WithWorkforceVpcConfig(WorkforceVpcConfigT&& value) { SetWorkforceVpcConfig(std::forward<WorkforceVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify whether you want <code>IPv4</code> only or
     * <code>dualstack</code> (<code>IPv4</code> and <code>IPv6</code>) to support your
     * labeling workforce.</p>
     */
    inline WorkforceIpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(WorkforceIpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline UpdateWorkforceRequest& WithIpAddressType(WorkforceIpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet = false;

    OidcConfig m_oidcConfig;
    bool m_oidcConfigHasBeenSet = false;

    WorkforceVpcConfigRequest m_workforceVpcConfig;
    bool m_workforceVpcConfigHasBeenSet = false;

    WorkforceIpAddressType m_ipAddressType{WorkforceIpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
