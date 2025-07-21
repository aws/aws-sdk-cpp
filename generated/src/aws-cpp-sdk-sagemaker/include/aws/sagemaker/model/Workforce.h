/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SourceIpConfig.h>
#include <aws/sagemaker/model/CognitoConfig.h>
#include <aws/sagemaker/model/OidcConfigForResponse.h>
#include <aws/sagemaker/model/WorkforceVpcConfigResponse.h>
#include <aws/sagemaker/model/WorkforceStatus.h>
#include <aws/sagemaker/model/WorkforceIpAddressType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A single private workforce, which is automatically created when you create
   * your first private work team. You can create one private work force in each
   * Amazon Web Services Region. By default, any workforce-related API operation used
   * in a specific region will apply to the workforce created in that region. To
   * learn how to create a private workforce, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
   * a Private Workforce</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Workforce">AWS
   * API Reference</a></p>
   */
  class Workforce
  {
  public:
    AWS_SAGEMAKER_API Workforce() = default;
    AWS_SAGEMAKER_API Workforce(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Workforce& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceName() const { return m_workforceName; }
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }
    template<typename WorkforceNameT = Aws::String>
    void SetWorkforceName(WorkforceNameT&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::forward<WorkforceNameT>(value); }
    template<typename WorkforceNameT = Aws::String>
    Workforce& WithWorkforceName(WorkforceNameT&& value) { SetWorkforceName(std::forward<WorkforceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceArn() const { return m_workforceArn; }
    inline bool WorkforceArnHasBeenSet() const { return m_workforceArnHasBeenSet; }
    template<typename WorkforceArnT = Aws::String>
    void SetWorkforceArn(WorkforceArnT&& value) { m_workforceArnHasBeenSet = true; m_workforceArn = std::forward<WorkforceArnT>(value); }
    template<typename WorkforceArnT = Aws::String>
    Workforce& WithWorkforceArn(WorkforceArnT&& value) { SetWorkforceArn(std::forward<WorkforceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date that <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateWorkforce.html">UpdateWorkforce</a>
     * was used to successfully add one or more IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    Workforce& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one to ten IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list. By default, a workforce isn't
     * restricted to specific IP addresses.</p>
     */
    inline const SourceIpConfig& GetSourceIpConfig() const { return m_sourceIpConfig; }
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }
    template<typename SourceIpConfigT = SourceIpConfig>
    void SetSourceIpConfig(SourceIpConfigT&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::forward<SourceIpConfigT>(value); }
    template<typename SourceIpConfigT = SourceIpConfig>
    Workforce& WithSourceIpConfig(SourceIpConfigT&& value) { SetSourceIpConfig(std::forward<SourceIpConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdomain for your OIDC Identity Provider.</p>
     */
    inline const Aws::String& GetSubDomain() const { return m_subDomain; }
    inline bool SubDomainHasBeenSet() const { return m_subDomainHasBeenSet; }
    template<typename SubDomainT = Aws::String>
    void SetSubDomain(SubDomainT&& value) { m_subDomainHasBeenSet = true; m_subDomain = std::forward<SubDomainT>(value); }
    template<typename SubDomainT = Aws::String>
    Workforce& WithSubDomain(SubDomainT&& value) { SetSubDomain(std::forward<SubDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of an Amazon Cognito workforce. A single Cognito workforce
     * is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p>
     */
    inline const CognitoConfig& GetCognitoConfig() const { return m_cognitoConfig; }
    inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
    template<typename CognitoConfigT = CognitoConfig>
    void SetCognitoConfig(CognitoConfigT&& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = std::forward<CognitoConfigT>(value); }
    template<typename CognitoConfigT = CognitoConfig>
    Workforce& WithCognitoConfig(CognitoConfigT&& value) { SetCognitoConfig(std::forward<CognitoConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of an OIDC Identity Provider (IdP) private workforce.</p>
     */
    inline const OidcConfigForResponse& GetOidcConfig() const { return m_oidcConfig; }
    inline bool OidcConfigHasBeenSet() const { return m_oidcConfigHasBeenSet; }
    template<typename OidcConfigT = OidcConfigForResponse>
    void SetOidcConfig(OidcConfigT&& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = std::forward<OidcConfigT>(value); }
    template<typename OidcConfigT = OidcConfigForResponse>
    Workforce& WithOidcConfig(OidcConfigT&& value) { SetOidcConfig(std::forward<OidcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the workforce is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    Workforce& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a VPC workforce.</p>
     */
    inline const WorkforceVpcConfigResponse& GetWorkforceVpcConfig() const { return m_workforceVpcConfig; }
    inline bool WorkforceVpcConfigHasBeenSet() const { return m_workforceVpcConfigHasBeenSet; }
    template<typename WorkforceVpcConfigT = WorkforceVpcConfigResponse>
    void SetWorkforceVpcConfig(WorkforceVpcConfigT&& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = std::forward<WorkforceVpcConfigT>(value); }
    template<typename WorkforceVpcConfigT = WorkforceVpcConfigResponse>
    Workforce& WithWorkforceVpcConfig(WorkforceVpcConfigT&& value) { SetWorkforceVpcConfig(std::forward<WorkforceVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your workforce.</p>
     */
    inline WorkforceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkforceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Workforce& WithStatus(WorkforceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason your workforce failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    Workforce& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type you specify - either <code>IPv4</code> only or
     * <code>dualstack</code> (<code>IPv4</code> and <code>IPv6</code>) - to support
     * your labeling workforce.</p>
     */
    inline WorkforceIpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(WorkforceIpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline Workforce& WithIpAddressType(WorkforceIpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;

    Aws::String m_workforceArn;
    bool m_workforceArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet = false;

    Aws::String m_subDomain;
    bool m_subDomainHasBeenSet = false;

    CognitoConfig m_cognitoConfig;
    bool m_cognitoConfigHasBeenSet = false;

    OidcConfigForResponse m_oidcConfig;
    bool m_oidcConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    WorkforceVpcConfigResponse m_workforceVpcConfig;
    bool m_workforceVpcConfigHasBeenSet = false;

    WorkforceStatus m_status{WorkforceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    WorkforceIpAddressType m_ipAddressType{WorkforceIpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
