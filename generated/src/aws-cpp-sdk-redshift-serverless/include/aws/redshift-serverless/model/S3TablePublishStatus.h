/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/S3TableGranularity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RedshiftServerless {
namespace Model {

/**
 * <p>Describes the state of Amazon S3 Tables system-table log publishing for a
 * namespace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/S3TablePublishStatus">AWS
 * API Reference</a></p>
 */
class S3TablePublishStatus {
 public:
  AWS_REDSHIFTSERVERLESS_API S3TablePublishStatus() = default;
  AWS_REDSHIFTSERVERLESS_API S3TablePublishStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_REDSHIFTSERVERLESS_API S3TablePublishStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> <code>true</code> when the namespace is enrolled in every current and future
   * system table rather than an explicit list of tables.</p>
   */
  inline bool GetEnabledAll() const { return m_enabledAll; }
  inline bool EnabledAllHasBeenSet() const { return m_enabledAllHasBeenSet; }
  inline void SetEnabledAll(bool value) {
    m_enabledAllHasBeenSet = true;
    m_enabledAll = value;
  }
  inline S3TablePublishStatus& WithEnabledAll(bool value) {
    SetEnabledAll(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of system table name to the time that table last received data, as an
   * ISO-8601 timestamp. A table that has not yet been ingested is absent from the
   * map. Use it to judge data freshness.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetLastIngestionTimes() const { return m_lastIngestionTimes; }
  inline bool LastIngestionTimesHasBeenSet() const { return m_lastIngestionTimesHasBeenSet; }
  template <typename LastIngestionTimesT = Aws::Map<Aws::String, Aws::String>>
  void SetLastIngestionTimes(LastIngestionTimesT&& value) {
    m_lastIngestionTimesHasBeenSet = true;
    m_lastIngestionTimes = std::forward<LastIngestionTimesT>(value);
  }
  template <typename LastIngestionTimesT = Aws::Map<Aws::String, Aws::String>>
  S3TablePublishStatus& WithLastIngestionTimes(LastIngestionTimesT&& value) {
    SetLastIngestionTimes(std::forward<LastIngestionTimesT>(value));
    return *this;
  }
  template <typename LastIngestionTimesKeyT = Aws::String, typename LastIngestionTimesValueT = Aws::String>
  S3TablePublishStatus& AddLastIngestionTimes(LastIngestionTimesKeyT&& key, LastIngestionTimesValueT&& value) {
    m_lastIngestionTimesHasBeenSet = true;
    m_lastIngestionTimes.emplace(std::forward<LastIngestionTimesKeyT>(key), std::forward<LastIngestionTimesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope currently in effect. Values are <code>namespace</code> or
   * <code>account</code>.</p>
   */
  inline S3TableGranularity GetS3TableGranularity() const { return m_s3TableGranularity; }
  inline bool S3TableGranularityHasBeenSet() const { return m_s3TableGranularityHasBeenSet; }
  inline void SetS3TableGranularity(S3TableGranularity value) {
    m_s3TableGranularityHasBeenSet = true;
    m_s3TableGranularity = value;
  }
  inline S3TablePublishStatus& WithS3TableGranularity(S3TableGranularity value) {
    SetS3TableGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the namespace in the S3 table bucket that holds the
   * published tables.</p>
   */
  inline const Aws::String& GetS3TableNamespace() const { return m_s3TableNamespace; }
  inline bool S3TableNamespaceHasBeenSet() const { return m_s3TableNamespaceHasBeenSet; }
  template <typename S3TableNamespaceT = Aws::String>
  void SetS3TableNamespace(S3TableNamespaceT&& value) {
    m_s3TableNamespaceHasBeenSet = true;
    m_s3TableNamespace = std::forward<S3TableNamespaceT>(value);
  }
  template <typename S3TableNamespaceT = Aws::String>
  S3TablePublishStatus& WithS3TableNamespace(S3TableNamespaceT&& value) {
    SetS3TableNamespace(std::forward<S3TableNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system tables currently being published.</p>
   */
  inline const Aws::Vector<Aws::String>& GetS3Tables() const { return m_s3Tables; }
  inline bool S3TablesHasBeenSet() const { return m_s3TablesHasBeenSet; }
  template <typename S3TablesT = Aws::Vector<Aws::String>>
  void SetS3Tables(S3TablesT&& value) {
    m_s3TablesHasBeenSet = true;
    m_s3Tables = std::forward<S3TablesT>(value);
  }
  template <typename S3TablesT = Aws::Vector<Aws::String>>
  S3TablePublishStatus& WithS3Tables(S3TablesT&& value) {
    SetS3Tables(std::forward<S3TablesT>(value));
    return *this;
  }
  template <typename S3TablesT = Aws::String>
  S3TablePublishStatus& AddS3Tables(S3TablesT&& value) {
    m_s3TablesHasBeenSet = true;
    m_s3Tables.emplace_back(std::forward<S3TablesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabledAll{false};

  Aws::Map<Aws::String, Aws::String> m_lastIngestionTimes;

  S3TableGranularity m_s3TableGranularity{S3TableGranularity::NOT_SET};

  Aws::String m_s3TableNamespace;

  Aws::Vector<Aws::String> m_s3Tables;
  bool m_enabledAllHasBeenSet = false;
  bool m_lastIngestionTimesHasBeenSet = false;
  bool m_s3TableGranularityHasBeenSet = false;
  bool m_s3TableNamespaceHasBeenSet = false;
  bool m_s3TablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
