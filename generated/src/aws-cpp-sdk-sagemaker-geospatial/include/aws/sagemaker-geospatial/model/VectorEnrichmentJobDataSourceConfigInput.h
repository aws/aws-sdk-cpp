﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobS3Data.h>
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
   * <p>The input structure for the data source that represents the storage type of
   * the input data objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/VectorEnrichmentJobDataSourceConfigInput">AWS
   * API Reference</a></p>
   */
  class VectorEnrichmentJobDataSourceConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobDataSourceConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobDataSourceConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API VectorEnrichmentJobDataSourceConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input structure for the Amazon S3 data that represents the Amazon S3
     * location of the input data objects.</p>
     */
    inline const VectorEnrichmentJobS3Data& GetS3Data() const { return m_s3Data; }
    inline bool S3DataHasBeenSet() const { return m_s3DataHasBeenSet; }
    template<typename S3DataT = VectorEnrichmentJobS3Data>
    void SetS3Data(S3DataT&& value) { m_s3DataHasBeenSet = true; m_s3Data = std::forward<S3DataT>(value); }
    template<typename S3DataT = VectorEnrichmentJobS3Data>
    VectorEnrichmentJobDataSourceConfigInput& WithS3Data(S3DataT&& value) { SetS3Data(std::forward<S3DataT>(value)); return *this;}
    ///@}
  private:

    VectorEnrichmentJobS3Data m_s3Data;
    bool m_s3DataHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
