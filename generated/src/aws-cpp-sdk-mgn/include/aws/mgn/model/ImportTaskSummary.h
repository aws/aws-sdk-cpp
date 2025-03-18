/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ImportTaskSummaryApplications.h>
#include <aws/mgn/model/ImportTaskSummaryServers.h>
#include <aws/mgn/model/ImportTaskSummaryWaves.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Import task summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ImportTaskSummary">AWS
   * API Reference</a></p>
   */
  class ImportTaskSummary
  {
  public:
    AWS_MGN_API ImportTaskSummary() = default;
    AWS_MGN_API ImportTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import task summary applications.</p>
     */
    inline const ImportTaskSummaryApplications& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = ImportTaskSummaryApplications>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = ImportTaskSummaryApplications>
    ImportTaskSummary& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task summary servers.</p>
     */
    inline const ImportTaskSummaryServers& GetServers() const { return m_servers; }
    inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }
    template<typename ServersT = ImportTaskSummaryServers>
    void SetServers(ServersT&& value) { m_serversHasBeenSet = true; m_servers = std::forward<ServersT>(value); }
    template<typename ServersT = ImportTaskSummaryServers>
    ImportTaskSummary& WithServers(ServersT&& value) { SetServers(std::forward<ServersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task summary waves.</p>
     */
    inline const ImportTaskSummaryWaves& GetWaves() const { return m_waves; }
    inline bool WavesHasBeenSet() const { return m_wavesHasBeenSet; }
    template<typename WavesT = ImportTaskSummaryWaves>
    void SetWaves(WavesT&& value) { m_wavesHasBeenSet = true; m_waves = std::forward<WavesT>(value); }
    template<typename WavesT = ImportTaskSummaryWaves>
    ImportTaskSummary& WithWaves(WavesT&& value) { SetWaves(std::forward<WavesT>(value)); return *this;}
    ///@}
  private:

    ImportTaskSummaryApplications m_applications;
    bool m_applicationsHasBeenSet = false;

    ImportTaskSummaryServers m_servers;
    bool m_serversHasBeenSet = false;

    ImportTaskSummaryWaves m_waves;
    bool m_wavesHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
