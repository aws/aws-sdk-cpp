/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ExpirationDataRule.h>
#include <aws/s3files/model/ImportDataRule.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {
class GetSynchronizationConfigurationResult {
 public:
  AWS_S3FILES_API GetSynchronizationConfigurationResult() = default;
  AWS_S3FILES_API GetSynchronizationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3FILES_API GetSynchronizationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The version number of the synchronization configuration. Use this value with
   * <code>PutSynchronizationConfiguration</code> to ensure optimistic concurrency
   * control.</p>
   */
  inline int GetLatestVersionNumber() const { return m_latestVersionNumber; }
  inline void SetLatestVersionNumber(int value) {
    m_latestVersionNumberHasBeenSet = true;
    m_latestVersionNumber = value;
  }
  inline GetSynchronizationConfigurationResult& WithLatestVersionNumber(int value) {
    SetLatestVersionNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of import data rules that control how data is imported from S3 into
   * the file system.</p>
   */
  inline const Aws::Vector<ImportDataRule>& GetImportDataRules() const { return m_importDataRules; }
  template <typename ImportDataRulesT = Aws::Vector<ImportDataRule>>
  void SetImportDataRules(ImportDataRulesT&& value) {
    m_importDataRulesHasBeenSet = true;
    m_importDataRules = std::forward<ImportDataRulesT>(value);
  }
  template <typename ImportDataRulesT = Aws::Vector<ImportDataRule>>
  GetSynchronizationConfigurationResult& WithImportDataRules(ImportDataRulesT&& value) {
    SetImportDataRules(std::forward<ImportDataRulesT>(value));
    return *this;
  }
  template <typename ImportDataRulesT = ImportDataRule>
  GetSynchronizationConfigurationResult& AddImportDataRules(ImportDataRulesT&& value) {
    m_importDataRulesHasBeenSet = true;
    m_importDataRules.emplace_back(std::forward<ImportDataRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of expiration data rules that control when cached data expires from
   * the file system.</p>
   */
  inline const Aws::Vector<ExpirationDataRule>& GetExpirationDataRules() const { return m_expirationDataRules; }
  template <typename ExpirationDataRulesT = Aws::Vector<ExpirationDataRule>>
  void SetExpirationDataRules(ExpirationDataRulesT&& value) {
    m_expirationDataRulesHasBeenSet = true;
    m_expirationDataRules = std::forward<ExpirationDataRulesT>(value);
  }
  template <typename ExpirationDataRulesT = Aws::Vector<ExpirationDataRule>>
  GetSynchronizationConfigurationResult& WithExpirationDataRules(ExpirationDataRulesT&& value) {
    SetExpirationDataRules(std::forward<ExpirationDataRulesT>(value));
    return *this;
  }
  template <typename ExpirationDataRulesT = ExpirationDataRule>
  GetSynchronizationConfigurationResult& AddExpirationDataRules(ExpirationDataRulesT&& value) {
    m_expirationDataRulesHasBeenSet = true;
    m_expirationDataRules.emplace_back(std::forward<ExpirationDataRulesT>(value));
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
  GetSynchronizationConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_latestVersionNumber{0};

  Aws::Vector<ImportDataRule> m_importDataRules;

  Aws::Vector<ExpirationDataRule> m_expirationDataRules;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_latestVersionNumberHasBeenSet = false;
  bool m_importDataRulesHasBeenSet = false;
  bool m_expirationDataRulesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
