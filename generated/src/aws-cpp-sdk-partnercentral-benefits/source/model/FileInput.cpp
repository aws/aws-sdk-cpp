/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/FileInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

FileInput::FileInput(JsonView jsonValue) { *this = jsonValue; }

FileInput& FileInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FileURI")) {
    m_fileURI = jsonValue.GetString("FileURI");
    m_fileURIHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BusinessUseCase")) {
    m_businessUseCase = jsonValue.GetString("BusinessUseCase");
    m_businessUseCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue FileInput::Jsonize() const {
  JsonValue payload;

  if (m_fileURIHasBeenSet) {
    payload.WithString("FileURI", m_fileURI);
  }

  if (m_businessUseCaseHasBeenSet) {
    payload.WithString("BusinessUseCase", m_businessUseCase);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
