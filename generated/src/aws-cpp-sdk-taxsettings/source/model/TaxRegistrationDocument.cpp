/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/model/TaxRegistrationDocument.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {

TaxRegistrationDocument::TaxRegistrationDocument(JsonView jsonValue) { *this = jsonValue; }

TaxRegistrationDocument& TaxRegistrationDocument::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Location")) {
    m_s3Location = jsonValue.GetObject("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("file")) {
    m_file = jsonValue.GetObject("file");
    m_fileHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxRegistrationDocument::Jsonize() const {
  JsonValue payload;

  if (m_s3LocationHasBeenSet) {
    payload.WithObject("s3Location", m_s3Location.Jsonize());
  }

  if (m_fileHasBeenSet) {
    payload.WithObject("file", m_file.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
