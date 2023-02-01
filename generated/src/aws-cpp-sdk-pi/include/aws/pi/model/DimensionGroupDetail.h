/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/DimensionDetail.h>
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
   * <p>Information about dimensions within a dimension group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DimensionGroupDetail">AWS
   * API Reference</a></p>
   */
  class DimensionGroupDetail
  {
  public:
    AWS_PI_API DimensionGroupDetail();
    AWS_PI_API DimensionGroupDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API DimensionGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension group.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the dimension group.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the dimension group.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the dimension group.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the dimension group.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the dimension group.</p>
     */
    inline DimensionGroupDetail& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the dimension group.</p>
     */
    inline DimensionGroupDetail& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension group.</p>
     */
    inline DimensionGroupDetail& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline const Aws::Vector<DimensionDetail>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline void SetDimensions(const Aws::Vector<DimensionDetail>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline void SetDimensions(Aws::Vector<DimensionDetail>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline DimensionGroupDetail& WithDimensions(const Aws::Vector<DimensionDetail>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline DimensionGroupDetail& WithDimensions(Aws::Vector<DimensionDetail>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline DimensionGroupDetail& AddDimensions(const DimensionDetail& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions within a dimension group.</p>
     */
    inline DimensionGroupDetail& AddDimensions(DimensionDetail&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<DimensionDetail> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
