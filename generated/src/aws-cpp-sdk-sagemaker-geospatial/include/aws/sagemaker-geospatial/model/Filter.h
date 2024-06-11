/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure representing the filters supported by a
   * RasterDataCollection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Filter();
    AWS_SAGEMAKERGEOSPATIAL_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum value of the filter.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline Filter& WithMaximum(double value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum value of the filter.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline Filter& WithMinimum(double value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Filter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the filter being used.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Filter& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Filter& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Filter& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    double m_maximum;
    bool m_maximumHasBeenSet = false;

    double m_minimum;
    bool m_minimumHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
