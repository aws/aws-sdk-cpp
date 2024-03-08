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
    AWS_RDS_API DescribeDBRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBRecommendations"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAfter() const{ return m_lastUpdatedAfter; }

    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline bool LastUpdatedAfterHasBeenSet() const { return m_lastUpdatedAfterHasBeenSet; }

    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline void SetLastUpdatedAfter(const Aws::Utils::DateTime& value) { m_lastUpdatedAfterHasBeenSet = true; m_lastUpdatedAfter = value; }

    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline void SetLastUpdatedAfter(Aws::Utils::DateTime&& value) { m_lastUpdatedAfterHasBeenSet = true; m_lastUpdatedAfter = std::move(value); }

    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline DescribeDBRecommendationsRequest& WithLastUpdatedAfter(const Aws::Utils::DateTime& value) { SetLastUpdatedAfter(value); return *this;}

    /**
     * <p>A filter to include only the recommendations that were updated after this
     * specified time.</p>
     */
    inline DescribeDBRecommendationsRequest& WithLastUpdatedAfter(Aws::Utils::DateTime&& value) { SetLastUpdatedAfter(std::move(value)); return *this;}


    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedBefore() const{ return m_lastUpdatedBefore; }

    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline bool LastUpdatedBeforeHasBeenSet() const { return m_lastUpdatedBeforeHasBeenSet; }

    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline void SetLastUpdatedBefore(const Aws::Utils::DateTime& value) { m_lastUpdatedBeforeHasBeenSet = true; m_lastUpdatedBefore = value; }

    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline void SetLastUpdatedBefore(Aws::Utils::DateTime&& value) { m_lastUpdatedBeforeHasBeenSet = true; m_lastUpdatedBefore = std::move(value); }

    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline DescribeDBRecommendationsRequest& WithLastUpdatedBefore(const Aws::Utils::DateTime& value) { SetLastUpdatedBefore(value); return *this;}

    /**
     * <p>A filter to include only the recommendations that were updated before this
     * specified time.</p>
     */
    inline DescribeDBRecommendationsRequest& WithLastUpdatedBefore(Aws::Utils::DateTime&& value) { SetLastUpdatedBefore(std::move(value)); return *this;}


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
    inline const Aws::String& GetLocale() const{ return m_locale; }

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
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

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
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

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
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

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
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

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
    inline DescribeDBRecommendationsRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

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
    inline DescribeDBRecommendationsRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

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
    inline DescribeDBRecommendationsRequest& WithLocale(const char* value) { SetLocale(value); return *this;}


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
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

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
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

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
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

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
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

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
    inline DescribeDBRecommendationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

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
    inline DescribeDBRecommendationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

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
    inline DescribeDBRecommendationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline DescribeDBRecommendationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of recommendations to include in the response. If more
     * records exist than the specified <code>MaxRecords</code> value, a pagination
     * token called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of recommendations to include in the response. If more
     * records exist than the specified <code>MaxRecords</code> value, a pagination
     * token called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of recommendations to include in the response. If more
     * records exist than the specified <code>MaxRecords</code> value, a pagination
     * token called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of recommendations to include in the response. If more
     * records exist than the specified <code>MaxRecords</code> value, a pagination
     * token called a marker is included in the response so that you can retrieve the
     * remaining results.</p>
     */
    inline DescribeDBRecommendationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBRecommendationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBRecommendationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeDBRecommendations</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>. </p>
     */
    inline DescribeDBRecommendationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastUpdatedAfter;
    bool m_lastUpdatedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedBefore;
    bool m_lastUpdatedBeforeHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
