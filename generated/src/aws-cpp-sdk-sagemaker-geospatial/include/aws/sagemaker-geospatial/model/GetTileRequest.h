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
    AWS_SAGEMAKERGEOSPATIAL_API GetTileRequest() = default;

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
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetTileRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specify.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    GetTileRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageAssets() const { return m_imageAssets; }
    inline bool ImageAssetsHasBeenSet() const { return m_imageAssetsHasBeenSet; }
    template<typename ImageAssetsT = Aws::Vector<Aws::String>>
    void SetImageAssets(ImageAssetsT&& value) { m_imageAssetsHasBeenSet = true; m_imageAssets = std::forward<ImageAssetsT>(value); }
    template<typename ImageAssetsT = Aws::Vector<Aws::String>>
    GetTileRequest& WithImageAssets(ImageAssetsT&& value) { SetImageAssets(std::forward<ImageAssetsT>(value)); return *this;}
    template<typename ImageAssetsT = Aws::String>
    GetTileRequest& AddImageAssets(ImageAssetsT&& value) { m_imageAssetsHasBeenSet = true; m_imageAssets.emplace_back(std::forward<ImageAssetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether or not to return a valid data mask.</p>
     */
    inline bool GetImageMask() const { return m_imageMask; }
    inline bool ImageMaskHasBeenSet() const { return m_imageMaskHasBeenSet; }
    inline void SetImageMask(bool value) { m_imageMaskHasBeenSet = true; m_imageMask = value; }
    inline GetTileRequest& WithImageMask(bool value) { SetImageMask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline OutputType GetOutputDataType() const { return m_outputDataType; }
    inline bool OutputDataTypeHasBeenSet() const { return m_outputDataTypeHasBeenSet; }
    inline void SetOutputDataType(OutputType value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = value; }
    inline GetTileRequest& WithOutputDataType(OutputType value) { SetOutputDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline const Aws::String& GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    template<typename OutputFormatT = Aws::String>
    void SetOutputFormat(OutputFormatT&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::forward<OutputFormatT>(value); }
    template<typename OutputFormatT = Aws::String>
    GetTileRequest& WithOutputFormat(OutputFormatT&& value) { SetOutputFormat(std::forward<OutputFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline const Aws::String& GetPropertyFilters() const { return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    template<typename PropertyFiltersT = Aws::String>
    void SetPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::forward<PropertyFiltersT>(value); }
    template<typename PropertyFiltersT = Aws::String>
    GetTileRequest& WithPropertyFilters(PropertyFiltersT&& value) { SetPropertyFilters(std::forward<PropertyFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline TargetOptions GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(TargetOptions value) { m_targetHasBeenSet = true; m_target = value; }
    inline GetTileRequest& WithTarget(TargetOptions value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline const Aws::String& GetTimeRangeFilter() const { return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    template<typename TimeRangeFilterT = Aws::String>
    void SetTimeRangeFilter(TimeRangeFilterT&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::forward<TimeRangeFilterT>(value); }
    template<typename TimeRangeFilterT = Aws::String>
    GetTileRequest& WithTimeRangeFilter(TimeRangeFilterT&& value) { SetTimeRangeFilter(std::forward<TimeRangeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The x coordinate of the tile input.</p>
     */
    inline int GetX() const { return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(int value) { m_xHasBeenSet = true; m_x = value; }
    inline GetTileRequest& WithX(int value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The y coordinate of the tile input.</p>
     */
    inline int GetY() const { return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(int value) { m_yHasBeenSet = true; m_y = value; }
    inline GetTileRequest& WithY(int value) { SetY(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The z coordinate of the tile input.</p>
     */
    inline int GetZ() const { return m_z; }
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

    bool m_imageMask{false};
    bool m_imageMaskHasBeenSet = false;

    OutputType m_outputDataType{OutputType::NOT_SET};
    bool m_outputDataTypeHasBeenSet = false;

    Aws::String m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    TargetOptions m_target{TargetOptions::NOT_SET};
    bool m_targetHasBeenSet = false;

    Aws::String m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;

    int m_x{0};
    bool m_xHasBeenSet = false;

    int m_y{0};
    bool m_yHasBeenSet = false;

    int m_z{0};
    bool m_zHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
