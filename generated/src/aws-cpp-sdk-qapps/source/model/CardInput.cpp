/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CardInput.h>
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

CardInput::CardInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CardInput& CardInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textInput"))
  {
    m_textInput = jsonValue.GetObject("textInput");
    m_textInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qQuery"))
  {
    m_qQuery = jsonValue.GetObject("qQuery");
    m_qQueryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qPlugin"))
  {
    m_qPlugin = jsonValue.GetObject("qPlugin");
    m_qPluginHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileUpload"))
  {
    m_fileUpload = jsonValue.GetObject("fileUpload");
    m_fileUploadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formInput"))
  {
    m_formInput = jsonValue.GetObject("formInput");
    m_formInputHasBeenSet = true;
  }
  return *this;
}

JsonValue CardInput::Jsonize() const
{
  JsonValue payload;

  if(m_textInputHasBeenSet)
  {
   payload.WithObject("textInput", m_textInput.Jsonize());

  }

  if(m_qQueryHasBeenSet)
  {
   payload.WithObject("qQuery", m_qQuery.Jsonize());

  }

  if(m_qPluginHasBeenSet)
  {
   payload.WithObject("qPlugin", m_qPlugin.Jsonize());

  }

  if(m_fileUploadHasBeenSet)
  {
   payload.WithObject("fileUpload", m_fileUpload.Jsonize());

  }

  if(m_formInputHasBeenSet)
  {
   payload.WithObject("formInput", m_formInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
