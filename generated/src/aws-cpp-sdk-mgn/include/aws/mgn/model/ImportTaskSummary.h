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
    AWS_MGN_API ImportTaskSummary();
    AWS_MGN_API ImportTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Import task summary applications.</p>
     */
    inline const ImportTaskSummaryApplications& GetApplications() const{ return m_applications; }

    /**
     * <p>Import task summary applications.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>Import task summary applications.</p>
     */
    inline void SetApplications(const ImportTaskSummaryApplications& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>Import task summary applications.</p>
     */
    inline void SetApplications(ImportTaskSummaryApplications&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>Import task summary applications.</p>
     */
    inline ImportTaskSummary& WithApplications(const ImportTaskSummaryApplications& value) { SetApplications(value); return *this;}

    /**
     * <p>Import task summary applications.</p>
     */
    inline ImportTaskSummary& WithApplications(ImportTaskSummaryApplications&& value) { SetApplications(std::move(value)); return *this;}


    /**
     * <p>Import task summary servers.</p>
     */
    inline const ImportTaskSummaryServers& GetServers() const{ return m_servers; }

    /**
     * <p>Import task summary servers.</p>
     */
    inline bool ServersHasBeenSet() const { return m_serversHasBeenSet; }

    /**
     * <p>Import task summary servers.</p>
     */
    inline void SetServers(const ImportTaskSummaryServers& value) { m_serversHasBeenSet = true; m_servers = value; }

    /**
     * <p>Import task summary servers.</p>
     */
    inline void SetServers(ImportTaskSummaryServers&& value) { m_serversHasBeenSet = true; m_servers = std::move(value); }

    /**
     * <p>Import task summary servers.</p>
     */
    inline ImportTaskSummary& WithServers(const ImportTaskSummaryServers& value) { SetServers(value); return *this;}

    /**
     * <p>Import task summary servers.</p>
     */
    inline ImportTaskSummary& WithServers(ImportTaskSummaryServers&& value) { SetServers(std::move(value)); return *this;}


    /**
     * <p>Import task summary waves.</p>
     */
    inline const ImportTaskSummaryWaves& GetWaves() const{ return m_waves; }

    /**
     * <p>Import task summary waves.</p>
     */
    inline bool WavesHasBeenSet() const { return m_wavesHasBeenSet; }

    /**
     * <p>Import task summary waves.</p>
     */
    inline void SetWaves(const ImportTaskSummaryWaves& value) { m_wavesHasBeenSet = true; m_waves = value; }

    /**
     * <p>Import task summary waves.</p>
     */
    inline void SetWaves(ImportTaskSummaryWaves&& value) { m_wavesHasBeenSet = true; m_waves = std::move(value); }

    /**
     * <p>Import task summary waves.</p>
     */
    inline ImportTaskSummary& WithWaves(const ImportTaskSummaryWaves& value) { SetWaves(value); return *this;}

    /**
     * <p>Import task summary waves.</p>
     */
    inline ImportTaskSummary& WithWaves(ImportTaskSummaryWaves&& value) { SetWaves(std::move(value)); return *this;}

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
