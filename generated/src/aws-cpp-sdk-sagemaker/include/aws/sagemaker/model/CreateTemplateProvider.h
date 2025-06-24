/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CfnCreateTemplateProvider.h>
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
   * <p> Contains configuration details for a template provider. Only one type of
   * template provider can be specified. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTemplateProvider">AWS
   * API Reference</a></p>
   */
  class CreateTemplateProvider
  {
  public:
    AWS_SAGEMAKER_API CreateTemplateProvider() = default;
    AWS_SAGEMAKER_API CreateTemplateProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CreateTemplateProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The CloudFormation template provider configuration for creating
     * infrastructure resources. </p>
     */
    inline const CfnCreateTemplateProvider& GetCfnTemplateProvider() const { return m_cfnTemplateProvider; }
    inline bool CfnTemplateProviderHasBeenSet() const { return m_cfnTemplateProviderHasBeenSet; }
    template<typename CfnTemplateProviderT = CfnCreateTemplateProvider>
    void SetCfnTemplateProvider(CfnTemplateProviderT&& value) { m_cfnTemplateProviderHasBeenSet = true; m_cfnTemplateProvider = std::forward<CfnTemplateProviderT>(value); }
    template<typename CfnTemplateProviderT = CfnCreateTemplateProvider>
    CreateTemplateProvider& WithCfnTemplateProvider(CfnTemplateProviderT&& value) { SetCfnTemplateProvider(std::forward<CfnTemplateProviderT>(value)); return *this;}
    ///@}
  private:

    CfnCreateTemplateProvider m_cfnTemplateProvider;
    bool m_cfnTemplateProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
