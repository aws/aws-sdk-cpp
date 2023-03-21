/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>

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
   * <p>Export task summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ExportTaskSummary">AWS
   * API Reference</a></p>
   */
  class ExportTaskSummary
  {
  public:
    AWS_MGN_API ExportTaskSummary();
    AWS_MGN_API ExportTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ExportTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Export task summary applications count.</p>
     */
    inline long long GetApplicationsCount() const{ return m_applicationsCount; }

    /**
     * <p>Export task summary applications count.</p>
     */
    inline bool ApplicationsCountHasBeenSet() const { return m_applicationsCountHasBeenSet; }

    /**
     * <p>Export task summary applications count.</p>
     */
    inline void SetApplicationsCount(long long value) { m_applicationsCountHasBeenSet = true; m_applicationsCount = value; }

    /**
     * <p>Export task summary applications count.</p>
     */
    inline ExportTaskSummary& WithApplicationsCount(long long value) { SetApplicationsCount(value); return *this;}


    /**
     * <p>Export task summary servers count.</p>
     */
    inline long long GetServersCount() const{ return m_serversCount; }

    /**
     * <p>Export task summary servers count.</p>
     */
    inline bool ServersCountHasBeenSet() const { return m_serversCountHasBeenSet; }

    /**
     * <p>Export task summary servers count.</p>
     */
    inline void SetServersCount(long long value) { m_serversCountHasBeenSet = true; m_serversCount = value; }

    /**
     * <p>Export task summary servers count.</p>
     */
    inline ExportTaskSummary& WithServersCount(long long value) { SetServersCount(value); return *this;}


    /**
     * <p>Export task summary waves count.</p>
     */
    inline long long GetWavesCount() const{ return m_wavesCount; }

    /**
     * <p>Export task summary waves count.</p>
     */
    inline bool WavesCountHasBeenSet() const { return m_wavesCountHasBeenSet; }

    /**
     * <p>Export task summary waves count.</p>
     */
    inline void SetWavesCount(long long value) { m_wavesCountHasBeenSet = true; m_wavesCount = value; }

    /**
     * <p>Export task summary waves count.</p>
     */
    inline ExportTaskSummary& WithWavesCount(long long value) { SetWavesCount(value); return *this;}

  private:

    long long m_applicationsCount;
    bool m_applicationsCountHasBeenSet = false;

    long long m_serversCount;
    bool m_serversCountHasBeenSet = false;

    long long m_wavesCount;
    bool m_wavesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
