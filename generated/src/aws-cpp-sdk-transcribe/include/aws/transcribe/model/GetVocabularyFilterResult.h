/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/EncryptionConfiguration.h>
#include <aws/transcribe/model/LanguageCode.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TranscribeService {
namespace Model {
class GetVocabularyFilterResult {
 public:
  AWS_TRANSCRIBESERVICE_API GetVocabularyFilterResult() = default;
  AWS_TRANSCRIBESERVICE_API GetVocabularyFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TRANSCRIBESERVICE_API GetVocabularyFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the custom vocabulary filter you requested information about.</p>
   */
  inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
  template <typename VocabularyFilterNameT = Aws::String>
  void SetVocabularyFilterName(VocabularyFilterNameT&& value) {
    m_vocabularyFilterNameHasBeenSet = true;
    m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value);
  }
  template <typename VocabularyFilterNameT = Aws::String>
  GetVocabularyFilterResult& WithVocabularyFilterName(VocabularyFilterNameT&& value) {
    SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language code you selected for your custom vocabulary filter.</p>
   */
  inline LanguageCode GetLanguageCode() const { return m_languageCode; }
  inline void SetLanguageCode(LanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline GetVocabularyFilterResult& WithLanguageCode(LanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the specified custom vocabulary filter was last
   * modified.</p> <p>Timestamps are in the format
   * <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>. For example,
   * <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM UTC-7 on May
   * 4, 2022.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  GetVocabularyFilterResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location where the custom vocabulary filter is stored; use this
   * URI to view or download the custom vocabulary filter.</p>
   */
  inline const Aws::String& GetDownloadUri() const { return m_downloadUri; }
  template <typename DownloadUriT = Aws::String>
  void SetDownloadUri(DownloadUriT&& value) {
    m_downloadUriHasBeenSet = true;
    m_downloadUri = std::forward<DownloadUriT>(value);
  }
  template <typename DownloadUriT = Aws::String>
  GetVocabularyFilterResult& WithDownloadUri(DownloadUriT&& value) {
    SetDownloadUri(std::forward<DownloadUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used to access the Amazon S3
   * bucket that contains your input files and, if applicable, the KMS key specified
   * in <code>EncryptionConfiguration</code>.</p>
   */
  inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
  template <typename DataAccessRoleArnT = Aws::String>
  void SetDataAccessRoleArn(DataAccessRoleArnT&& value) {
    m_dataAccessRoleArnHasBeenSet = true;
    m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value);
  }
  template <typename DataAccessRoleArnT = Aws::String>
  GetVocabularyFilterResult& WithDataAccessRoleArn(DataAccessRoleArnT&& value) {
    SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration used for your custom vocabulary filter.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  GetVocabularyFilterResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
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
  GetVocabularyFilterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_vocabularyFilterName;

  LanguageCode m_languageCode{LanguageCode::NOT_SET};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_downloadUri;

  Aws::String m_dataAccessRoleArn;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_vocabularyFilterNameHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_downloadUriHasBeenSet = false;
  bool m_dataAccessRoleArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
