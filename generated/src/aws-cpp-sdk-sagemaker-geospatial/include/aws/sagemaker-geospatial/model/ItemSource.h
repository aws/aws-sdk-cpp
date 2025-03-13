/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/Geometry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/Properties.h>
#include <aws/sagemaker-geospatial/model/AssetValue.h>
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
   * <p>The structure representing the items in the response for
   * SearchRasterDataCollection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ItemSource">AWS
   * API Reference</a></p>
   */
  class ItemSource
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ItemSource() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ItemSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ItemSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is a dictionary of Asset Objects data associated with the Item that can
     * be downloaded or streamed, each with a unique key.</p>
     */
    inline const Aws::Map<Aws::String, AssetValue>& GetAssets() const { return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    template<typename AssetsT = Aws::Map<Aws::String, AssetValue>>
    void SetAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets = std::forward<AssetsT>(value); }
    template<typename AssetsT = Aws::Map<Aws::String, AssetValue>>
    ItemSource& WithAssets(AssetsT&& value) { SetAssets(std::forward<AssetsT>(value)); return *this;}
    template<typename AssetsKeyT = Aws::String, typename AssetsValueT = AssetValue>
    ItemSource& AddAssets(AssetsKeyT&& key, AssetsValueT&& value) {
      m_assetsHasBeenSet = true; m_assets.emplace(std::forward<AssetsKeyT>(key), std::forward<AssetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The searchable date and time of the item, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const { return m_dateTime; }
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
    template<typename DateTimeT = Aws::Utils::DateTime>
    void SetDateTime(DateTimeT&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::forward<DateTimeT>(value); }
    template<typename DateTimeT = Aws::Utils::DateTime>
    ItemSource& WithDateTime(DateTimeT&& value) { SetDateTime(std::forward<DateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item Geometry in GeoJson format.</p>
     */
    inline const Geometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = Geometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = Geometry>
    ItemSource& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique Id for the source item.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ItemSource& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field contains additional properties of the item.</p>
     */
    inline const Properties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Properties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Properties>
    ItemSource& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AssetValue> m_assets;
    bool m_assetsHasBeenSet = false;

    Aws::Utils::DateTime m_dateTime{};
    bool m_dateTimeHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Properties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
