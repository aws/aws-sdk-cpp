/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/Redshift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {

/**
 * <p>Describes the status of system table publishing to S3 Tables for a
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/S3TablePublishStatus">AWS
 * API Reference</a></p>
 */
class S3TablePublishStatus {
 public:
  AWS_REDSHIFT_API S3TablePublishStatus() = default;
  AWS_REDSHIFT_API S3TablePublishStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_REDSHIFT_API S3TablePublishStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

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

  ///@{
  /**
   * <p>The namespace in the S3 table bucket that holds the published tables.</p>
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
   * <p>The scope of system table publishing in effect. Possible values are
   * <code>cluster</code> and <code>account</code>.</p>
   */
  inline const Aws::String& GetS3TableGranularity() const { return m_s3TableGranularity; }
  inline bool S3TableGranularityHasBeenSet() const { return m_s3TableGranularityHasBeenSet; }
  template <typename S3TableGranularityT = Aws::String>
  void SetS3TableGranularity(S3TableGranularityT&& value) {
    m_s3TableGranularityHasBeenSet = true;
    m_s3TableGranularity = std::forward<S3TableGranularityT>(value);
  }
  template <typename S3TableGranularityT = Aws::String>
  S3TablePublishStatus& WithS3TableGranularity(S3TableGranularityT&& value) {
    SetS3TableGranularity(std::forward<S3TableGranularityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <code>true</code> if the cluster is enrolled in all current and future
   * system tables rather than an explicit subset.</p>
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
   * <p>A map whose keys are the names of the published system tables and whose
   * values are the time each table last received data. Use this to judge data
   * freshness.</p>
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
 private:
  Aws::Vector<Aws::String> m_s3Tables;

  Aws::String m_s3TableNamespace;

  Aws::String m_s3TableGranularity;

  bool m_enabledAll{false};

  Aws::Map<Aws::String, Aws::String> m_lastIngestionTimes;
  bool m_s3TablesHasBeenSet = false;
  bool m_s3TableNamespaceHasBeenSet = false;
  bool m_s3TableGranularityHasBeenSet = false;
  bool m_enabledAllHasBeenSet = false;
  bool m_lastIngestionTimesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
