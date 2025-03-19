/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/VariantPropertyType.h>
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
   * <p>Specifies a production variant property type for an Endpoint.</p> <p>If you
   * are updating an endpoint with the <code>RetainAllVariantProperties</code> option
   * of <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpoint.html">UpdateEndpointInput</a>
   * set to <code>true</code>, the <code>VariantProperty</code> objects listed in the
   * <code>ExcludeRetainedVariantProperties</code> parameter of <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpoint.html">UpdateEndpointInput</a>
   * override the existing variant properties of the endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/VariantProperty">AWS
   * API Reference</a></p>
   */
  class VariantProperty
  {
  public:
    AWS_SAGEMAKER_API VariantProperty() = default;
    AWS_SAGEMAKER_API VariantProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API VariantProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <code>InitialInstanceCount</code> values in the
     * <code>ProductionVariants</code> of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">CreateEndpointConfig</a>.</p>
     * </li> <li> <p> <code>DesiredWeight</code>: Overrides the existing variant
     * weights using the <code>InitialVariantWeight</code> values in the
     * <code>ProductionVariants</code> of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpointConfig.html">CreateEndpointConfig</a>.</p>
     * </li> <li> <p> <code>DataCaptureConfig</code>: (Not currently supported.)</p>
     * </li> </ul>
     */
    inline VariantPropertyType GetVariantPropertyType() const { return m_variantPropertyType; }
    inline bool VariantPropertyTypeHasBeenSet() const { return m_variantPropertyTypeHasBeenSet; }
    inline void SetVariantPropertyType(VariantPropertyType value) { m_variantPropertyTypeHasBeenSet = true; m_variantPropertyType = value; }
    inline VariantProperty& WithVariantPropertyType(VariantPropertyType value) { SetVariantPropertyType(value); return *this;}
    ///@}
  private:

    VariantPropertyType m_variantPropertyType{VariantPropertyType::NOT_SET};
    bool m_variantPropertyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
