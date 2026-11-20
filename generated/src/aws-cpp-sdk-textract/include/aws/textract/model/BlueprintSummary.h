/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ResourceOwner.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {

/**
 * <p>A summary of a blueprint, returned in the results of
 * <code>ListBlueprints</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/BlueprintSummary">AWS
 * API Reference</a></p>
 */
class BlueprintSummary {
 public:
  AWS_TEXTRACT_API BlueprintSummary() = default;
  AWS_TEXTRACT_API BlueprintSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API BlueprintSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_TEXTRACT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the blueprint.</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  BlueprintSummary& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the blueprint.</p>
   */
  inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
  inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
  template <typename BlueprintNameT = Aws::String>
  void SetBlueprintName(BlueprintNameT&& value) {
    m_blueprintNameHasBeenSet = true;
    m_blueprintName = std::forward<BlueprintNameT>(value);
  }
  template <typename BlueprintNameT = Aws::String>
  BlueprintSummary& WithBlueprintName(BlueprintNameT&& value) {
    SetBlueprintName(std::forward<BlueprintNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the blueprint.</p>
   */
  inline const Aws::String& GetBlueprintVersion() const { return m_blueprintVersion; }
  inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
  template <typename BlueprintVersionT = Aws::String>
  void SetBlueprintVersion(BlueprintVersionT&& value) {
    m_blueprintVersionHasBeenSet = true;
    m_blueprintVersion = std::forward<BlueprintVersionT>(value);
  }
  template <typename BlueprintVersionT = Aws::String>
  BlueprintSummary& WithBlueprintVersion(BlueprintVersionT&& value) {
    SetBlueprintVersion(std::forward<BlueprintVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the blueprint is owned by your account or provided by Amazon
   * Textract.</p>
   */
  inline ResourceOwner GetResourceOwner() const { return m_resourceOwner; }
  inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
  inline void SetResourceOwner(ResourceOwner value) {
    m_resourceOwnerHasBeenSet = true;
    m_resourceOwner = value;
  }
  inline BlueprintSummary& WithResourceOwner(ResourceOwner value) {
    SetResourceOwner(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the blueprint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  BlueprintSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the blueprint was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  BlueprintSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_blueprintArn;

  Aws::String m_blueprintName;

  Aws::String m_blueprintVersion;

  ResourceOwner m_resourceOwner{ResourceOwner::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_blueprintArnHasBeenSet = false;
  bool m_blueprintNameHasBeenSet = false;
  bool m_blueprintVersionHasBeenSet = false;
  bool m_resourceOwnerHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
