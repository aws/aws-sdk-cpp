/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A dataset parameter that is mapped to an analysis parameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MappedDataSetParameter">AWS
   * API Reference</a></p>
   */
  class MappedDataSetParameter
  {
  public:
    AWS_QUICKSIGHT_API MappedDataSetParameter();
    AWS_QUICKSIGHT_API MappedDataSetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MappedDataSetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline MappedDataSetParameter& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline MappedDataSetParameter& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique name that identifies a dataset within the analysis or dashboard.</p>
     */
    inline MappedDataSetParameter& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}


    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline const Aws::String& GetDataSetParameterName() const{ return m_dataSetParameterName; }

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline bool DataSetParameterNameHasBeenSet() const { return m_dataSetParameterNameHasBeenSet; }

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline void SetDataSetParameterName(const Aws::String& value) { m_dataSetParameterNameHasBeenSet = true; m_dataSetParameterName = value; }

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline void SetDataSetParameterName(Aws::String&& value) { m_dataSetParameterNameHasBeenSet = true; m_dataSetParameterName = std::move(value); }

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline void SetDataSetParameterName(const char* value) { m_dataSetParameterNameHasBeenSet = true; m_dataSetParameterName.assign(value); }

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline MappedDataSetParameter& WithDataSetParameterName(const Aws::String& value) { SetDataSetParameterName(value); return *this;}

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline MappedDataSetParameter& WithDataSetParameterName(Aws::String&& value) { SetDataSetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset parameter.</p>
     */
    inline MappedDataSetParameter& WithDataSetParameterName(const char* value) { SetDataSetParameterName(value); return *this;}

  private:

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::String m_dataSetParameterName;
    bool m_dataSetParameterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
