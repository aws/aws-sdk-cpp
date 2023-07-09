/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ImportErrorData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ImportErrorData::ImportErrorData() : 
    m_accountIDHasBeenSet(false),
    m_applicationIDHasBeenSet(false),
    m_ec2LaunchTemplateIDHasBeenSet(false),
    m_rawErrorHasBeenSet(false),
    m_rowNumber(0),
    m_rowNumberHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_waveIDHasBeenSet(false)
{
}

ImportErrorData::ImportErrorData(JsonView jsonValue) : 
    m_accountIDHasBeenSet(false),
    m_applicationIDHasBeenSet(false),
    m_ec2LaunchTemplateIDHasBeenSet(false),
    m_rawErrorHasBeenSet(false),
    m_rowNumber(0),
    m_rowNumberHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_waveIDHasBeenSet(false)
{
  *this = jsonValue;
}

ImportErrorData& ImportErrorData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountID"))
  {
    m_accountID = jsonValue.GetString("accountID");

    m_accountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationID"))
  {
    m_applicationID = jsonValue.GetString("applicationID");

    m_applicationIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2LaunchTemplateID"))
  {
    m_ec2LaunchTemplateID = jsonValue.GetString("ec2LaunchTemplateID");

    m_ec2LaunchTemplateIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawError"))
  {
    m_rawError = jsonValue.GetString("rawError");

    m_rawErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rowNumber"))
  {
    m_rowNumber = jsonValue.GetInt64("rowNumber");

    m_rowNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waveID"))
  {
    m_waveID = jsonValue.GetString("waveID");

    m_waveIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportErrorData::Jsonize() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_applicationIDHasBeenSet)
  {
   payload.WithString("applicationID", m_applicationID);

  }

  if(m_ec2LaunchTemplateIDHasBeenSet)
  {
   payload.WithString("ec2LaunchTemplateID", m_ec2LaunchTemplateID);

  }

  if(m_rawErrorHasBeenSet)
  {
   payload.WithString("rawError", m_rawError);

  }

  if(m_rowNumberHasBeenSet)
  {
   payload.WithInt64("rowNumber", m_rowNumber);

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_waveIDHasBeenSet)
  {
   payload.WithString("waveID", m_waveID);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
