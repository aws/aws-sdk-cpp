/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FeatureStatus.h>
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
   * <p>The Trusted Identity Propagation (TIP) settings for the SageMaker domain.
   * These settings determine how user identities from IAM Identity Center are
   * propagated through the domain to TIP enabled Amazon Web Services
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrustedIdentityPropagationSettings">AWS
   * API Reference</a></p>
   */
  class TrustedIdentityPropagationSettings
  {
  public:
    AWS_SAGEMAKER_API TrustedIdentityPropagationSettings() = default;
    AWS_SAGEMAKER_API TrustedIdentityPropagationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrustedIdentityPropagationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of Trusted Identity Propagation (TIP) at the SageMaker domain
     * level. </p> <p>When disabled, standard IAM role-based access is used. </p>
     * <p>When enabled:</p> <ul> <li> <p>User identities from IAM Identity Center are
     * propagated through the application to TIP enabled Amazon Web Services
     * services.</p> </li> <li> <p>New applications or existing applications that are
     * automatically patched, will use the domain level configuration.</p> </li> </ul>
     */
    inline FeatureStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FeatureStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TrustedIdentityPropagationSettings& WithStatus(FeatureStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    FeatureStatus m_status{FeatureStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
