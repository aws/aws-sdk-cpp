/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AlgorithmStatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AlgorithmStatusDetails::AlgorithmStatusDetails() : 
    m_validationStatusesHasBeenSet(false),
    m_imageScanStatusesHasBeenSet(false)
{
}

AlgorithmStatusDetails::AlgorithmStatusDetails(JsonView jsonValue) : 
    m_validationStatusesHasBeenSet(false),
    m_imageScanStatusesHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmStatusDetails& AlgorithmStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValidationStatuses"))
  {
    Aws::Utils::Array<JsonView> validationStatusesJsonList = jsonValue.GetArray("ValidationStatuses");
    for(unsigned validationStatusesIndex = 0; validationStatusesIndex < validationStatusesJsonList.GetLength(); ++validationStatusesIndex)
    {
      m_validationStatuses.push_back(validationStatusesJsonList[validationStatusesIndex].AsObject());
    }
    m_validationStatusesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageScanStatuses"))
  {
    Aws::Utils::Array<JsonView> imageScanStatusesJsonList = jsonValue.GetArray("ImageScanStatuses");
    for(unsigned imageScanStatusesIndex = 0; imageScanStatusesIndex < imageScanStatusesJsonList.GetLength(); ++imageScanStatusesIndex)
    {
      m_imageScanStatuses.push_back(imageScanStatusesJsonList[imageScanStatusesIndex].AsObject());
    }
    m_imageScanStatusesHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_validationStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationStatusesJsonList(m_validationStatuses.size());
   for(unsigned validationStatusesIndex = 0; validationStatusesIndex < validationStatusesJsonList.GetLength(); ++validationStatusesIndex)
   {
     validationStatusesJsonList[validationStatusesIndex].AsObject(m_validationStatuses[validationStatusesIndex].Jsonize());
   }
   payload.WithArray("ValidationStatuses", std::move(validationStatusesJsonList));

  }

  if(m_imageScanStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageScanStatusesJsonList(m_imageScanStatuses.size());
   for(unsigned imageScanStatusesIndex = 0; imageScanStatusesIndex < imageScanStatusesJsonList.GetLength(); ++imageScanStatusesIndex)
   {
     imageScanStatusesJsonList[imageScanStatusesIndex].AsObject(m_imageScanStatuses[imageScanStatusesIndex].Jsonize());
   }
   payload.WithArray("ImageScanStatuses", std::move(imageScanStatusesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
