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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ReverseGeocodingConfig">AWS
   * API Reference</a></p>
   */
  class ReverseGeocodingConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ReverseGeocodingConfig();
    AWS_SAGEMAKERGEOSPATIAL_API ReverseGeocodingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ReverseGeocodingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetXAttributeName() const{ return m_xAttributeName; }

    /**
     * <p/>
     */
    inline bool XAttributeNameHasBeenSet() const { return m_xAttributeNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetXAttributeName(const Aws::String& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = value; }

    /**
     * <p/>
     */
    inline void SetXAttributeName(Aws::String&& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetXAttributeName(const char* value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName.assign(value); }

    /**
     * <p/>
     */
    inline ReverseGeocodingConfig& WithXAttributeName(const Aws::String& value) { SetXAttributeName(value); return *this;}

    /**
     * <p/>
     */
    inline ReverseGeocodingConfig& WithXAttributeName(Aws::String&& value) { SetXAttributeName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ReverseGeocodingConfig& WithXAttributeName(const char* value) { SetXAttributeName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetYAttributeName() const{ return m_yAttributeName; }

    /**
     * <p/>
     */
    inline bool YAttributeNameHasBeenSet() const { return m_yAttributeNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetYAttributeName(const Aws::String& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = value; }

    /**
     * <p/>
     */
    inline void SetYAttributeName(Aws::String&& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetYAttributeName(const char* value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName.assign(value); }

    /**
     * <p/>
     */
    inline ReverseGeocodingConfig& WithYAttributeName(const Aws::String& value) { SetYAttributeName(value); return *this;}

    /**
     * <p/>
     */
    inline ReverseGeocodingConfig& WithYAttributeName(Aws::String&& value) { SetYAttributeName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ReverseGeocodingConfig& WithYAttributeName(const char* value) { SetYAttributeName(value); return *this;}

  private:

    Aws::String m_xAttributeName;
    bool m_xAttributeNameHasBeenSet = false;

    Aws::String m_yAttributeName;
    bool m_yAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
