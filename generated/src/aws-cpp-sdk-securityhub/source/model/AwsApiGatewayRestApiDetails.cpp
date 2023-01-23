/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayRestApiDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayRestApiDetails::AwsApiGatewayRestApiDetails() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_binaryMediaTypesHasBeenSet(false),
    m_minimumCompressionSize(0),
    m_minimumCompressionSizeHasBeenSet(false),
    m_apiKeySourceHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false)
{
}

AwsApiGatewayRestApiDetails::AwsApiGatewayRestApiDetails(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_binaryMediaTypesHasBeenSet(false),
    m_minimumCompressionSize(0),
    m_minimumCompressionSizeHasBeenSet(false),
    m_apiKeySourceHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayRestApiDetails& AwsApiGatewayRestApiDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinaryMediaTypes"))
  {
    Aws::Utils::Array<JsonView> binaryMediaTypesJsonList = jsonValue.GetArray("BinaryMediaTypes");
    for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
    {
      m_binaryMediaTypes.push_back(binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString());
    }
    m_binaryMediaTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumCompressionSize"))
  {
    m_minimumCompressionSize = jsonValue.GetInteger("MinimumCompressionSize");

    m_minimumCompressionSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiKeySource"))
  {
    m_apiKeySource = jsonValue.GetString("ApiKeySource");

    m_apiKeySourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("EndpointConfiguration");

    m_endpointConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayRestApiDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_binaryMediaTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> binaryMediaTypesJsonList(m_binaryMediaTypes.size());
   for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
   {
     binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString(m_binaryMediaTypes[binaryMediaTypesIndex]);
   }
   payload.WithArray("BinaryMediaTypes", std::move(binaryMediaTypesJsonList));

  }

  if(m_minimumCompressionSizeHasBeenSet)
  {
   payload.WithInteger("MinimumCompressionSize", m_minimumCompressionSize);

  }

  if(m_apiKeySourceHasBeenSet)
  {
   payload.WithString("ApiKeySource", m_apiKeySource);

  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("EndpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
