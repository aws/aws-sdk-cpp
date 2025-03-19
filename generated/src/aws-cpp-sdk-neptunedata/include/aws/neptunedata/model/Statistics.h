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
    AWS_NEPTUNEDATA_API Statistics() = default;
    AWS_NEPTUNEDATA_API Statistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether or not automatic statistics generation is enabled.</p>
     */
    inline bool GetAutoCompute() const { return m_autoCompute; }
    inline bool AutoComputeHasBeenSet() const { return m_autoComputeHasBeenSet; }
    inline void SetAutoCompute(bool value) { m_autoComputeHasBeenSet = true; m_autoCompute = value; }
    inline Statistics& WithAutoCompute(bool value) { SetAutoCompute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not DFE statistics generation is enabled at all.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline Statistics& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports the ID of the current statistics generation run. A value of -1
     * indicates that no statistics have been generated.</p>
     */
    inline const Aws::String& GetStatisticsId() const { return m_statisticsId; }
    inline bool StatisticsIdHasBeenSet() const { return m_statisticsIdHasBeenSet; }
    template<typename StatisticsIdT = Aws::String>
    void SetStatisticsId(StatisticsIdT&& value) { m_statisticsIdHasBeenSet = true; m_statisticsId = std::forward<StatisticsIdT>(value); }
    template<typename StatisticsIdT = Aws::String>
    Statistics& WithStatisticsId(StatisticsIdT&& value) { SetStatisticsId(std::forward<StatisticsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time at which DFE statistics have most recently been generated.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    Statistics& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A note about problems in the case where statistics are invalid.</p>
     */
    inline const Aws::String& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = Aws::String>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = Aws::String>
    Statistics& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A StatisticsSummary structure that contains:</p> <ul> <li> <p>
     * <code>signatureCount</code> - The total number of signatures across all
     * characteristic sets.</p> </li> <li> <p> <code>instanceCount</code> - The total
     * number of characteristic-set instances.</p> </li> <li> <p>
     * <code>predicateCount</code> - The total number of unique predicates.</p> </li>
     * </ul>
     */
    inline const StatisticsSummary& GetSignatureInfo() const { return m_signatureInfo; }
    inline bool SignatureInfoHasBeenSet() const { return m_signatureInfoHasBeenSet; }
    template<typename SignatureInfoT = StatisticsSummary>
    void SetSignatureInfo(SignatureInfoT&& value) { m_signatureInfoHasBeenSet = true; m_signatureInfo = std::forward<SignatureInfoT>(value); }
    template<typename SignatureInfoT = StatisticsSummary>
    Statistics& WithSignatureInfo(SignatureInfoT&& value) { SetSignatureInfo(std::forward<SignatureInfoT>(value)); return *this;}
    ///@}
  private:

    bool m_autoCompute{false};
    bool m_autoComputeHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    Aws::String m_statisticsId;
    bool m_statisticsIdHasBeenSet = false;

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    Aws::String m_note;
    bool m_noteHasBeenSet = false;

    StatisticsSummary m_signatureInfo;
    bool m_signatureInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
