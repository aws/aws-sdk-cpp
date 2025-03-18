/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/FileUploadCardInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

FileUploadCardInput::FileUploadCardInput(JsonView jsonValue)
{
  *this = jsonValue;
}

FileUploadCardInput& FileUploadCardInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = CardTypeMapper::GetCardTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filename"))
  {
    m_filename = jsonValue.GetString("filename");
    m_filenameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileId"))
  {
    m_fileId = jsonValue.GetString("fileId");
    m_fileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowOverride"))
  {
    m_allowOverride = jsonValue.GetBool("allowOverride");
    m_allowOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue FileUploadCardInput::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CardTypeMapper::GetNameForCardType(m_type));
  }

  if(m_filenameHasBeenSet)
  {
   payload.WithString("filename", m_filename);

  }

  if(m_fileIdHasBeenSet)
  {
   payload.WithString("fileId", m_fileId);

  }

  if(m_allowOverrideHasBeenSet)
  {
   payload.WithBool("allowOverride", m_allowOverride);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
