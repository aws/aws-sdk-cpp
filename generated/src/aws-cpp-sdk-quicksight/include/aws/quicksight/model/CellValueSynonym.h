/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A structure that represents the cell value synonym.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CellValueSynonym">AWS
   * API Reference</a></p>
   */
  class CellValueSynonym
  {
  public:
    AWS_QUICKSIGHT_API CellValueSynonym();
    AWS_QUICKSIGHT_API CellValueSynonym(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CellValueSynonym& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cell value.</p>
     */
    inline const Aws::String& GetCellValue() const{ return m_cellValue; }

    /**
     * <p>The cell value.</p>
     */
    inline bool CellValueHasBeenSet() const { return m_cellValueHasBeenSet; }

    /**
     * <p>The cell value.</p>
     */
    inline void SetCellValue(const Aws::String& value) { m_cellValueHasBeenSet = true; m_cellValue = value; }

    /**
     * <p>The cell value.</p>
     */
    inline void SetCellValue(Aws::String&& value) { m_cellValueHasBeenSet = true; m_cellValue = std::move(value); }

    /**
     * <p>The cell value.</p>
     */
    inline void SetCellValue(const char* value) { m_cellValueHasBeenSet = true; m_cellValue.assign(value); }

    /**
     * <p>The cell value.</p>
     */
    inline CellValueSynonym& WithCellValue(const Aws::String& value) { SetCellValue(value); return *this;}

    /**
     * <p>The cell value.</p>
     */
    inline CellValueSynonym& WithCellValue(Aws::String&& value) { SetCellValue(std::move(value)); return *this;}

    /**
     * <p>The cell value.</p>
     */
    inline CellValueSynonym& WithCellValue(const char* value) { SetCellValue(value); return *this;}


    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSynonyms() const{ return m_synonyms; }

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline void SetSynonyms(const Aws::Vector<Aws::String>& value) { m_synonymsHasBeenSet = true; m_synonyms = value; }

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline void SetSynonyms(Aws::Vector<Aws::String>&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::move(value); }

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline CellValueSynonym& WithSynonyms(const Aws::Vector<Aws::String>& value) { SetSynonyms(value); return *this;}

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline CellValueSynonym& WithSynonyms(Aws::Vector<Aws::String>&& value) { SetSynonyms(std::move(value)); return *this;}

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline CellValueSynonym& AddSynonyms(const Aws::String& value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(value); return *this; }

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline CellValueSynonym& AddSynonyms(Aws::String&& value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(std::move(value)); return *this; }

    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline CellValueSynonym& AddSynonyms(const char* value) { m_synonymsHasBeenSet = true; m_synonyms.push_back(value); return *this; }

  private:

    Aws::String m_cellValue;
    bool m_cellValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_synonyms;
    bool m_synonymsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
