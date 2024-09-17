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
    AWS_SAGEMAKER_API Workforce();
    AWS_SAGEMAKER_API Workforce(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Workforce& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceName() const{ return m_workforceName; }
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }
    inline void SetWorkforceName(const Aws::String& value) { m_workforceNameHasBeenSet = true; m_workforceName = value; }
    inline void SetWorkforceName(Aws::String&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::move(value); }
    inline void SetWorkforceName(const char* value) { m_workforceNameHasBeenSet = true; m_workforceName.assign(value); }
    inline Workforce& WithWorkforceName(const Aws::String& value) { SetWorkforceName(value); return *this;}
    inline Workforce& WithWorkforceName(Aws::String&& value) { SetWorkforceName(std::move(value)); return *this;}
    inline Workforce& WithWorkforceName(const char* value) { SetWorkforceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceArn() const{ return m_workforceArn; }
    inline bool WorkforceArnHasBeenSet() const { return m_workforceArnHasBeenSet; }
    inline void SetWorkforceArn(const Aws::String& value) { m_workforceArnHasBeenSet = true; m_workforceArn = value; }
    inline void SetWorkforceArn(Aws::String&& value) { m_workforceArnHasBeenSet = true; m_workforceArn = std::move(value); }
    inline void SetWorkforceArn(const char* value) { m_workforceArnHasBeenSet = true; m_workforceArn.assign(value); }
    inline Workforce& WithWorkforceArn(const Aws::String& value) { SetWorkforceArn(value); return *this;}
    inline Workforce& WithWorkforceArn(Aws::String&& value) { SetWorkforceArn(std::move(value)); return *this;}
    inline Workforce& WithWorkforceArn(const char* value) { SetWorkforceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date that <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateWorkforce.html">UpdateWorkforce</a>
     * was used to successfully add one or more IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline Workforce& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline Workforce& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one to ten IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list. By default, a workforce isn't
     * restricted to specific IP addresses.</p>
     */
    inline const SourceIpConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }
    inline void SetSourceIpConfig(const SourceIpConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }
    inline void SetSourceIpConfig(SourceIpConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }
    inline Workforce& WithSourceIpConfig(const SourceIpConfig& value) { SetSourceIpConfig(value); return *this;}
    inline Workforce& WithSourceIpConfig(SourceIpConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdomain for your OIDC Identity Provider.</p>
     */
    inline const Aws::String& GetSubDomain() const{ return m_subDomain; }
    inline bool SubDomainHasBeenSet() const { return m_subDomainHasBeenSet; }
    inline void SetSubDomain(const Aws::String& value) { m_subDomainHasBeenSet = true; m_subDomain = value; }
    inline void SetSubDomain(Aws::String&& value) { m_subDomainHasBeenSet = true; m_subDomain = std::move(value); }
    inline void SetSubDomain(const char* value) { m_subDomainHasBeenSet = true; m_subDomain.assign(value); }
    inline Workforce& WithSubDomain(const Aws::String& value) { SetSubDomain(value); return *this;}
    inline Workforce& WithSubDomain(Aws::String&& value) { SetSubDomain(std::move(value)); return *this;}
    inline Workforce& WithSubDomain(const char* value) { SetSubDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of an Amazon Cognito workforce. A single Cognito workforce
     * is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p>
     */
    inline const CognitoConfig& GetCognitoConfig() const{ return m_cognitoConfig; }
    inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
    inline void SetCognitoConfig(const CognitoConfig& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = value; }
    inline void SetCognitoConfig(CognitoConfig&& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = std::move(value); }
    inline Workforce& WithCognitoConfig(const CognitoConfig& value) { SetCognitoConfig(value); return *this;}
    inline Workforce& WithCognitoConfig(CognitoConfig&& value) { SetCognitoConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of an OIDC Identity Provider (IdP) private workforce.</p>
     */
    inline const OidcConfigForResponse& GetOidcConfig() const{ return m_oidcConfig; }
    inline bool OidcConfigHasBeenSet() const { return m_oidcConfigHasBeenSet; }
    inline void SetOidcConfig(const OidcConfigForResponse& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = value; }
    inline void SetOidcConfig(OidcConfigForResponse&& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = std::move(value); }
    inline Workforce& WithOidcConfig(const OidcConfigForResponse& value) { SetOidcConfig(value); return *this;}
    inline Workforce& WithOidcConfig(OidcConfigForResponse&& value) { SetOidcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the workforce is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline Workforce& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline Workforce& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a VPC workforce.</p>
     */
    inline const WorkforceVpcConfigResponse& GetWorkforceVpcConfig() const{ return m_workforceVpcConfig; }
    inline bool WorkforceVpcConfigHasBeenSet() const { return m_workforceVpcConfigHasBeenSet; }
    inline void SetWorkforceVpcConfig(const WorkforceVpcConfigResponse& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = value; }
    inline void SetWorkforceVpcConfig(WorkforceVpcConfigResponse&& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = std::move(value); }
    inline Workforce& WithWorkforceVpcConfig(const WorkforceVpcConfigResponse& value) { SetWorkforceVpcConfig(value); return *this;}
    inline Workforce& WithWorkforceVpcConfig(WorkforceVpcConfigResponse&& value) { SetWorkforceVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your workforce.</p>
     */
    inline const WorkforceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkforceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkforceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Workforce& WithStatus(const WorkforceStatus& value) { SetStatus(value); return *this;}
    inline Workforce& WithStatus(WorkforceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason your workforce failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline Workforce& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline Workforce& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline Workforce& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;

    Aws::String m_workforceArn;
    bool m_workforceArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet = false;

    Aws::String m_subDomain;
    bool m_subDomainHasBeenSet = false;

    CognitoConfig m_cognitoConfig;
    bool m_cognitoConfigHasBeenSet = false;

    OidcConfigForResponse m_oidcConfig;
    bool m_oidcConfigHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    WorkforceVpcConfigResponse m_workforceVpcConfig;
    bool m_workforceVpcConfigHasBeenSet = false;

    WorkforceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
