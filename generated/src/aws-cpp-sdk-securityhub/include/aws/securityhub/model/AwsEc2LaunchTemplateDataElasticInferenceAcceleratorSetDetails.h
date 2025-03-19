/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details for an Amazon Elastic Inference accelerator. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of Elastic Inference accelerators to attach to the instance. </p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
