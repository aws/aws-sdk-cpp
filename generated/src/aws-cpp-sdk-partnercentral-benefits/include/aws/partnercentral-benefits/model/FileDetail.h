/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/FileType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Represents detailed information about a file attached to a benefit
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/FileDetail">AWS
 * API Reference</a></p>
 */
class FileDetail {
 public:
  AWS_PARTNERCENTRALBENEFITS_API FileDetail() = default;
  AWS_PARTNERCENTRALBENEFITS_API FileDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API FileDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URI or location where the file is stored.</p>
   */
  inline const Aws::String& GetFileURI() const { return m_fileURI; }
  inline bool FileURIHasBeenSet() const { return m_fileURIHasBeenSet; }
  template <typename FileURIT = Aws::String>
  void SetFileURI(FileURIT&& value) {
    m_fileURIHasBeenSet = true;
    m_fileURI = std::forward<FileURIT>(value);
  }
  template <typename FileURIT = Aws::String>
  FileDetail& WithFileURI(FileURIT&& value) {
    SetFileURI(std::forward<FileURIT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business purpose or use case that this file supports in the benefit
   * application.</p>
   */
  inline const Aws::String& GetBusinessUseCase() const { return m_businessUseCase; }
  inline bool BusinessUseCaseHasBeenSet() const { return m_businessUseCaseHasBeenSet; }
  template <typename BusinessUseCaseT = Aws::String>
  void SetBusinessUseCase(BusinessUseCaseT&& value) {
    m_businessUseCaseHasBeenSet = true;
    m_businessUseCase = std::forward<BusinessUseCaseT>(value);
  }
  template <typename BusinessUseCaseT = Aws::String>
  FileDetail& WithBusinessUseCase(BusinessUseCaseT&& value) {
    SetBusinessUseCase(std::forward<BusinessUseCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original name of the uploaded file.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  FileDetail& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current processing status of the file (e.g., uploaded, processing,
   * approved, rejected).</p>
   */
  inline const Aws::String& GetFileStatus() const { return m_fileStatus; }
  inline bool FileStatusHasBeenSet() const { return m_fileStatusHasBeenSet; }
  template <typename FileStatusT = Aws::String>
  void SetFileStatus(FileStatusT&& value) {
    m_fileStatusHasBeenSet = true;
    m_fileStatus = std::forward<FileStatusT>(value);
  }
  template <typename FileStatusT = Aws::String>
  FileDetail& WithFileStatus(FileStatusT&& value) {
    SetFileStatus(std::forward<FileStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for that particulat file status.</p>
   */
  inline const Aws::String& GetFileStatusReason() const { return m_fileStatusReason; }
  inline bool FileStatusReasonHasBeenSet() const { return m_fileStatusReasonHasBeenSet; }
  template <typename FileStatusReasonT = Aws::String>
  void SetFileStatusReason(FileStatusReasonT&& value) {
    m_fileStatusReasonHasBeenSet = true;
    m_fileStatusReason = std::forward<FileStatusReasonT>(value);
  }
  template <typename FileStatusReasonT = Aws::String>
  FileDetail& WithFileStatusReason(FileStatusReasonT&& value) {
    SetFileStatusReason(std::forward<FileStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type or category of the file (e.g., document, image, spreadsheet).</p>
   */
  inline FileType GetFileType() const { return m_fileType; }
  inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
  inline void SetFileType(FileType value) {
    m_fileTypeHasBeenSet = true;
    m_fileType = value;
  }
  inline FileDetail& WithFileType(FileType value) {
    SetFileType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who uploaded the file.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  FileDetail& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the file was uploaded.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  FileDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileURI;
  bool m_fileURIHasBeenSet = false;

  Aws::String m_businessUseCase;
  bool m_businessUseCaseHasBeenSet = false;

  Aws::String m_fileName;
  bool m_fileNameHasBeenSet = false;

  Aws::String m_fileStatus;
  bool m_fileStatusHasBeenSet = false;

  Aws::String m_fileStatusReason;
  bool m_fileStatusReasonHasBeenSet = false;

  FileType m_fileType{FileType::NOT_SET};
  bool m_fileTypeHasBeenSet = false;

  Aws::String m_createdBy;
  bool m_createdByHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
