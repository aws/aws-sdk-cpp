/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/ChileDocumentType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TaxSettings {
namespace Model {

/**
 * <p> Additional tax information associated with your TRN in Chile.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/ChileAdditionalInfo">AWS
 * API Reference</a></p>
 */
class ChileAdditionalInfo {
 public:
  AWS_TAXSETTINGS_API ChileAdditionalInfo() = default;
  AWS_TAXSETTINGS_API ChileAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API ChileAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of tax document. For Chile, this can be <code>Invoice</code> or
   * <code>Receipt</code>.</p>
   */
  inline ChileDocumentType GetDocumentType() const { return m_documentType; }
  inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
  inline void SetDocumentType(ChileDocumentType value) {
    m_documentTypeHasBeenSet = true;
    m_documentType = value;
  }
  inline ChileAdditionalInfo& WithDocumentType(ChileDocumentType value) {
    SetDocumentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The business activity of the taxpayer in Chile.</p>
   */
  inline const Aws::String& GetBusinessActivity() const { return m_businessActivity; }
  inline bool BusinessActivityHasBeenSet() const { return m_businessActivityHasBeenSet; }
  template <typename BusinessActivityT = Aws::String>
  void SetBusinessActivity(BusinessActivityT&& value) {
    m_businessActivityHasBeenSet = true;
    m_businessActivity = std::forward<BusinessActivityT>(value);
  }
  template <typename BusinessActivityT = Aws::String>
  ChileAdditionalInfo& WithBusinessActivity(BusinessActivityT&& value) {
    SetBusinessActivity(std::forward<BusinessActivityT>(value));
    return *this;
  }
  ///@}
 private:
  ChileDocumentType m_documentType{ChileDocumentType::NOT_SET};

  Aws::String m_businessActivity;
  bool m_documentTypeHasBeenSet = false;
  bool m_businessActivityHasBeenSet = false;
};

}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
