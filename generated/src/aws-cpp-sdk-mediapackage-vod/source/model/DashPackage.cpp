/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

DashPackage::DashPackage() : 
    m_dashManifestsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_includeEncoderConfigurationInSegments(false),
    m_includeEncoderConfigurationInSegmentsHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_periodTriggersHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentTemplateFormat(SegmentTemplateFormat::NOT_SET),
    m_segmentTemplateFormatHasBeenSet(false)
{
}

DashPackage::DashPackage(JsonView jsonValue) : 
    m_dashManifestsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_includeEncoderConfigurationInSegments(false),
    m_includeEncoderConfigurationInSegmentsHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_periodTriggersHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_segmentTemplateFormat(SegmentTemplateFormat::NOT_SET),
    m_segmentTemplateFormatHasBeenSet(false)
{
  *this = jsonValue;
}

DashPackage& DashPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dashManifests"))
  {
    Aws::Utils::Array<JsonView> dashManifestsJsonList = jsonValue.GetArray("dashManifests");
    for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
    {
      m_dashManifests.push_back(dashManifestsJsonList[dashManifestsIndex].AsObject());
    }
    m_dashManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeEncoderConfigurationInSegments"))
  {
    m_includeEncoderConfigurationInSegments = jsonValue.GetBool("includeEncoderConfigurationInSegments");

    m_includeEncoderConfigurationInSegmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeIframeOnlyStream"))
  {
    m_includeIframeOnlyStream = jsonValue.GetBool("includeIframeOnlyStream");

    m_includeIframeOnlyStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("periodTriggers"))
  {
    Aws::Utils::Array<JsonView> periodTriggersJsonList = jsonValue.GetArray("periodTriggers");
    for(unsigned periodTriggersIndex = 0; periodTriggersIndex < periodTriggersJsonList.GetLength(); ++periodTriggersIndex)
    {
      m_periodTriggers.push_back(__PeriodTriggersElementMapper::Get__PeriodTriggersElementForName(periodTriggersJsonList[periodTriggersIndex].AsString()));
    }
    m_periodTriggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentTemplateFormat"))
  {
    m_segmentTemplateFormat = SegmentTemplateFormatMapper::GetSegmentTemplateFormatForName(jsonValue.GetString("segmentTemplateFormat"));

    m_segmentTemplateFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue DashPackage::Jsonize() const
{
  JsonValue payload;

  if(m_dashManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashManifestsJsonList(m_dashManifests.size());
   for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
   {
     dashManifestsJsonList[dashManifestsIndex].AsObject(m_dashManifests[dashManifestsIndex].Jsonize());
   }
   payload.WithArray("dashManifests", std::move(dashManifestsJsonList));

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_includeEncoderConfigurationInSegmentsHasBeenSet)
  {
   payload.WithBool("includeEncoderConfigurationInSegments", m_includeEncoderConfigurationInSegments);

  }

  if(m_includeIframeOnlyStreamHasBeenSet)
  {
   payload.WithBool("includeIframeOnlyStream", m_includeIframeOnlyStream);

  }

  if(m_periodTriggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> periodTriggersJsonList(m_periodTriggers.size());
   for(unsigned periodTriggersIndex = 0; periodTriggersIndex < periodTriggersJsonList.GetLength(); ++periodTriggersIndex)
   {
     periodTriggersJsonList[periodTriggersIndex].AsString(__PeriodTriggersElementMapper::GetNameFor__PeriodTriggersElement(m_periodTriggers[periodTriggersIndex]));
   }
   payload.WithArray("periodTriggers", std::move(periodTriggersJsonList));

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_segmentTemplateFormatHasBeenSet)
  {
   payload.WithString("segmentTemplateFormat", SegmentTemplateFormatMapper::GetNameForSegmentTemplateFormat(m_segmentTemplateFormat));
  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
