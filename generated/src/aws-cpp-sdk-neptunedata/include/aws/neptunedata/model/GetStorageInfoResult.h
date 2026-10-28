/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/DictionariesInfo.h>
#include <aws/neptunedata/model/QuadsIndexesInfo.h>
#include <aws/neptunedata/model/StorageMetrics.h>
#include <aws/neptunedata/model/UndoLogsMetrics.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace neptunedata {
namespace Model {
class GetStorageInfoResult {
 public:
  AWS_NEPTUNEDATA_API GetStorageInfoResult() = default;
  AWS_NEPTUNEDATA_API GetStorageInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NEPTUNEDATA_API GetStorageInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The approximate total amount of storage used by the Neptune database
   * instance, in bytes.</p>
   */
  inline long long GetTotalStorageBytesUsed() const { return m_totalStorageBytesUsed; }
  inline void SetTotalStorageBytesUsed(long long value) {
    m_totalStorageBytesUsedHasBeenSet = true;
    m_totalStorageBytesUsed = value;
  }
  inline GetStorageInfoResult& WithTotalStorageBytesUsed(long long value) {
    SetTotalStorageBytesUsed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the quad indexes, including counts and sizes for
   * both RDF (SPARQL) and Property Graph (Gremlin/openCypher) data.</p>
   */
  inline const QuadsIndexesInfo& GetQuads() const { return m_quads; }
  template <typename QuadsT = QuadsIndexesInfo>
  void SetQuads(QuadsT&& value) {
    m_quadsHasBeenSet = true;
    m_quads = std::forward<QuadsT>(value);
  }
  template <typename QuadsT = QuadsIndexesInfo>
  GetStorageInfoResult& WithQuads(QuadsT&& value) {
    SetQuads(std::forward<QuadsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the dictionaries, including total dictionary
   * storage and the portion used by blob entries. For additional details on the
   * storage of the Neptune dictionary, see <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/feature-overview-storage.html#feature-overview-storage-billing">Neptune
   * Storage Billing</a>.</p>
   */
  inline const DictionariesInfo& GetDictionaries() const { return m_dictionaries; }
  template <typename DictionariesT = DictionariesInfo>
  void SetDictionaries(DictionariesT&& value) {
    m_dictionariesHasBeenSet = true;
    m_dictionaries = std::forward<DictionariesT>(value);
  }
  template <typename DictionariesT = DictionariesInfo>
  GetStorageInfoResult& WithDictionaries(DictionariesT&& value) {
    SetDictionaries(std::forward<DictionariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the undo logs. The <code>sizeInBytes</code> field
   * represents the total size of the undo logs in bytes, and the
   * <code>listSize</code> field represents the number of entries in the undo log
   * list.</p>
   */
  inline const UndoLogsMetrics& GetUndoLogs() const { return m_undoLogs; }
  template <typename UndoLogsT = UndoLogsMetrics>
  void SetUndoLogs(UndoLogsT&& value) {
    m_undoLogsHasBeenSet = true;
    m_undoLogs = std::forward<UndoLogsT>(value);
  }
  template <typename UndoLogsT = UndoLogsMetrics>
  GetStorageInfoResult& WithUndoLogs(UndoLogsT&& value) {
    SetUndoLogs(std::forward<UndoLogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains storage metrics for the Neptune change-log streams, including size
   * in bytes and entry count.</p>
   */
  inline const StorageMetrics& GetStreams() const { return m_streams; }
  template <typename StreamsT = StorageMetrics>
  void SetStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams = std::forward<StreamsT>(value);
  }
  template <typename StreamsT = StorageMetrics>
  GetStorageInfoResult& WithStreams(StreamsT&& value) {
    SetStreams(std::forward<StreamsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains storage metrics for the Neptune DFE engine statistics, including
   * size in bytes and entry count.</p>
   */
  inline const StorageMetrics& GetDfeStatistics() const { return m_dfeStatistics; }
  template <typename DfeStatisticsT = StorageMetrics>
  void SetDfeStatistics(DfeStatisticsT&& value) {
    m_dfeStatisticsHasBeenSet = true;
    m_dfeStatistics = std::forward<DfeStatisticsT>(value);
  }
  template <typename DfeStatisticsT = StorageMetrics>
  GetStorageInfoResult& WithDfeStatistics(DfeStatisticsT&& value) {
    SetDfeStatistics(std::forward<DfeStatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains storage metrics for the Neptune schema, including size in bytes and
   * entry count.</p>
   */
  inline const StorageMetrics& GetSchema() const { return m_schema; }
  template <typename SchemaT = StorageMetrics>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = StorageMetrics>
  GetStorageInfoResult& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains storage metrics for Neptune system metadata, including size in bytes
   * and entry count.</p>
   */
  inline const StorageMetrics& GetInternals() const { return m_internals; }
  template <typename InternalsT = StorageMetrics>
  void SetInternals(InternalsT&& value) {
    m_internalsHasBeenSet = true;
    m_internals = std::forward<InternalsT>(value);
  }
  template <typename InternalsT = StorageMetrics>
  GetStorageInfoResult& WithInternals(InternalsT&& value) {
    SetInternals(std::forward<InternalsT>(value));
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
  GetStorageInfoResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  long long m_totalStorageBytesUsed{0};

  QuadsIndexesInfo m_quads;

  DictionariesInfo m_dictionaries;

  UndoLogsMetrics m_undoLogs;

  StorageMetrics m_streams;

  StorageMetrics m_dfeStatistics;

  StorageMetrics m_schema;

  StorageMetrics m_internals;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_totalStorageBytesUsedHasBeenSet = false;
  bool m_quadsHasBeenSet = false;
  bool m_dictionariesHasBeenSet = false;
  bool m_undoLogsHasBeenSet = false;
  bool m_streamsHasBeenSet = false;
  bool m_dfeStatisticsHasBeenSet = false;
  bool m_schemaHasBeenSet = false;
  bool m_internalsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
