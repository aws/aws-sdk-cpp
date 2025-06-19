/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CfnTemplateProviderDetail.h>
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
   * <p> Details about a template provider configuration and associated provisioning
   * information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TemplateProviderDetail">AWS
   * API Reference</a></p>
   */
  class TemplateProviderDetail
  {
  public:
    AWS_SAGEMAKER_API TemplateProviderDetail() = default;
    AWS_SAGEMAKER_API TemplateProviderDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TemplateProviderDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Details about a CloudFormation template provider configuration and
     * associated provisioning information. </p>
     */
    inline const CfnTemplateProviderDetail& GetCfnTemplateProviderDetail() const { return m_cfnTemplateProviderDetail; }
    inline bool CfnTemplateProviderDetailHasBeenSet() const { return m_cfnTemplateProviderDetailHasBeenSet; }
    template<typename CfnTemplateProviderDetailT = CfnTemplateProviderDetail>
    void SetCfnTemplateProviderDetail(CfnTemplateProviderDetailT&& value) { m_cfnTemplateProviderDetailHasBeenSet = true; m_cfnTemplateProviderDetail = std::forward<CfnTemplateProviderDetailT>(value); }
    template<typename CfnTemplateProviderDetailT = CfnTemplateProviderDetail>
    TemplateProviderDetail& WithCfnTemplateProviderDetail(CfnTemplateProviderDetailT&& value) { SetCfnTemplateProviderDetail(std::forward<CfnTemplateProviderDetailT>(value)); return *this;}
    ///@}
  private:

    CfnTemplateProviderDetail m_cfnTemplateProviderDetail;
    bool m_cfnTemplateProviderDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
