/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/CommitmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

CommitmentConfiguration::CommitmentConfiguration() : 
    m_automaticRenewal(false),
    m_automaticRenewalHasBeenSet(false),
    m_commitmentLength(CommitmentLength::NOT_SET),
    m_commitmentLengthHasBeenSet(false)
{
}

CommitmentConfiguration::CommitmentConfiguration(JsonView jsonValue) : 
    m_automaticRenewal(false),
    m_automaticRenewalHasBeenSet(false),
    m_commitmentLength(CommitmentLength::NOT_SET),
    m_commitmentLengthHasBeenSet(false)
{
  *this = jsonValue;
}

CommitmentConfiguration& CommitmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("automaticRenewal"))
  {
    m_automaticRenewal = jsonValue.GetBool("automaticRenewal");

    m_automaticRenewalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commitmentLength"))
  {
    m_commitmentLength = CommitmentLengthMapper::GetCommitmentLengthForName(jsonValue.GetString("commitmentLength"));

    m_commitmentLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue CommitmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_automaticRenewalHasBeenSet)
  {
   payload.WithBool("automaticRenewal", m_automaticRenewal);

  }

  if(m_commitmentLengthHasBeenSet)
  {
   payload.WithString("commitmentLength", CommitmentLengthMapper::GetNameForCommitmentLength(m_commitmentLength));
  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
