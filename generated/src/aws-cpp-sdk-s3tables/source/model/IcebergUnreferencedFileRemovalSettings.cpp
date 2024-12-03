/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/IcebergUnreferencedFileRemovalSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Tables
{
namespace Model
{

IcebergUnreferencedFileRemovalSettings::IcebergUnreferencedFileRemovalSettings() : 
    m_unreferencedDays(0),
    m_unreferencedDaysHasBeenSet(false),
    m_nonCurrentDays(0),
    m_nonCurrentDaysHasBeenSet(false)
{
}

IcebergUnreferencedFileRemovalSettings::IcebergUnreferencedFileRemovalSettings(JsonView jsonValue)
  : IcebergUnreferencedFileRemovalSettings()
{
  *this = jsonValue;
}

IcebergUnreferencedFileRemovalSettings& IcebergUnreferencedFileRemovalSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unreferencedDays"))
  {
    m_unreferencedDays = jsonValue.GetInteger("unreferencedDays");

    m_unreferencedDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nonCurrentDays"))
  {
    m_nonCurrentDays = jsonValue.GetInteger("nonCurrentDays");

    m_nonCurrentDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue IcebergUnreferencedFileRemovalSettings::Jsonize() const
{
  JsonValue payload;

  if(m_unreferencedDaysHasBeenSet)
  {
   payload.WithInteger("unreferencedDays", m_unreferencedDays);

  }

  if(m_nonCurrentDaysHasBeenSet)
  {
   payload.WithInteger("nonCurrentDays", m_nonCurrentDays);

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
