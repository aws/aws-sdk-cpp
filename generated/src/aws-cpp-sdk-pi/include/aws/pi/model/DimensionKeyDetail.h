/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/DetailStatus.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>An object that describes the details for a specified dimension.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DimensionKeyDetail">AWS
   * API Reference</a></p>
   */
  class DimensionKeyDetail
  {
  public:
    AWS_PI_API DimensionKeyDetail();
    AWS_PI_API DimensionKeyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API DimensionKeyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithDimension(Aws::String&& value) { SetDimension(std::move(value)); return *this;}

    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithDimension(const char* value) { SetDimension(value); return *this;}


    /**
     * <p>The status of the dimension detail data. Possible values include the
     * following:</p> <ul> <li> <p> <code>AVAILABLE</code> - The dimension detail data
     * is ready to be retrieved.</p> </li> <li> <p> <code>PROCESSING</code> - The
     * dimension detail data isn't ready to be retrieved because more processing time
     * is required. If the requested detail data has the status
     * <code>PROCESSING</code>, Performance Insights returns the truncated query.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> - The dimension detail data could not be
     * collected successfully.</p> </li> </ul>
     */
    inline const DetailStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the dimension detail data. Possible values include the
     * following:</p> <ul> <li> <p> <code>AVAILABLE</code> - The dimension detail data
     * is ready to be retrieved.</p> </li> <li> <p> <code>PROCESSING</code> - The
     * dimension detail data isn't ready to be retrieved because more processing time
     * is required. If the requested detail data has the status
     * <code>PROCESSING</code>, Performance Insights returns the truncated query.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> - The dimension detail data could not be
     * collected successfully.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the dimension detail data. Possible values include the
     * following:</p> <ul> <li> <p> <code>AVAILABLE</code> - The dimension detail data
     * is ready to be retrieved.</p> </li> <li> <p> <code>PROCESSING</code> - The
     * dimension detail data isn't ready to be retrieved because more processing time
     * is required. If the requested detail data has the status
     * <code>PROCESSING</code>, Performance Insights returns the truncated query.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> - The dimension detail data could not be
     * collected successfully.</p> </li> </ul>
     */
    inline void SetStatus(const DetailStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the dimension detail data. Possible values include the
     * following:</p> <ul> <li> <p> <code>AVAILABLE</code> - The dimension detail data
     * is ready to be retrieved.</p> </li> <li> <p> <code>PROCESSING</code> - The
     * dimension detail data isn't ready to be retrieved because more processing time
     * is required. If the requested detail data has the status
     * <code>PROCESSING</code>, Performance Insights returns the truncated query.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> - The dimension detail data could not be
     * collected successfully.</p> </li> </ul>
     */
    inline void SetStatus(DetailStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the dimension detail data. Possible values include the
     * following:</p> <ul> <li> <p> <code>AVAILABLE</code> - The dimension detail data
     * is ready to be retrieved.</p> </li> <li> <p> <code>PROCESSING</code> - The
     * dimension detail data isn't ready to be retrieved because more processing time
     * is required. If the requested detail data has the status
     * <code>PROCESSING</code>, Performance Insights returns the truncated query.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> - The dimension detail data could not be
     * collected successfully.</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithStatus(const DetailStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dimension detail data. Possible values include the
     * following:</p> <ul> <li> <p> <code>AVAILABLE</code> - The dimension detail data
     * is ready to be retrieved.</p> </li> <li> <p> <code>PROCESSING</code> - The
     * dimension detail data isn't ready to be retrieved because more processing time
     * is required. If the requested detail data has the status
     * <code>PROCESSING</code>, Performance Insights returns the truncated query.</p>
     * </li> <li> <p> <code>UNAVAILABLE</code> - The dimension detail data could not be
     * collected successfully.</p> </li> </ul>
     */
    inline DimensionKeyDetail& WithStatus(DetailStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    DetailStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
