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
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of zonal statistics to compute.</p>
     */
    inline const Aws::Vector<ZonalStatistics>& GetStatistics() const{ return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    inline void SetStatistics(const Aws::Vector<ZonalStatistics>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }
    inline void SetStatistics(Aws::Vector<ZonalStatistics>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }
    inline ZonalStatisticsConfigInput& WithStatistics(const Aws::Vector<ZonalStatistics>& value) { SetStatistics(value); return *this;}
    inline ZonalStatisticsConfigInput& WithStatistics(Aws::Vector<ZonalStatistics>&& value) { SetStatistics(std::move(value)); return *this;}
    inline ZonalStatisticsConfigInput& AddStatistics(const ZonalStatistics& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    inline ZonalStatisticsConfigInput& AddStatistics(ZonalStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Bands used in the operation. If no target bands are specified, it uses all
     * bands available input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }
    inline ZonalStatisticsConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}
    inline ZonalStatisticsConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}
    inline ZonalStatisticsConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }
    inline ZonalStatisticsConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }
    inline ZonalStatisticsConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path pointing to the GeoJSON containing the polygonal
     * zones.</p>
     */
    inline const Aws::String& GetZoneS3Path() const{ return m_zoneS3Path; }
    inline bool ZoneS3PathHasBeenSet() const { return m_zoneS3PathHasBeenSet; }
    inline void SetZoneS3Path(const Aws::String& value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path = value; }
    inline void SetZoneS3Path(Aws::String&& value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path = std::move(value); }
    inline void SetZoneS3Path(const char* value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path.assign(value); }
    inline ZonalStatisticsConfigInput& WithZoneS3Path(const Aws::String& value) { SetZoneS3Path(value); return *this;}
    inline ZonalStatisticsConfigInput& WithZoneS3Path(Aws::String&& value) { SetZoneS3Path(std::move(value)); return *this;}
    inline ZonalStatisticsConfigInput& WithZoneS3Path(const char* value) { SetZoneS3Path(value); return *this;}
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
    inline const Aws::String& GetZoneS3PathKmsKeyId() const{ return m_zoneS3PathKmsKeyId; }
    inline bool ZoneS3PathKmsKeyIdHasBeenSet() const { return m_zoneS3PathKmsKeyIdHasBeenSet; }
    inline void SetZoneS3PathKmsKeyId(const Aws::String& value) { m_zoneS3PathKmsKeyIdHasBeenSet = true; m_zoneS3PathKmsKeyId = value; }
    inline void SetZoneS3PathKmsKeyId(Aws::String&& value) { m_zoneS3PathKmsKeyIdHasBeenSet = true; m_zoneS3PathKmsKeyId = std::move(value); }
    inline void SetZoneS3PathKmsKeyId(const char* value) { m_zoneS3PathKmsKeyIdHasBeenSet = true; m_zoneS3PathKmsKeyId.assign(value); }
    inline ZonalStatisticsConfigInput& WithZoneS3PathKmsKeyId(const Aws::String& value) { SetZoneS3PathKmsKeyId(value); return *this;}
    inline ZonalStatisticsConfigInput& WithZoneS3PathKmsKeyId(Aws::String&& value) { SetZoneS3PathKmsKeyId(std::move(value)); return *this;}
    inline ZonalStatisticsConfigInput& WithZoneS3PathKmsKeyId(const char* value) { SetZoneS3PathKmsKeyId(value); return *this;}
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
