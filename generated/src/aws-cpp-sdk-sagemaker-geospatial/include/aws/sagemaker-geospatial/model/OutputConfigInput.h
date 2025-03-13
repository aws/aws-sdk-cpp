/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/ExportS3DataInput.h>
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
   * <p>The response structure for an OutputConfig returned by an
   * ExportEarthObservationJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/OutputConfigInput">AWS
   * API Reference</a></p>
   */
  class OutputConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API OutputConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API OutputConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API OutputConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to Amazon S3 storage location for the output configuration file.</p>
     */
    inline const ExportS3DataInput& GetS3Data() const { return m_s3Data; }
    inline bool S3DataHasBeenSet() const { return m_s3DataHasBeenSet; }
    template<typename S3DataT = ExportS3DataInput>
    void SetS3Data(S3DataT&& value) { m_s3DataHasBeenSet = true; m_s3Data = std::forward<S3DataT>(value); }
    template<typename S3DataT = ExportS3DataInput>
    OutputConfigInput& WithS3Data(S3DataT&& value) { SetS3Data(std::forward<S3DataT>(value)); return *this;}
    ///@}
  private:

    ExportS3DataInput m_s3Data;
    bool m_s3DataHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
