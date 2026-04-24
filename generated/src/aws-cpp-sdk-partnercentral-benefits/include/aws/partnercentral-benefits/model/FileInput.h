/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

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
 * <p>Represents input information for uploading a file to a benefit
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/FileInput">AWS
 * API Reference</a></p>
 */
class FileInput {
 public:
  AWS_PARTNERCENTRALBENEFITS_API FileInput() = default;
  AWS_PARTNERCENTRALBENEFITS_API FileInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API FileInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URI or location where the file should be stored or has been uploaded.</p>
   */
  inline const Aws::String& GetFileURI() const { return m_fileURI; }
  inline bool FileURIHasBeenSet() const { return m_fileURIHasBeenSet; }
  template <typename FileURIT = Aws::String>
  void SetFileURI(FileURIT&& value) {
    m_fileURIHasBeenSet = true;
    m_fileURI = std::forward<FileURIT>(value);
  }
  template <typename FileURIT = Aws::String>
  FileInput& WithFileURI(FileURIT&& value) {
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
  FileInput& WithBusinessUseCase(BusinessUseCaseT&& value) {
    SetBusinessUseCase(std::forward<BusinessUseCaseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileURI;

  Aws::String m_businessUseCase;
  bool m_fileURIHasBeenSet = false;
  bool m_businessUseCaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
