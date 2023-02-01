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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/MapMatchingConfig">AWS
   * API Reference</a></p>
   */
  class MapMatchingConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig();
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetIdAttributeName() const{ return m_idAttributeName; }

    /**
     * <p/>
     */
    inline bool IdAttributeNameHasBeenSet() const { return m_idAttributeNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIdAttributeName(const Aws::String& value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName = value; }

    /**
     * <p/>
     */
    inline void SetIdAttributeName(Aws::String&& value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetIdAttributeName(const char* value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName.assign(value); }

    /**
     * <p/>
     */
    inline MapMatchingConfig& WithIdAttributeName(const Aws::String& value) { SetIdAttributeName(value); return *this;}

    /**
     * <p/>
     */
    inline MapMatchingConfig& WithIdAttributeName(Aws::String&& value) { SetIdAttributeName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MapMatchingConfig& WithIdAttributeName(const char* value) { SetIdAttributeName(value); return *this;}


    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline const Aws::String& GetTimestampAttributeName() const{ return m_timestampAttributeName; }

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline bool TimestampAttributeNameHasBeenSet() const { return m_timestampAttributeNameHasBeenSet; }

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline void SetTimestampAttributeName(const Aws::String& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = value; }

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline void SetTimestampAttributeName(Aws::String&& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = std::move(value); }

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline void SetTimestampAttributeName(const char* value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName.assign(value); }

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline MapMatchingConfig& WithTimestampAttributeName(const Aws::String& value) { SetTimestampAttributeName(value); return *this;}

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline MapMatchingConfig& WithTimestampAttributeName(Aws::String&& value) { SetTimestampAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline MapMatchingConfig& WithTimestampAttributeName(const char* value) { SetTimestampAttributeName(value); return *this;}


    /**
     * <p>The name of the X-attribute</p>
     */
    inline const Aws::String& GetXAttributeName() const{ return m_xAttributeName; }

    /**
     * <p>The name of the X-attribute</p>
     */
    inline bool XAttributeNameHasBeenSet() const { return m_xAttributeNameHasBeenSet; }

    /**
     * <p>The name of the X-attribute</p>
     */
    inline void SetXAttributeName(const Aws::String& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = value; }

    /**
     * <p>The name of the X-attribute</p>
     */
    inline void SetXAttributeName(Aws::String&& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = std::move(value); }

    /**
     * <p>The name of the X-attribute</p>
     */
    inline void SetXAttributeName(const char* value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName.assign(value); }

    /**
     * <p>The name of the X-attribute</p>
     */
    inline MapMatchingConfig& WithXAttributeName(const Aws::String& value) { SetXAttributeName(value); return *this;}

    /**
     * <p>The name of the X-attribute</p>
     */
    inline MapMatchingConfig& WithXAttributeName(Aws::String&& value) { SetXAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the X-attribute</p>
     */
    inline MapMatchingConfig& WithXAttributeName(const char* value) { SetXAttributeName(value); return *this;}


    /**
     * <p>The name of the Y-attribute</p>
     */
    inline const Aws::String& GetYAttributeName() const{ return m_yAttributeName; }

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline bool YAttributeNameHasBeenSet() const { return m_yAttributeNameHasBeenSet; }

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline void SetYAttributeName(const Aws::String& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = value; }

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline void SetYAttributeName(Aws::String&& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = std::move(value); }

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline void SetYAttributeName(const char* value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName.assign(value); }

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline MapMatchingConfig& WithYAttributeName(const Aws::String& value) { SetYAttributeName(value); return *this;}

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline MapMatchingConfig& WithYAttributeName(Aws::String&& value) { SetYAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the Y-attribute</p>
     */
    inline MapMatchingConfig& WithYAttributeName(const char* value) { SetYAttributeName(value); return *this;}

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
