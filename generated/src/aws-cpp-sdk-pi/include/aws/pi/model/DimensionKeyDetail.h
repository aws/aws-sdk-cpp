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
    AWS_PI_API DimensionKeyDetail() = default;
    AWS_PI_API DimensionKeyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API DimensionKeyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the dimension detail data. Depending on the return status, this
     * value is either the full or truncated SQL query for the following
     * dimensions:</p> <ul> <li> <p> <code>db.query.statement</code> (Amazon
     * DocumentDB)</p> </li> <li> <p> <code>db.sql.statement</code> (Amazon RDS and
     * Aurora)</p> </li> </ul>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    DimensionKeyDetail& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full name of the dimension. The full name includes the group name and key
     * name. The following values are valid:</p> <ul> <li> <p>
     * <code>db.query.statement</code> (Amazon DocumentDB)</p> </li> <li> <p>
     * <code>db.sql.statement</code> (Amazon RDS and Aurora)</p> </li> </ul>
     */
    inline const Aws::String& GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    template<typename DimensionT = Aws::String>
    void SetDimension(DimensionT&& value) { m_dimensionHasBeenSet = true; m_dimension = std::forward<DimensionT>(value); }
    template<typename DimensionT = Aws::String>
    DimensionKeyDetail& WithDimension(DimensionT&& value) { SetDimension(std::forward<DimensionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline DetailStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DetailStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DimensionKeyDetail& WithStatus(DetailStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    DetailStatus m_status{DetailStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
