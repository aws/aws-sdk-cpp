/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CodeVulnerabilitiesFilePath.h>
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

CodeVulnerabilitiesFilePath::CodeVulnerabilitiesFilePath() : 
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false)
{
}

CodeVulnerabilitiesFilePath::CodeVulnerabilitiesFilePath(JsonView jsonValue) : 
    m_endLine(0),
    m_endLineHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_startLine(0),
    m_startLineHasBeenSet(false)
{
  *this = jsonValue;
}

CodeVulnerabilitiesFilePath& CodeVulnerabilitiesFilePath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndLine"))
  {
    m_endLine = jsonValue.GetInteger("EndLine");

    m_endLineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileName"))
  {
    m_fileName = jsonValue.GetString("FileName");

    m_fileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilePath"))
  {
    m_filePath = jsonValue.GetString("FilePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartLine"))
  {
    m_startLine = jsonValue.GetInteger("StartLine");

    m_startLineHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeVulnerabilitiesFilePath::Jsonize() const
{
  JsonValue payload;

  if(m_endLineHasBeenSet)
  {
   payload.WithInteger("EndLine", m_endLine);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("FilePath", m_filePath);

  }

  if(m_startLineHasBeenSet)
  {
   payload.WithInteger("StartLine", m_startLine);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
