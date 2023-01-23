/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UploadSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

UploadSettings::UploadSettings() : 
    m_format(FileFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_startFromRow(0),
    m_startFromRowHasBeenSet(false),
    m_containsHeader(false),
    m_containsHeaderHasBeenSet(false),
    m_textQualifier(TextQualifier::NOT_SET),
    m_textQualifierHasBeenSet(false),
    m_delimiterHasBeenSet(false)
{
}

UploadSettings::UploadSettings(JsonView jsonValue) : 
    m_format(FileFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_startFromRow(0),
    m_startFromRowHasBeenSet(false),
    m_containsHeader(false),
    m_containsHeaderHasBeenSet(false),
    m_textQualifier(TextQualifier::NOT_SET),
    m_textQualifierHasBeenSet(false),
    m_delimiterHasBeenSet(false)
{
  *this = jsonValue;
}

UploadSettings& UploadSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = FileFormatMapper::GetFileFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartFromRow"))
  {
    m_startFromRow = jsonValue.GetInteger("StartFromRow");

    m_startFromRowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsHeader"))
  {
    m_containsHeader = jsonValue.GetBool("ContainsHeader");

    m_containsHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextQualifier"))
  {
    m_textQualifier = TextQualifierMapper::GetTextQualifierForName(jsonValue.GetString("TextQualifier"));

    m_textQualifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue UploadSettings::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", FileFormatMapper::GetNameForFileFormat(m_format));
  }

  if(m_startFromRowHasBeenSet)
  {
   payload.WithInteger("StartFromRow", m_startFromRow);

  }

  if(m_containsHeaderHasBeenSet)
  {
   payload.WithBool("ContainsHeader", m_containsHeader);

  }

  if(m_textQualifierHasBeenSet)
  {
   payload.WithString("TextQualifier", TextQualifierMapper::GetNameForTextQualifier(m_textQualifier));
  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
