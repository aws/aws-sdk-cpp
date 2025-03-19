/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/QueryLanguageVersion.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace neptunedata
{
namespace Model
{
  class GetEngineStatusResult
  {
  public:
    AWS_NEPTUNEDATA_API GetEngineStatusResult() = default;
    AWS_NEPTUNEDATA_API GetEngineStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetEngineStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Set to <code>healthy</code> if the instance is not experiencing problems. If
     * the instance is recovering from a crash or from being rebooted and there are
     * active transactions running from the latest server shutdown, status is set to
     * <code>recovery</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetEngineStatusResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the UTC time at which the current server process started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    GetEngineStatusResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the Neptune engine version running on your DB cluster. If this engine
     * version has been manually patched since it was released, the version number is
     * prefixed by <code>Patch-</code>.</p>
     */
    inline const Aws::String& GetDbEngineVersion() const { return m_dbEngineVersion; }
    template<typename DbEngineVersionT = Aws::String>
    void SetDbEngineVersion(DbEngineVersionT&& value) { m_dbEngineVersionHasBeenSet = true; m_dbEngineVersion = std::forward<DbEngineVersionT>(value); }
    template<typename DbEngineVersionT = Aws::String>
    GetEngineStatusResult& WithDbEngineVersion(DbEngineVersionT&& value) { SetDbEngineVersion(std::forward<DbEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>reader</code> if the instance is a read-replica, or to
     * <code>writer</code> if the instance is the primary instance.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    GetEngineStatusResult& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>enabled</code> if the DFE engine is fully enabled, or to
     * <code>viaQueryHint</code> (the default) if the DFE engine is only used with
     * queries that have the <code>useDFE</code> query hint set to
     * <code>true</code>.</p>
     */
    inline const Aws::String& GetDfeQueryEngine() const { return m_dfeQueryEngine; }
    template<typename DfeQueryEngineT = Aws::String>
    void SetDfeQueryEngine(DfeQueryEngineT&& value) { m_dfeQueryEngineHasBeenSet = true; m_dfeQueryEngine = std::forward<DfeQueryEngineT>(value); }
    template<typename DfeQueryEngineT = Aws::String>
    GetEngineStatusResult& WithDfeQueryEngine(DfeQueryEngineT&& value) { SetDfeQueryEngine(std::forward<DfeQueryEngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Gremlin query language available on your
     * cluster. Specifically, it contains a version field that specifies the current
     * TinkerPop version being used by the engine.</p>
     */
    inline const QueryLanguageVersion& GetGremlin() const { return m_gremlin; }
    template<typename GremlinT = QueryLanguageVersion>
    void SetGremlin(GremlinT&& value) { m_gremlinHasBeenSet = true; m_gremlin = std::forward<GremlinT>(value); }
    template<typename GremlinT = QueryLanguageVersion>
    GetEngineStatusResult& WithGremlin(GremlinT&& value) { SetGremlin(std::forward<GremlinT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the SPARQL query language available on your
     * cluster. Specifically, it contains a version field that specifies the current
     * SPARQL version being used by the engine.</p>
     */
    inline const QueryLanguageVersion& GetSparql() const { return m_sparql; }
    template<typename SparqlT = QueryLanguageVersion>
    void SetSparql(SparqlT&& value) { m_sparqlHasBeenSet = true; m_sparql = std::forward<SparqlT>(value); }
    template<typename SparqlT = QueryLanguageVersion>
    GetEngineStatusResult& WithSparql(SparqlT&& value) { SetSparql(std::forward<SparqlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the openCypher query language available on your
     * cluster. Specifically, it contains a version field that specifies the current
     * operCypher version being used by the engine.</p>
     */
    inline const QueryLanguageVersion& GetOpencypher() const { return m_opencypher; }
    template<typename OpencypherT = QueryLanguageVersion>
    void SetOpencypher(OpencypherT&& value) { m_opencypherHasBeenSet = true; m_opencypher = std::forward<OpencypherT>(value); }
    template<typename OpencypherT = QueryLanguageVersion>
    GetEngineStatusResult& WithOpencypher(OpencypherT&& value) { SetOpencypher(std::forward<OpencypherT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains Lab Mode settings being used by the engine.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabMode() const { return m_labMode; }
    template<typename LabModeT = Aws::Map<Aws::String, Aws::String>>
    void SetLabMode(LabModeT&& value) { m_labModeHasBeenSet = true; m_labMode = std::forward<LabModeT>(value); }
    template<typename LabModeT = Aws::Map<Aws::String, Aws::String>>
    GetEngineStatusResult& WithLabMode(LabModeT&& value) { SetLabMode(std::forward<LabModeT>(value)); return *this;}
    template<typename LabModeKeyT = Aws::String, typename LabModeValueT = Aws::String>
    GetEngineStatusResult& AddLabMode(LabModeKeyT&& key, LabModeValueT&& value) {
      m_labModeHasBeenSet = true; m_labMode.emplace(std::forward<LabModeKeyT>(key), std::forward<LabModeValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If there are transactions being rolled back, this field is set to the number
     * of such transactions. If there are none, the field doesn't appear at all.</p>
     */
    inline int GetRollingBackTrxCount() const { return m_rollingBackTrxCount; }
    inline void SetRollingBackTrxCount(int value) { m_rollingBackTrxCountHasBeenSet = true; m_rollingBackTrxCount = value; }
    inline GetEngineStatusResult& WithRollingBackTrxCount(int value) { SetRollingBackTrxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the start time of the earliest transaction being rolled back. If no
     * transactions are being rolled back, the field doesn't appear at all.</p>
     */
    inline const Aws::String& GetRollingBackTrxEarliestStartTime() const { return m_rollingBackTrxEarliestStartTime; }
    template<typename RollingBackTrxEarliestStartTimeT = Aws::String>
    void SetRollingBackTrxEarliestStartTime(RollingBackTrxEarliestStartTimeT&& value) { m_rollingBackTrxEarliestStartTimeHasBeenSet = true; m_rollingBackTrxEarliestStartTime = std::forward<RollingBackTrxEarliestStartTimeT>(value); }
    template<typename RollingBackTrxEarliestStartTimeT = Aws::String>
    GetEngineStatusResult& WithRollingBackTrxEarliestStartTime(RollingBackTrxEarliestStartTimeT&& value) { SetRollingBackTrxEarliestStartTime(std::forward<RollingBackTrxEarliestStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains status information about the features enabled on your DB
     * cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetFeatures() const { return m_features; }
    template<typename FeaturesT = Aws::Map<Aws::String, Aws::Utils::Document>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Map<Aws::String, Aws::Utils::Document>>
    GetEngineStatusResult& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesKeyT = Aws::String, typename FeaturesValueT = Aws::Utils::Document>
    GetEngineStatusResult& AddFeatures(FeaturesKeyT&& key, FeaturesValueT&& value) {
      m_featuresHasBeenSet = true; m_features.emplace(std::forward<FeaturesKeyT>(key), std::forward<FeaturesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Contains information about the current settings on your DB cluster. For
     * example, contains the current cluster query timeout setting
     * (<code>clusterQueryTimeoutInMs</code>).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSettings() const { return m_settings; }
    template<typename SettingsT = Aws::Map<Aws::String, Aws::String>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Map<Aws::String, Aws::String>>
    GetEngineStatusResult& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsKeyT = Aws::String, typename SettingsValueT = Aws::String>
    GetEngineStatusResult& AddSettings(SettingsKeyT&& key, SettingsValueT&& value) {
      m_settingsHasBeenSet = true; m_settings.emplace(std::forward<SettingsKeyT>(key), std::forward<SettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEngineStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_dbEngineVersion;
    bool m_dbEngineVersionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_dfeQueryEngine;
    bool m_dfeQueryEngineHasBeenSet = false;

    QueryLanguageVersion m_gremlin;
    bool m_gremlinHasBeenSet = false;

    QueryLanguageVersion m_sparql;
    bool m_sparqlHasBeenSet = false;

    QueryLanguageVersion m_opencypher;
    bool m_opencypherHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labMode;
    bool m_labModeHasBeenSet = false;

    int m_rollingBackTrxCount{0};
    bool m_rollingBackTrxCountHasBeenSet = false;

    Aws::String m_rollingBackTrxEarliestStartTime;
    bool m_rollingBackTrxEarliestStartTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_features;
    bool m_featuresHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
