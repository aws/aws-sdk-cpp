/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtCallerDecryptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

SrtCallerDecryptionRequest::SrtCallerDecryptionRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

SrtCallerDecryptionRequest& SrtCallerDecryptionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = AlgorithmMapper::GetAlgorithmForName(jsonValue.GetString("algorithm"));
    m_algorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("passphraseSecretArn"))
  {
    m_passphraseSecretArn = jsonValue.GetString("passphraseSecretArn");
    m_passphraseSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtCallerDecryptionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", AlgorithmMapper::GetNameForAlgorithm(m_algorithm));
  }

  if(m_passphraseSecretArnHasBeenSet)
  {
   payload.WithString("passphraseSecretArn", m_passphraseSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
