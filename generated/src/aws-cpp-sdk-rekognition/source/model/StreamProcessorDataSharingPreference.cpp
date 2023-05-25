/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorDataSharingPreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StreamProcessorDataSharingPreference::StreamProcessorDataSharingPreference() : 
    m_optIn(false),
    m_optInHasBeenSet(false)
{
}

StreamProcessorDataSharingPreference::StreamProcessorDataSharingPreference(JsonView jsonValue) : 
    m_optIn(false),
    m_optInHasBeenSet(false)
{
  *this = jsonValue;
}

StreamProcessorDataSharingPreference& StreamProcessorDataSharingPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptIn"))
  {
    m_optIn = jsonValue.GetBool("OptIn");

    m_optInHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamProcessorDataSharingPreference::Jsonize() const
{
  JsonValue payload;

  if(m_optInHasBeenSet)
  {
   payload.WithBool("OptIn", m_optIn);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
