/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/MssPackage.h>
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

MssPackage::MssPackage() : 
    m_encryptionHasBeenSet(false),
    m_mssManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false)
{
}

MssPackage::MssPackage(JsonView jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_mssManifestsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

MssPackage& MssPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mssManifests"))
  {
    Aws::Utils::Array<JsonView> mssManifestsJsonList = jsonValue.GetArray("mssManifests");
    for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
    {
      m_mssManifests.push_back(mssManifestsJsonList[mssManifestsIndex].AsObject());
    }
    m_mssManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue MssPackage::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_mssManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mssManifestsJsonList(m_mssManifests.size());
   for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
   {
     mssManifestsJsonList[mssManifestsIndex].AsObject(m_mssManifests[mssManifestsIndex].Jsonize());
   }
   payload.WithArray("mssManifests", std::move(mssManifestsJsonList));

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
