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
    AWS_SAGEMAKERGEOSPATIAL_API ItemSource();
    AWS_SAGEMAKERGEOSPATIAL_API ItemSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ItemSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is a dictionary of Asset Objects data associated with the Item that can
     * be downloaded or streamed, each with a unique key.</p>
     */
    inline const Aws::Map<Aws::String, AssetValue>& GetAssets() const{ return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    inline void SetAssets(const Aws::Map<Aws::String, AssetValue>& value) { m_assetsHasBeenSet = true; m_assets = value; }
    inline void SetAssets(Aws::Map<Aws::String, AssetValue>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }
    inline ItemSource& WithAssets(const Aws::Map<Aws::String, AssetValue>& value) { SetAssets(value); return *this;}
    inline ItemSource& WithAssets(Aws::Map<Aws::String, AssetValue>&& value) { SetAssets(std::move(value)); return *this;}
    inline ItemSource& AddAssets(const Aws::String& key, const AssetValue& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, value); return *this; }
    inline ItemSource& AddAssets(Aws::String&& key, const AssetValue& value) { m_assetsHasBeenSet = true; m_assets.emplace(std::move(key), value); return *this; }
    inline ItemSource& AddAssets(const Aws::String& key, AssetValue&& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, std::move(value)); return *this; }
    inline ItemSource& AddAssets(Aws::String&& key, AssetValue&& value) { m_assetsHasBeenSet = true; m_assets.emplace(std::move(key), std::move(value)); return *this; }
    inline ItemSource& AddAssets(const char* key, AssetValue&& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, std::move(value)); return *this; }
    inline ItemSource& AddAssets(const char* key, const AssetValue& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The searchable date and time of the item, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTimeHasBeenSet = true; m_dateTime = value; }
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::move(value); }
    inline ItemSource& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}
    inline ItemSource& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item Geometry in GeoJson format.</p>
     */
    inline const Geometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline ItemSource& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}
    inline ItemSource& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique Id for the source item.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ItemSource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ItemSource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ItemSource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field contains additional properties of the item.</p>
     */
    inline const Properties& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Properties& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Properties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline ItemSource& WithProperties(const Properties& value) { SetProperties(value); return *this;}
    inline ItemSource& WithProperties(Properties&& value) { SetProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AssetValue> m_assets;
    bool m_assetsHasBeenSet = false;

    Aws::Utils::DateTime m_dateTime;
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
