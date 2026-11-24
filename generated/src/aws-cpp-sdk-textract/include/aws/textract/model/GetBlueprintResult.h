/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/Textract_EXPORTS.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Textract {
namespace Model {
class GetBlueprintResult {
 public:
  AWS_TEXTRACT_API GetBlueprintResult() = default;
  AWS_TEXTRACT_API GetBlueprintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_TEXTRACT_API GetBlueprintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the blueprint.</p>
   */
  inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
  template <typename BlueprintArnT = Aws::String>
  void SetBlueprintArn(BlueprintArnT&& value) {
    m_blueprintArnHasBeenSet = true;
    m_blueprintArn = std::forward<BlueprintArnT>(value);
  }
  template <typename BlueprintArnT = Aws::String>
  GetBlueprintResult& WithBlueprintArn(BlueprintArnT&& value) {
    SetBlueprintArn(std::forward<BlueprintArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the blueprint.</p>
   */
  inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
  template <typename BlueprintNameT = Aws::String>
  void SetBlueprintName(BlueprintNameT&& value) {
    m_blueprintNameHasBeenSet = true;
    m_blueprintName = std::forward<BlueprintNameT>(value);
  }
  template <typename BlueprintNameT = Aws::String>
  GetBlueprintResult& WithBlueprintName(BlueprintNameT&& value) {
    SetBlueprintName(std::forward<BlueprintNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the blueprint.</p>
   */
  inline const Aws::String& GetBlueprintVersion() const { return m_blueprintVersion; }
  template <typename BlueprintVersionT = Aws::String>
  void SetBlueprintVersion(BlueprintVersionT&& value) {
    m_blueprintVersionHasBeenSet = true;
    m_blueprintVersion = std::forward<BlueprintVersionT>(value);
  }
  template <typename BlueprintVersionT = Aws::String>
  GetBlueprintResult& WithBlueprintVersion(BlueprintVersionT&& value) {
    SetBlueprintVersion(std::forward<BlueprintVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema of the blueprint, which defines the fields to extract and their
   * expected structure.</p>
   */
  inline const Aws::String& GetSchema() const { return m_schema; }
  template <typename SchemaT = Aws::String>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = Aws::String>
  GetBlueprintResult& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the AWS KMS key used to encrypt the blueprint.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  GetBlueprintResult& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS KMS encryption context used when encrypting the blueprint.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
  template <typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetKmsEncryptionContext(KmsEncryptionContextT&& value) {
    m_kmsEncryptionContextHasBeenSet = true;
    m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value);
  }
  template <typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  GetBlueprintResult& WithKmsEncryptionContext(KmsEncryptionContextT&& value) {
    SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value));
    return *this;
  }
  template <typename KmsEncryptionContextKeyT = Aws::String, typename KmsEncryptionContextValueT = Aws::String>
  GetBlueprintResult& AddKmsEncryptionContext(KmsEncryptionContextKeyT&& key, KmsEncryptionContextValueT&& value) {
    m_kmsEncryptionContextHasBeenSet = true;
    m_kmsEncryptionContext.emplace(std::forward<KmsEncryptionContextKeyT>(key), std::forward<KmsEncryptionContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the blueprint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetBlueprintResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the blueprint was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  GetBlueprintResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetBlueprintResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_blueprintArn;

  Aws::String m_blueprintName;

  Aws::String m_blueprintVersion;

  Aws::String m_schema;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_blueprintArnHasBeenSet = false;
  bool m_blueprintNameHasBeenSet = false;
  bool m_blueprintVersionHasBeenSet = false;
  bool m_schemaHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_kmsEncryptionContextHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Textract
}  // namespace Aws
