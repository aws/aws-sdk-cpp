/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/FileDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

FileDetail::FileDetail(JsonView jsonValue) { *this = jsonValue; }

FileDetail& FileDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FileURI")) {
    m_fileURI = jsonValue.GetString("FileURI");
    m_fileURIHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BusinessUseCase")) {
    m_businessUseCase = jsonValue.GetString("BusinessUseCase");
    m_businessUseCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileName")) {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileStatus")) {
    m_fileStatus = jsonValue.GetString("FileStatus");
    m_fileStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileStatusReason")) {
    m_fileStatusReason = jsonValue.GetString("FileStatusReason");
    m_fileStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileType")) {
    m_fileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("FileType"));
    m_fileTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FileDetail::Jsonize() const {
  JsonValue payload;

  if (m_fileURIHasBeenSet) {
    payload.WithString("FileURI", m_fileURI);
  }

  if (m_businessUseCaseHasBeenSet) {
    payload.WithString("BusinessUseCase", m_businessUseCase);
  }

  if (m_fileNameHasBeenSet) {
    payload.WithString("FileName", m_fileName);
  }

  if (m_fileStatusHasBeenSet) {
    payload.WithString("FileStatus", m_fileStatus);
  }

  if (m_fileStatusReasonHasBeenSet) {
    payload.WithString("FileStatusReason", m_fileStatusReason);
  }

  if (m_fileTypeHasBeenSet) {
    payload.WithString("FileType", FileTypeMapper::GetNameForFileType(m_fileType));
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
