/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/SourceType.h>
#include <aws/servicecatalog/model/SourceConnectionParameters.h>
#include <aws/servicecatalog/model/LastSync.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Provides details about the configured <code>SourceConnection</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SourceConnectionDetail">AWS
   * API Reference</a></p>
   */
  class SourceConnectionDetail
  {
  public:
    AWS_SERVICECATALOG_API SourceConnectionDetail() = default;
    AWS_SERVICECATALOG_API SourceConnectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API SourceConnectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The only supported <code>SourceConnection</code> type is Codestar.</p>
     */
    inline SourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SourceConnectionDetail& WithType(SourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection details based on the connection <code>Type</code>.</p>
     */
    inline const SourceConnectionParameters& GetConnectionParameters() const { return m_connectionParameters; }
    inline bool ConnectionParametersHasBeenSet() const { return m_connectionParametersHasBeenSet; }
    template<typename ConnectionParametersT = SourceConnectionParameters>
    void SetConnectionParameters(ConnectionParametersT&& value) { m_connectionParametersHasBeenSet = true; m_connectionParameters = std::forward<ConnectionParametersT>(value); }
    template<typename ConnectionParametersT = SourceConnectionParameters>
    SourceConnectionDetail& WithConnectionParameters(ConnectionParametersT&& value) { SetConnectionParameters(std::forward<ConnectionParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the product's connection sync and contains the
     * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
     * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
     * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
     * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul>
     */
    inline const LastSync& GetLastSync() const { return m_lastSync; }
    inline bool LastSyncHasBeenSet() const { return m_lastSyncHasBeenSet; }
    template<typename LastSyncT = LastSync>
    void SetLastSync(LastSyncT&& value) { m_lastSyncHasBeenSet = true; m_lastSync = std::forward<LastSyncT>(value); }
    template<typename LastSyncT = LastSync>
    SourceConnectionDetail& WithLastSync(LastSyncT&& value) { SetLastSync(std::forward<LastSyncT>(value)); return *this;}
    ///@}
  private:

    SourceType m_type{SourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    SourceConnectionParameters m_connectionParameters;
    bool m_connectionParametersHasBeenSet = false;

    LastSync m_lastSync;
    bool m_lastSyncHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
