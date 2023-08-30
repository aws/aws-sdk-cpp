/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptunedata/model/StatisticsSummary.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Contains statistics information. The DFE engine uses information about the
   * data in your Neptune graph to make effective trade-offs when planning query
   * execution. This information takes the form of statistics that include so-called
   * characteristic sets and predicate statistics that can guide query planning. See
   * <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html">Managing
   * statistics for the Neptune DFE to use</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/Statistics">AWS
   * API Reference</a></p>
   */
  class Statistics
  {
  public:
    AWS_NEPTUNEDATA_API Statistics();
    AWS_NEPTUNEDATA_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether or not automatic statistics generation is enabled.</p>
     */
    inline bool GetAutoCompute() const{ return m_autoCompute; }

    /**
     * <p>Indicates whether or not automatic statistics generation is enabled.</p>
     */
    inline bool AutoComputeHasBeenSet() const { return m_autoComputeHasBeenSet; }

    /**
     * <p>Indicates whether or not automatic statistics generation is enabled.</p>
     */
    inline void SetAutoCompute(bool value) { m_autoComputeHasBeenSet = true; m_autoCompute = value; }

    /**
     * <p>Indicates whether or not automatic statistics generation is enabled.</p>
     */
    inline Statistics& WithAutoCompute(bool value) { SetAutoCompute(value); return *this;}


    /**
     * <p>Indicates whether or not DFE statistics generation is enabled at all.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Indicates whether or not DFE statistics generation is enabled at all.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Indicates whether or not DFE statistics generation is enabled at all.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Indicates whether or not DFE statistics generation is enabled at all.</p>
     */
    inline Statistics& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline const Aws::String& GetStatisticsId() const{ return m_statisticsId; }

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline bool StatisticsIdHasBeenSet() const { return m_statisticsIdHasBeenSet; }

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline void SetStatisticsId(const Aws::String& value) { m_statisticsIdHasBeenSet = true; m_statisticsId = value; }

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline void SetStatisticsId(Aws::String&& value) { m_statisticsIdHasBeenSet = true; m_statisticsId = std::move(value); }

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline void SetStatisticsId(const char* value) { m_statisticsIdHasBeenSet = true; m_statisticsId.assign(value); }

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline Statistics& WithStatisticsId(const Aws::String& value) { SetStatisticsId(value); return *this;}

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline Statistics& WithStatisticsId(Aws::String&& value) { SetStatisticsId(std::move(value)); return *this;}

    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline Statistics& WithStatisticsId(const char* value) { SetStatisticsId(value); return *this;}


    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline Statistics& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline Statistics& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline Statistics& WithNote(const Aws::String& value) { SetNote(value); return *this;}

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline Statistics& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}

    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline Statistics& WithNote(const char* value) { SetNote(value); return *this;}


    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline const StatisticsSummary& GetSignatureInfo() const{ return m_signatureInfo; }

    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline bool SignatureInfoHasBeenSet() const { return m_signatureInfoHasBeenSet; }

    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline void SetSignatureInfo(const StatisticsSummary& value) { m_signatureInfoHasBeenSet = true; m_signatureInfo = value; }

    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline void SetSignatureInfo(StatisticsSummary&& value) { m_signatureInfoHasBeenSet = true; m_signatureInfo = std::move(value); }

    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline Statistics& WithSignatureInfo(const StatisticsSummary& value) { SetSignatureInfo(value); return *this;}

    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline Statistics& WithSignatureInfo(StatisticsSummary&& value) { SetSignatureInfo(std::move(value)); return *this;}

  private:

    bool m_autoCompute;
    bool m_autoComputeHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_statisticsId;
    bool m_statisticsIdHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    Aws::String m_note;
    bool m_noteHasBeenSet = false;

    StatisticsSummary m_signatureInfo;
    bool m_signatureInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
