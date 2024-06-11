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
    AWS_NEPTUNEDATA_API GetEngineStatusResult();
    AWS_NEPTUNEDATA_API GetEngineStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetEngineStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Set to <code>healthy</code> if the instance is not experiencing problems. If
     * the instance is recovering from a crash or from being rebooted and there are
     * active transactions running from the latest server shutdown, status is set to
     * <code>recovery</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetEngineStatusResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetEngineStatusResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the UTC time at which the current server process started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }
    inline GetEngineStatusResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline GetEngineStatusResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the Neptune engine version running on your DB cluster. If this engine
     * version has been manually patched since it was released, the version number is
     * prefixed by <code>Patch-</code>.</p>
     */
    inline const Aws::String& GetDbEngineVersion() const{ return m_dbEngineVersion; }
    inline void SetDbEngineVersion(const Aws::String& value) { m_dbEngineVersion = value; }
    inline void SetDbEngineVersion(Aws::String&& value) { m_dbEngineVersion = std::move(value); }
    inline void SetDbEngineVersion(const char* value) { m_dbEngineVersion.assign(value); }
    inline GetEngineStatusResult& WithDbEngineVersion(const Aws::String& value) { SetDbEngineVersion(value); return *this;}
    inline GetEngineStatusResult& WithDbEngineVersion(Aws::String&& value) { SetDbEngineVersion(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithDbEngineVersion(const char* value) { SetDbEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>reader</code> if the instance is a read-replica, or to
     * <code>writer</code> if the instance is the primary instance.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline void SetRole(const Aws::String& value) { m_role = value; }
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }
    inline void SetRole(const char* value) { m_role.assign(value); }
    inline GetEngineStatusResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline GetEngineStatusResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>enabled</code> if the DFE engine is fully enabled, or to
     * <code>viaQueryHint</code> (the default) if the DFE engine is only used with
     * queries that have the <code>useDFE</code> query hint set to
     * <code>true</code>.</p>
     */
    inline const Aws::String& GetDfeQueryEngine() const{ return m_dfeQueryEngine; }
    inline void SetDfeQueryEngine(const Aws::String& value) { m_dfeQueryEngine = value; }
    inline void SetDfeQueryEngine(Aws::String&& value) { m_dfeQueryEngine = std::move(value); }
    inline void SetDfeQueryEngine(const char* value) { m_dfeQueryEngine.assign(value); }
    inline GetEngineStatusResult& WithDfeQueryEngine(const Aws::String& value) { SetDfeQueryEngine(value); return *this;}
    inline GetEngineStatusResult& WithDfeQueryEngine(Aws::String&& value) { SetDfeQueryEngine(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithDfeQueryEngine(const char* value) { SetDfeQueryEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Gremlin query language available on your
     * cluster. Specifically, it contains a version field that specifies the current
     * TinkerPop version being used by the engine.</p>
     */
    inline const QueryLanguageVersion& GetGremlin() const{ return m_gremlin; }
    inline void SetGremlin(const QueryLanguageVersion& value) { m_gremlin = value; }
    inline void SetGremlin(QueryLanguageVersion&& value) { m_gremlin = std::move(value); }
    inline GetEngineStatusResult& WithGremlin(const QueryLanguageVersion& value) { SetGremlin(value); return *this;}
    inline GetEngineStatusResult& WithGremlin(QueryLanguageVersion&& value) { SetGremlin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the SPARQL query language available on your
     * cluster. Specifically, it contains a version field that specifies the current
     * SPARQL version being used by the engine.</p>
     */
    inline const QueryLanguageVersion& GetSparql() const{ return m_sparql; }
    inline void SetSparql(const QueryLanguageVersion& value) { m_sparql = value; }
    inline void SetSparql(QueryLanguageVersion&& value) { m_sparql = std::move(value); }
    inline GetEngineStatusResult& WithSparql(const QueryLanguageVersion& value) { SetSparql(value); return *this;}
    inline GetEngineStatusResult& WithSparql(QueryLanguageVersion&& value) { SetSparql(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the openCypher query language available on your
     * cluster. Specifically, it contains a version field that specifies the current
     * operCypher version being used by the engine.</p>
     */
    inline const QueryLanguageVersion& GetOpencypher() const{ return m_opencypher; }
    inline void SetOpencypher(const QueryLanguageVersion& value) { m_opencypher = value; }
    inline void SetOpencypher(QueryLanguageVersion&& value) { m_opencypher = std::move(value); }
    inline GetEngineStatusResult& WithOpencypher(const QueryLanguageVersion& value) { SetOpencypher(value); return *this;}
    inline GetEngineStatusResult& WithOpencypher(QueryLanguageVersion&& value) { SetOpencypher(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains Lab Mode settings being used by the engine.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabMode() const{ return m_labMode; }
    inline void SetLabMode(const Aws::Map<Aws::String, Aws::String>& value) { m_labMode = value; }
    inline void SetLabMode(Aws::Map<Aws::String, Aws::String>&& value) { m_labMode = std::move(value); }
    inline GetEngineStatusResult& WithLabMode(const Aws::Map<Aws::String, Aws::String>& value) { SetLabMode(value); return *this;}
    inline GetEngineStatusResult& WithLabMode(Aws::Map<Aws::String, Aws::String>&& value) { SetLabMode(std::move(value)); return *this;}
    inline GetEngineStatusResult& AddLabMode(const Aws::String& key, const Aws::String& value) { m_labMode.emplace(key, value); return *this; }
    inline GetEngineStatusResult& AddLabMode(Aws::String&& key, const Aws::String& value) { m_labMode.emplace(std::move(key), value); return *this; }
    inline GetEngineStatusResult& AddLabMode(const Aws::String& key, Aws::String&& value) { m_labMode.emplace(key, std::move(value)); return *this; }
    inline GetEngineStatusResult& AddLabMode(Aws::String&& key, Aws::String&& value) { m_labMode.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEngineStatusResult& AddLabMode(const char* key, Aws::String&& value) { m_labMode.emplace(key, std::move(value)); return *this; }
    inline GetEngineStatusResult& AddLabMode(Aws::String&& key, const char* value) { m_labMode.emplace(std::move(key), value); return *this; }
    inline GetEngineStatusResult& AddLabMode(const char* key, const char* value) { m_labMode.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are transactions being rolled back, this field is set to the number
     * of such transactions. If there are none, the field doesn't appear at all.</p>
     */
    inline int GetRollingBackTrxCount() const{ return m_rollingBackTrxCount; }
    inline void SetRollingBackTrxCount(int value) { m_rollingBackTrxCount = value; }
    inline GetEngineStatusResult& WithRollingBackTrxCount(int value) { SetRollingBackTrxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the start time of the earliest transaction being rolled back. If no
     * transactions are being rolled back, the field doesn't appear at all.</p>
     */
    inline const Aws::String& GetRollingBackTrxEarliestStartTime() const{ return m_rollingBackTrxEarliestStartTime; }
    inline void SetRollingBackTrxEarliestStartTime(const Aws::String& value) { m_rollingBackTrxEarliestStartTime = value; }
    inline void SetRollingBackTrxEarliestStartTime(Aws::String&& value) { m_rollingBackTrxEarliestStartTime = std::move(value); }
    inline void SetRollingBackTrxEarliestStartTime(const char* value) { m_rollingBackTrxEarliestStartTime.assign(value); }
    inline GetEngineStatusResult& WithRollingBackTrxEarliestStartTime(const Aws::String& value) { SetRollingBackTrxEarliestStartTime(value); return *this;}
    inline GetEngineStatusResult& WithRollingBackTrxEarliestStartTime(Aws::String&& value) { SetRollingBackTrxEarliestStartTime(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithRollingBackTrxEarliestStartTime(const char* value) { SetRollingBackTrxEarliestStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains status information about the features enabled on your DB
     * cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetFeatures() const{ return m_features; }
    inline void SetFeatures(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_features = value; }
    inline void SetFeatures(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_features = std::move(value); }
    inline GetEngineStatusResult& WithFeatures(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetFeatures(value); return *this;}
    inline GetEngineStatusResult& WithFeatures(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetFeatures(std::move(value)); return *this;}
    inline GetEngineStatusResult& AddFeatures(const Aws::String& key, const Aws::Utils::Document& value) { m_features.emplace(key, value); return *this; }
    inline GetEngineStatusResult& AddFeatures(Aws::String&& key, const Aws::Utils::Document& value) { m_features.emplace(std::move(key), value); return *this; }
    inline GetEngineStatusResult& AddFeatures(const Aws::String& key, Aws::Utils::Document&& value) { m_features.emplace(key, std::move(value)); return *this; }
    inline GetEngineStatusResult& AddFeatures(Aws::String&& key, Aws::Utils::Document&& value) { m_features.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEngineStatusResult& AddFeatures(const char* key, Aws::Utils::Document&& value) { m_features.emplace(key, std::move(value)); return *this; }
    inline GetEngineStatusResult& AddFeatures(const char* key, const Aws::Utils::Document& value) { m_features.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the current settings on your DB cluster. For
     * example, contains the current cluster query timeout setting
     * (<code>clusterQueryTimeoutInMs</code>).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSettings() const{ return m_settings; }
    inline void SetSettings(const Aws::Map<Aws::String, Aws::String>& value) { m_settings = value; }
    inline void SetSettings(Aws::Map<Aws::String, Aws::String>&& value) { m_settings = std::move(value); }
    inline GetEngineStatusResult& WithSettings(const Aws::Map<Aws::String, Aws::String>& value) { SetSettings(value); return *this;}
    inline GetEngineStatusResult& WithSettings(Aws::Map<Aws::String, Aws::String>&& value) { SetSettings(std::move(value)); return *this;}
    inline GetEngineStatusResult& AddSettings(const Aws::String& key, const Aws::String& value) { m_settings.emplace(key, value); return *this; }
    inline GetEngineStatusResult& AddSettings(Aws::String&& key, const Aws::String& value) { m_settings.emplace(std::move(key), value); return *this; }
    inline GetEngineStatusResult& AddSettings(const Aws::String& key, Aws::String&& value) { m_settings.emplace(key, std::move(value)); return *this; }
    inline GetEngineStatusResult& AddSettings(Aws::String&& key, Aws::String&& value) { m_settings.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEngineStatusResult& AddSettings(const char* key, Aws::String&& value) { m_settings.emplace(key, std::move(value)); return *this; }
    inline GetEngineStatusResult& AddSettings(Aws::String&& key, const char* value) { m_settings.emplace(std::move(key), value); return *this; }
    inline GetEngineStatusResult& AddSettings(const char* key, const char* value) { m_settings.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEngineStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEngineStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEngineStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_status;

    Aws::String m_startTime;

    Aws::String m_dbEngineVersion;

    Aws::String m_role;

    Aws::String m_dfeQueryEngine;

    QueryLanguageVersion m_gremlin;

    QueryLanguageVersion m_sparql;

    QueryLanguageVersion m_opencypher;

    Aws::Map<Aws::String, Aws::String> m_labMode;

    int m_rollingBackTrxCount;

    Aws::String m_rollingBackTrxEarliestStartTime;

    Aws::Map<Aws::String, Aws::Utils::Document> m_features;

    Aws::Map<Aws::String, Aws::String> m_settings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
