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
   * <p>The input structure for Map Matching operation type.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/MapMatchingConfig">AWS
   * API Reference</a></p>
   */
  class MapMatchingConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig() = default;
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name for the data that describes the identifier representing a
     * collection of GPS points belonging to an individual trace.</p>
     */
    inline const Aws::String& GetIdAttributeName() const { return m_idAttributeName; }
    inline bool IdAttributeNameHasBeenSet() const { return m_idAttributeNameHasBeenSet; }
    template<typename IdAttributeNameT = Aws::String>
    void SetIdAttributeName(IdAttributeNameT&& value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName = std::forward<IdAttributeNameT>(value); }
    template<typename IdAttributeNameT = Aws::String>
    MapMatchingConfig& WithIdAttributeName(IdAttributeNameT&& value) { SetIdAttributeName(std::forward<IdAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline const Aws::String& GetTimestampAttributeName() const { return m_timestampAttributeName; }
    inline bool TimestampAttributeNameHasBeenSet() const { return m_timestampAttributeNameHasBeenSet; }
    template<typename TimestampAttributeNameT = Aws::String>
    void SetTimestampAttributeName(TimestampAttributeNameT&& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = std::forward<TimestampAttributeNameT>(value); }
    template<typename TimestampAttributeNameT = Aws::String>
    MapMatchingConfig& WithTimestampAttributeName(TimestampAttributeNameT&& value) { SetTimestampAttributeName(std::forward<TimestampAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the X-attribute</p>
     */
    inline const Aws::String& GetXAttributeName() const { return m_xAttributeName; }
    inline bool XAttributeNameHasBeenSet() const { return m_xAttributeNameHasBeenSet; }
    template<typename XAttributeNameT = Aws::String>
    void SetXAttributeName(XAttributeNameT&& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = std::forward<XAttributeNameT>(value); }
    template<typename XAttributeNameT = Aws::String>
    MapMatchingConfig& WithXAttributeName(XAttributeNameT&& value) { SetXAttributeName(std::forward<XAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Y-attribute</p>
     */
    inline const Aws::String& GetYAttributeName() const { return m_yAttributeName; }
    inline bool YAttributeNameHasBeenSet() const { return m_yAttributeNameHasBeenSet; }
    template<typename YAttributeNameT = Aws::String>
    void SetYAttributeName(YAttributeNameT&& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = std::forward<YAttributeNameT>(value); }
    template<typename YAttributeNameT = Aws::String>
    MapMatchingConfig& WithYAttributeName(YAttributeNameT&& value) { SetYAttributeName(std::forward<YAttributeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idAttributeName;
    bool m_idAttributeNameHasBeenSet = false;

    Aws::String m_timestampAttributeName;
    bool m_timestampAttributeNameHasBeenSet = false;

    Aws::String m_xAttributeName;
    bool m_xAttributeNameHasBeenSet = false;

    Aws::String m_yAttributeName;
    bool m_yAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
