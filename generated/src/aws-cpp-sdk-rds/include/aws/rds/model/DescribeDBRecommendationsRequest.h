/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DescribeDBRecommendationsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBRecommendations"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAfter() const { return m_lastUpdatedAfter; }
    inline bool LastUpdatedAfterHasBeenSet() const { return m_lastUpdatedAfterHasBeenSet; }
    template<typename LastUpdatedAfterT = Aws::Utils::DateTime>
    void SetLastUpdatedAfter(LastUpdatedAfterT&& value) { m_lastUpdatedAfterHasBeenSet = true; m_lastUpdatedAfter = std::forward<LastUpdatedAfterT>(value); }
    template<typename LastUpdatedAfterT = Aws::Utils::DateTime>
    DescribeDBRecommendationsRequest& WithLastUpdatedAfter(LastUpdatedAfterT&& value) { SetLastUpdatedAfter(std::forward<LastUpdatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedBefore() const { return m_lastUpdatedBefore; }
    inline bool LastUpdatedBeforeHasBeenSet() const { return m_lastUpdatedBeforeHasBeenSet; }
    template<typename LastUpdatedBeforeT = Aws::Utils::DateTime>
    void SetLastUpdatedBefore(LastUpdatedBeforeT&& value) { m_lastUpdatedBeforeHasBeenSet = true; m_lastUpdatedBefore = std::forward<LastUpdatedBeforeT>(value); }
    template<typename LastUpdatedBeforeT = Aws::Utils::DateTime>
    DescribeDBRecommendationsRequest& WithLastUpdatedBefore(LastUpdatedBeforeT&& value) { SetLastUpdatedBefore(std::forward<LastUpdatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language that you choose to return the list of recommendations.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>en</code> </p> </li> <li> <p>
     * <code>en_UK</code> </p> </li> <li> <p> <code>de</code> </p> </li> <li> <p>
     * <code>es</code> </p> </li> <li> <p> <code>fr</code> </p> </li> <li> <p>
     * <code>id</code> </p> </li> <li> <p> <code>it</code> </p> </li> <li> <p>
     * <code>ja</code> </p> </li> <li> <p> <code>ko</code> </p> </li> <li> <p>
     * <code>pt_BR</code> </p> </li> <li> <p> <code>zh_TW</code> </p> </li> <li> <p>
     * <code>zh_CN</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    DescribeDBRecommendationsRequest& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies one or more recommendations to describe.</p>
     * <p>Supported Filters:</p> <ul> <li> <p> <code>recommendation-id</code> - Accepts
     * a list of recommendation identifiers. The results list only includes the
     * recommendations whose identifier is one of the specified filter values.</p>
     * </li> <li> <p> <code>status</code> - Accepts a list of recommendation
     * statuses.</p> <p>Valid values:</p> <ul> <li> <p> <code>active</code> - The
     * recommendations which are ready for you to apply.</p> </li> <li> <p>
     * <code>pending</code> - The applied or scheduled recommendations which are in
     * progress.</p> </li> <li> <p> <code>resolved</code> - The recommendations which
     * are completed.</p> </li> <li> <p> <code>dismissed</code> - The recommendations
     * that you dismissed.</p> </li> </ul> <p>The results list only includes the
     * recommendations whose status is one of the specified filter values.</p> </li>
     * <li> <p> <code>severity</code> - Accepts a list of recommendation severities.
     * The results list only includes the recommendations whose severity is one of the
     * specified filter values.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>high</code> </p> </li> <li> <p> <code>medium</code> </p> </li> <li> <p>
     * <code>low</code> </p> </li> <li> <p> <code>informational</code> </p> </li> </ul>
     * </li> <li> <p> <code>type-id</code> - Accepts a list of recommendation type
     * identifiers. The results list only includes the recommendations whose type is
     * one of the specified filter values.</p> </li> <li> <p>
     * <code>dbi-resource-id</code> - Accepts a list of database resource identifiers.
     * The results list only includes the recommendations that generated for the
     * specified databases.</p> </li> <li> <p> <code>cluster-resource-id</code> -
     * Accepts a list of cluster resource identifiers. The results list only includes
     * the recommendations that generated for the specified clusters.</p> </li> <li>
     * <p> <code>pg-arn</code> - Accepts a list of parameter group ARNs. The results
     * list only includes the recommendations that generated for the specified
     * parameter groups.</p> </li> <li> <p> <code>cluster-pg-arn</code> - Accepts a
     * list of cluster parameter group ARNs. The results list only includes the
     * recommendations that generated for the specified cluster parameter groups.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeDBRecommendationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeDBRecommendationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of recommendations to include in the response. If more
     * records exist than the specified <code>MaxRecords</code> value, a pagination
     * token called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBRecommendationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBRecommendationsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastUpdatedAfter{};
    bool m_lastUpdatedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedBefore{};
    bool m_lastUpdatedBeforeHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
