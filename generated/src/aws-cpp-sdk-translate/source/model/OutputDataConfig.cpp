/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/OutputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

OutputDataConfig::OutputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
}

OutputDataConfig::OutputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDataConfig& OutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetObject("EncryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithObject("EncryptionKey", m_encryptionKey.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
