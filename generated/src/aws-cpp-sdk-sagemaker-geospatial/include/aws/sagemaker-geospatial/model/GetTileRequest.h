/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/OutputType.h>
#include <aws/sagemaker-geospatial/model/TargetOptions.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class GetTileRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GetTileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTile"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERGEOSPATIAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline GetTileRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetTileRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetTileRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specify.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline GetTileRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline GetTileRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline GetTileRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageAssets() const{ return m_imageAssets; }
    inline bool ImageAssetsHasBeenSet() const { return m_imageAssetsHasBeenSet; }
    inline void SetImageAssets(const Aws::Vector<Aws::String>& value) { m_imageAssetsHasBeenSet = true; m_imageAssets = value; }
    inline void SetImageAssets(Aws::Vector<Aws::String>&& value) { m_imageAssetsHasBeenSet = true; m_imageAssets = std::move(value); }
    inline GetTileRequest& WithImageAssets(const Aws::Vector<Aws::String>& value) { SetImageAssets(value); return *this;}
    inline GetTileRequest& WithImageAssets(Aws::Vector<Aws::String>&& value) { SetImageAssets(std::move(value)); return *this;}
    inline GetTileRequest& AddImageAssets(const Aws::String& value) { m_imageAssetsHasBeenSet = true; m_imageAssets.push_back(value); return *this; }
    inline GetTileRequest& AddImageAssets(Aws::String&& value) { m_imageAssetsHasBeenSet = true; m_imageAssets.push_back(std::move(value)); return *this; }
    inline GetTileRequest& AddImageAssets(const char* value) { m_imageAssetsHasBeenSet = true; m_imageAssets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether or not to return a valid data mask.</p>
     */
    inline bool GetImageMask() const{ return m_imageMask; }
    inline bool ImageMaskHasBeenSet() const { return m_imageMaskHasBeenSet; }
    inline void SetImageMask(bool value) { m_imageMaskHasBeenSet = true; m_imageMask = value; }
    inline GetTileRequest& WithImageMask(bool value) { SetImageMask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline const OutputType& GetOutputDataType() const{ return m_outputDataType; }
    inline bool OutputDataTypeHasBeenSet() const { return m_outputDataTypeHasBeenSet; }
    inline void SetOutputDataType(const OutputType& value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = value; }
    inline void SetOutputDataType(OutputType&& value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = std::move(value); }
    inline GetTileRequest& WithOutputDataType(const OutputType& value) { SetOutputDataType(value); return *this;}
    inline GetTileRequest& WithOutputDataType(OutputType&& value) { SetOutputDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline const Aws::String& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const Aws::String& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(Aws::String&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline void SetOutputFormat(const char* value) { m_outputFormatHasBeenSet = true; m_outputFormat.assign(value); }
    inline GetTileRequest& WithOutputFormat(const Aws::String& value) { SetOutputFormat(value); return *this;}
    inline GetTileRequest& WithOutputFormat(Aws::String&& value) { SetOutputFormat(std::move(value)); return *this;}
    inline GetTileRequest& WithOutputFormat(const char* value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline const Aws::String& GetPropertyFilters() const{ return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    inline void SetPropertyFilters(const Aws::String& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }
    inline void SetPropertyFilters(Aws::String&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }
    inline void SetPropertyFilters(const char* value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.assign(value); }
    inline GetTileRequest& WithPropertyFilters(const Aws::String& value) { SetPropertyFilters(value); return *this;}
    inline GetTileRequest& WithPropertyFilters(Aws::String&& value) { SetPropertyFilters(std::move(value)); return *this;}
    inline GetTileRequest& WithPropertyFilters(const char* value) { SetPropertyFilters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline const TargetOptions& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const TargetOptions& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(TargetOptions&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline GetTileRequest& WithTarget(const TargetOptions& value) { SetTarget(value); return *this;}
    inline GetTileRequest& WithTarget(TargetOptions&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline const Aws::String& GetTimeRangeFilter() const{ return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    inline void SetTimeRangeFilter(const Aws::String& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }
    inline void SetTimeRangeFilter(Aws::String&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }
    inline void SetTimeRangeFilter(const char* value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter.assign(value); }
    inline GetTileRequest& WithTimeRangeFilter(const Aws::String& value) { SetTimeRangeFilter(value); return *this;}
    inline GetTileRequest& WithTimeRangeFilter(Aws::String&& value) { SetTimeRangeFilter(std::move(value)); return *this;}
    inline GetTileRequest& WithTimeRangeFilter(const char* value) { SetTimeRangeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The x coordinate of the tile input.</p>
     */
    inline int GetX() const{ return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(int value) { m_xHasBeenSet = true; m_x = value; }
    inline GetTileRequest& WithX(int value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The y coordinate of the tile input.</p>
     */
    inline int GetY() const{ return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(int value) { m_yHasBeenSet = true; m_y = value; }
    inline GetTileRequest& WithY(int value) { SetY(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The z coordinate of the tile input.</p>
     */
    inline int GetZ() const{ return m_z; }
    inline bool ZHasBeenSet() const { return m_zHasBeenSet; }
    inline void SetZ(int value) { m_zHasBeenSet = true; m_z = value; }
    inline GetTileRequest& WithZ(int value) { SetZ(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageAssets;
    bool m_imageAssetsHasBeenSet = false;

    bool m_imageMask;
    bool m_imageMaskHasBeenSet = false;

    OutputType m_outputDataType;
    bool m_outputDataTypeHasBeenSet = false;

    Aws::String m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    TargetOptions m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;

    int m_x;
    bool m_xHasBeenSet = false;

    int m_y;
    bool m_yHasBeenSet = false;

    int m_z;
    bool m_zHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
