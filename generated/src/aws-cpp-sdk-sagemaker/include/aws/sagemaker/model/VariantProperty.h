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
   * are updating an endpoint with the
   * <a>UpdateEndpointInput$RetainAllVariantProperties</a> option set to
   * <code>true</code>, the <code>VariantProperty</code> objects listed in
   * <a>UpdateEndpointInput$ExcludeRetainedVariantProperties</a> override the
   * existing variant properties of the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/VariantProperty">AWS
   * API Reference</a></p>
   */
  class VariantProperty
  {
  public:
    AWS_SAGEMAKER_API VariantProperty();
    AWS_SAGEMAKER_API VariantProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API VariantProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <a>ProductionVariant$InitialInstanceCount</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DesiredWeight</code>: Overrides the existing variant weights using the
     * <a>ProductionVariant$InitialVariantWeight</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DataCaptureConfig</code>: (Not currently supported.)</p> </li> </ul>
     */
    inline const VariantPropertyType& GetVariantPropertyType() const{ return m_variantPropertyType; }

    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <a>ProductionVariant$InitialInstanceCount</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DesiredWeight</code>: Overrides the existing variant weights using the
     * <a>ProductionVariant$InitialVariantWeight</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DataCaptureConfig</code>: (Not currently supported.)</p> </li> </ul>
     */
    inline bool VariantPropertyTypeHasBeenSet() const { return m_variantPropertyTypeHasBeenSet; }

    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <a>ProductionVariant$InitialInstanceCount</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DesiredWeight</code>: Overrides the existing variant weights using the
     * <a>ProductionVariant$InitialVariantWeight</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DataCaptureConfig</code>: (Not currently supported.)</p> </li> </ul>
     */
    inline void SetVariantPropertyType(const VariantPropertyType& value) { m_variantPropertyTypeHasBeenSet = true; m_variantPropertyType = value; }

    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <a>ProductionVariant$InitialInstanceCount</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DesiredWeight</code>: Overrides the existing variant weights using the
     * <a>ProductionVariant$InitialVariantWeight</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DataCaptureConfig</code>: (Not currently supported.)</p> </li> </ul>
     */
    inline void SetVariantPropertyType(VariantPropertyType&& value) { m_variantPropertyTypeHasBeenSet = true; m_variantPropertyType = std::move(value); }

    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <a>ProductionVariant$InitialInstanceCount</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DesiredWeight</code>: Overrides the existing variant weights using the
     * <a>ProductionVariant$InitialVariantWeight</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DataCaptureConfig</code>: (Not currently supported.)</p> </li> </ul>
     */
    inline VariantProperty& WithVariantPropertyType(const VariantPropertyType& value) { SetVariantPropertyType(value); return *this;}

    /**
     * <p>The type of variant property. The supported values are:</p> <ul> <li> <p>
     * <code>DesiredInstanceCount</code>: Overrides the existing variant instance
     * counts using the <a>ProductionVariant$InitialInstanceCount</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DesiredWeight</code>: Overrides the existing variant weights using the
     * <a>ProductionVariant$InitialVariantWeight</a> values in the
     * <a>CreateEndpointConfigInput$ProductionVariants</a>.</p> </li> <li> <p>
     * <code>DataCaptureConfig</code>: (Not currently supported.)</p> </li> </ul>
     */
    inline VariantProperty& WithVariantPropertyType(VariantPropertyType&& value) { SetVariantPropertyType(std::move(value)); return *this;}

  private:

    VariantPropertyType m_variantPropertyType;
    bool m_variantPropertyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
