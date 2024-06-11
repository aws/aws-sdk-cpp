﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class DescribeDBEngineVersionsRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API DescribeDBEngineVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBEngineVersions"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The database engine to return.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DescribeDBEngineVersionsRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DescribeDBEngineVersionsRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DescribeDBEngineVersionsRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version to return.</p> <p>Example: <code>5.1.49</code>
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DescribeDBEngineVersionsRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DescribeDBEngineVersionsRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DescribeDBEngineVersionsRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a specific DB parameter group family to return details for.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match an existing
     * DBParameterGroupFamily.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }
    inline DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}
    inline DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}
    inline DescribeDBEngineVersionsRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeDBEngineVersionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeDBEngineVersionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeDBEngineVersionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeDBEngineVersionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so that the following results can be retrieved.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBEngineVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeDBEngineVersionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBEngineVersionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBEngineVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that only the default version of the specified engine or engine and
     * major version combination is returned.</p>
     */
    inline bool GetDefaultOnly() const{ return m_defaultOnly; }
    inline bool DefaultOnlyHasBeenSet() const { return m_defaultOnlyHasBeenSet; }
    inline void SetDefaultOnly(bool value) { m_defaultOnlyHasBeenSet = true; m_defaultOnly = value; }
    inline DescribeDBEngineVersionsRequest& WithDefaultOnly(bool value) { SetDefaultOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>CharacterSetName</code> parameter for <code>CreateDBInstance</code>, the
     * response includes a list of supported character sets for each engine
     * version.</p>
     */
    inline bool GetListSupportedCharacterSets() const{ return m_listSupportedCharacterSets; }
    inline bool ListSupportedCharacterSetsHasBeenSet() const { return m_listSupportedCharacterSetsHasBeenSet; }
    inline void SetListSupportedCharacterSets(bool value) { m_listSupportedCharacterSetsHasBeenSet = true; m_listSupportedCharacterSets = value; }
    inline DescribeDBEngineVersionsRequest& WithListSupportedCharacterSets(bool value) { SetListSupportedCharacterSets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified and the requested engine supports the
     * <code>TimeZone</code> parameter for <code>CreateDBInstance</code>, the response
     * includes a list of supported time zones for each engine version.</p>
     */
    inline bool GetListSupportedTimezones() const{ return m_listSupportedTimezones; }
    inline bool ListSupportedTimezonesHasBeenSet() const { return m_listSupportedTimezonesHasBeenSet; }
    inline void SetListSupportedTimezones(bool value) { m_listSupportedTimezonesHasBeenSet = true; m_listSupportedTimezones = value; }
    inline DescribeDBEngineVersionsRequest& WithListSupportedTimezones(bool value) { SetListSupportedTimezones(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_defaultOnly;
    bool m_defaultOnlyHasBeenSet = false;

    bool m_listSupportedCharacterSets;
    bool m_listSupportedCharacterSetsHasBeenSet = false;

    bool m_listSupportedTimezones;
    bool m_listSupportedTimezonesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
