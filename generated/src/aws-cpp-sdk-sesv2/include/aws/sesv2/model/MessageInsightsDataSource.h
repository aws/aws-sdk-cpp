/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/MessageInsightsFilters.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains filters applied when performing the Message Insights
   * export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MessageInsightsDataSource">AWS
   * API Reference</a></p>
   */
  class MessageInsightsDataSource
  {
  public:
    AWS_SESV2_API MessageInsightsDataSource();
    AWS_SESV2_API MessageInsightsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MessageInsightsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the start date for the export interval as a timestamp. The start
     * date is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline MessageInsightsDataSource& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline MessageInsightsDataSource& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the end date for the export interval as a timestamp. The end date
     * is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline MessageInsightsDataSource& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline MessageInsightsDataSource& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for results to be included in the export file.</p>
     */
    inline const MessageInsightsFilters& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const MessageInsightsFilters& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(MessageInsightsFilters&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline MessageInsightsDataSource& WithInclude(const MessageInsightsFilters& value) { SetInclude(value); return *this;}
    inline MessageInsightsDataSource& WithInclude(MessageInsightsFilters&& value) { SetInclude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for results to be excluded from the export file.</p>
     */
    inline const MessageInsightsFilters& GetExclude() const{ return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    inline void SetExclude(const MessageInsightsFilters& value) { m_excludeHasBeenSet = true; m_exclude = value; }
    inline void SetExclude(MessageInsightsFilters&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }
    inline MessageInsightsDataSource& WithExclude(const MessageInsightsFilters& value) { SetExclude(value); return *this;}
    inline MessageInsightsDataSource& WithExclude(MessageInsightsFilters&& value) { SetExclude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline MessageInsightsDataSource& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    MessageInsightsFilters m_include;
    bool m_includeHasBeenSet = false;

    MessageInsightsFilters m_exclude;
    bool m_excludeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
