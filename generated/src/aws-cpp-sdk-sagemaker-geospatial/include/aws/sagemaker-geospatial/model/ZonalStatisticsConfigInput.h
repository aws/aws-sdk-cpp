/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/ZonalStatistics.h>
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
   * <p>The structure representing input configuration of ZonalStatistics
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ZonalStatisticsConfigInput">AWS
   * API Reference</a></p>
   */
  class ZonalStatisticsConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of zonal statistics to compute.</p>
     */
    inline const Aws::Vector<ZonalStatistics>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<ZonalStatistics>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<ZonalStatistics>>
    ZonalStatisticsConfigInput& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline ZonalStatisticsConfigInput& AddStatistics(ZonalStatistics value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Bands used in the operation. If no target bands are specified, it uses all
     * bands available input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const { return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    void SetTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::forward<TargetBandsT>(value); }
    template<typename TargetBandsT = Aws::Vector<Aws::String>>
    ZonalStatisticsConfigInput& WithTargetBands(TargetBandsT&& value) { SetTargetBands(std::forward<TargetBandsT>(value)); return *this;}
    template<typename TargetBandsT = Aws::String>
    ZonalStatisticsConfigInput& AddTargetBands(TargetBandsT&& value) { m_targetBandsHasBeenSet = true; m_targetBands.emplace_back(std::forward<TargetBandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path pointing to the GeoJSON containing the polygonal
     * zones.</p>
     */
    inline const Aws::String& GetZoneS3Path() const { return m_zoneS3Path; }
    inline bool ZoneS3PathHasBeenSet() const { return m_zoneS3PathHasBeenSet; }
    template<typename ZoneS3PathT = Aws::String>
    void SetZoneS3Path(ZoneS3PathT&& value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path = std::forward<ZoneS3PathT>(value); }
    template<typename ZoneS3PathT = Aws::String>
    ZonalStatisticsConfigInput& WithZoneS3Path(ZoneS3PathT&& value) { SetZoneS3Path(std::forward<ZoneS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or an ID of a Amazon Web Services Key
     * Management Service (Amazon Web Services KMS) key that Amazon SageMaker uses to
     * decrypt your output artifacts with Amazon S3 server-side encryption. The
     * SageMaker execution role must have <code>kms:GenerateDataKey</code>
     * permission.</p> <p>The <code>KmsKeyId</code> can be any of the following
     * formats:</p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:&lt;region&gt;:&lt;account&gt;:key/&lt;key-id-12ab-34cd-56ef-1234567890ab&gt;"</code>
     * </p> </li> </ul> <p>For more information about key identifiers, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-id">Key
     * identifiers (KeyID)</a> in the Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) documentation.</p>
     */
    inline const Aws::String& GetZoneS3PathKmsKeyId() const { return m_zoneS3PathKmsKeyId; }
    inline bool ZoneS3PathKmsKeyIdHasBeenSet() const { return m_zoneS3PathKmsKeyIdHasBeenSet; }
    template<typename ZoneS3PathKmsKeyIdT = Aws::String>
    void SetZoneS3PathKmsKeyId(ZoneS3PathKmsKeyIdT&& value) { m_zoneS3PathKmsKeyIdHasBeenSet = true; m_zoneS3PathKmsKeyId = std::forward<ZoneS3PathKmsKeyIdT>(value); }
    template<typename ZoneS3PathKmsKeyIdT = Aws::String>
    ZonalStatisticsConfigInput& WithZoneS3PathKmsKeyId(ZoneS3PathKmsKeyIdT&& value) { SetZoneS3PathKmsKeyId(std::forward<ZoneS3PathKmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ZonalStatistics> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;

    Aws::String m_zoneS3Path;
    bool m_zoneS3PathHasBeenSet = false;

    Aws::String m_zoneS3PathKmsKeyId;
    bool m_zoneS3PathKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
