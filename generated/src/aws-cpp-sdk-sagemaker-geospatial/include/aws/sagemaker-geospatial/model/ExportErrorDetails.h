/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/ExportErrorDetailsOutput.h>
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
   * <p>The structure for returning the export error details in a
   * GetEarthObservationJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportErrorDetails">AWS
   * API Reference</a></p>
   */
  class ExportErrorDetails
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportErrorDetails() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ExportErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ExportErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure for returning the export error details while exporting results
     * of an Earth Observation job.</p>
     */
    inline const ExportErrorDetailsOutput& GetExportResults() const { return m_exportResults; }
    inline bool ExportResultsHasBeenSet() const { return m_exportResultsHasBeenSet; }
    template<typename ExportResultsT = ExportErrorDetailsOutput>
    void SetExportResults(ExportResultsT&& value) { m_exportResultsHasBeenSet = true; m_exportResults = std::forward<ExportResultsT>(value); }
    template<typename ExportResultsT = ExportErrorDetailsOutput>
    ExportErrorDetails& WithExportResults(ExportResultsT&& value) { SetExportResults(std::forward<ExportResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure for returning the export error details while exporting the
     * source images of an Earth Observation job.</p>
     */
    inline const ExportErrorDetailsOutput& GetExportSourceImages() const { return m_exportSourceImages; }
    inline bool ExportSourceImagesHasBeenSet() const { return m_exportSourceImagesHasBeenSet; }
    template<typename ExportSourceImagesT = ExportErrorDetailsOutput>
    void SetExportSourceImages(ExportSourceImagesT&& value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = std::forward<ExportSourceImagesT>(value); }
    template<typename ExportSourceImagesT = ExportErrorDetailsOutput>
    ExportErrorDetails& WithExportSourceImages(ExportSourceImagesT&& value) { SetExportSourceImages(std::forward<ExportSourceImagesT>(value)); return *this;}
    ///@}
  private:

    ExportErrorDetailsOutput m_exportResults;
    bool m_exportResultsHasBeenSet = false;

    ExportErrorDetailsOutput m_exportSourceImages;
    bool m_exportSourceImagesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
