﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeDefaultClusterParametersMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDefaultClusterParametersRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeDefaultClusterParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDefaultClusterParameters"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the cluster parameter group family.</p>
     */
    inline const Aws::String& GetParameterGroupFamily() const{ return m_parameterGroupFamily; }
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }
    inline void SetParameterGroupFamily(const Aws::String& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = value; }
    inline void SetParameterGroupFamily(Aws::String&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::move(value); }
    inline void SetParameterGroupFamily(const char* value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily.assign(value); }
    inline DescribeDefaultClusterParametersRequest& WithParameterGroupFamily(const Aws::String& value) { SetParameterGroupFamily(value); return *this;}
    inline DescribeDefaultClusterParametersRequest& WithParameterGroupFamily(Aws::String&& value) { SetParameterGroupFamily(std::move(value)); return *this;}
    inline DescribeDefaultClusterParametersRequest& WithParameterGroupFamily(const char* value) { SetParameterGroupFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDefaultClusterParametersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDefaultClusterParameters</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeDefaultClusterParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDefaultClusterParametersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDefaultClusterParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_parameterGroupFamily;
    bool m_parameterGroupFamilyHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
