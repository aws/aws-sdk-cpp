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
   * <p>Structure representing the items in the response for
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


    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, AssetValue>& GetAssets() const{ return m_assets; }

    /**
     * <p/>
     */
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAssets(const Aws::Map<Aws::String, AssetValue>& value) { m_assetsHasBeenSet = true; m_assets = value; }

    /**
     * <p/>
     */
    inline void SetAssets(Aws::Map<Aws::String, AssetValue>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }

    /**
     * <p/>
     */
    inline ItemSource& WithAssets(const Aws::Map<Aws::String, AssetValue>& value) { SetAssets(value); return *this;}

    /**
     * <p/>
     */
    inline ItemSource& WithAssets(Aws::Map<Aws::String, AssetValue>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ItemSource& AddAssets(const Aws::String& key, const AssetValue& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, value); return *this; }

    /**
     * <p/>
     */
    inline ItemSource& AddAssets(Aws::String&& key, const AssetValue& value) { m_assetsHasBeenSet = true; m_assets.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline ItemSource& AddAssets(const Aws::String& key, AssetValue&& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline ItemSource& AddAssets(Aws::String&& key, AssetValue&& value) { m_assetsHasBeenSet = true; m_assets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline ItemSource& AddAssets(const char* key, AssetValue&& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline ItemSource& AddAssets(const char* key, const AssetValue& value) { m_assetsHasBeenSet = true; m_assets.emplace(key, value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }

    /**
     * <p/>
     */
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTimeHasBeenSet = true; m_dateTime = value; }

    /**
     * <p/>
     */
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::move(value); }

    /**
     * <p/>
     */
    inline ItemSource& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}

    /**
     * <p/>
     */
    inline ItemSource& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Geometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p/>
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p/>
     */
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p/>
     */
    inline ItemSource& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}

    /**
     * <p/>
     */
    inline ItemSource& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}


    /**
     * <p>A unique Id for the source item.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline ItemSource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline ItemSource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique Id for the source item.</p>
     */
    inline ItemSource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p/>
     */
    inline const Properties& GetProperties() const{ return m_properties; }

    /**
     * <p/>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProperties(const Properties& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p/>
     */
    inline void SetProperties(Properties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p/>
     */
    inline ItemSource& WithProperties(const Properties& value) { SetProperties(value); return *this;}

    /**
     * <p/>
     */
    inline ItemSource& WithProperties(Properties&& value) { SetProperties(std::move(value)); return *this;}

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
