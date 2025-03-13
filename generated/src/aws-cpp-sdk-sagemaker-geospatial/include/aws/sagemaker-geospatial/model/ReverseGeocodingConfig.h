/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The input structure for Reverse Geocoding operation type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ReverseGeocodingConfig">AWS
   * API Reference</a></p>
   */
  class ReverseGeocodingConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ReverseGeocodingConfig() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ReverseGeocodingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ReverseGeocodingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name for the data that describes x-axis coordinate, eg. longitude
     * of a point.</p>
     */
    inline const Aws::String& GetXAttributeName() const { return m_xAttributeName; }
    inline bool XAttributeNameHasBeenSet() const { return m_xAttributeNameHasBeenSet; }
    template<typename XAttributeNameT = Aws::String>
    void SetXAttributeName(XAttributeNameT&& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = std::forward<XAttributeNameT>(value); }
    template<typename XAttributeNameT = Aws::String>
    ReverseGeocodingConfig& WithXAttributeName(XAttributeNameT&& value) { SetXAttributeName(std::forward<XAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field name for the data that describes y-axis coordinate, eg. latitude of
     * a point.</p>
     */
    inline const Aws::String& GetYAttributeName() const { return m_yAttributeName; }
    inline bool YAttributeNameHasBeenSet() const { return m_yAttributeNameHasBeenSet; }
    template<typename YAttributeNameT = Aws::String>
    void SetYAttributeName(YAttributeNameT&& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = std::forward<YAttributeNameT>(value); }
    template<typename YAttributeNameT = Aws::String>
    ReverseGeocodingConfig& WithYAttributeName(YAttributeNameT&& value) { SetYAttributeName(std::forward<YAttributeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_xAttributeName;
    bool m_xAttributeNameHasBeenSet = false;

    Aws::String m_yAttributeName;
    bool m_yAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
