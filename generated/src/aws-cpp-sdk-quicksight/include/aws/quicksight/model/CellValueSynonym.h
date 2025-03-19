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
    AWS_QUICKSIGHT_API CellValueSynonym() = default;
    AWS_QUICKSIGHT_API CellValueSynonym(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CellValueSynonym& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cell value.</p>
     */
    inline const Aws::String& GetCellValue() const { return m_cellValue; }
    inline bool CellValueHasBeenSet() const { return m_cellValueHasBeenSet; }
    template<typename CellValueT = Aws::String>
    void SetCellValue(CellValueT&& value) { m_cellValueHasBeenSet = true; m_cellValue = std::forward<CellValueT>(value); }
    template<typename CellValueT = Aws::String>
    CellValueSynonym& WithCellValue(CellValueT&& value) { SetCellValue(std::forward<CellValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Other names or aliases for the cell value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSynonyms() const { return m_synonyms; }
    inline bool SynonymsHasBeenSet() const { return m_synonymsHasBeenSet; }
    template<typename SynonymsT = Aws::Vector<Aws::String>>
    void SetSynonyms(SynonymsT&& value) { m_synonymsHasBeenSet = true; m_synonyms = std::forward<SynonymsT>(value); }
    template<typename SynonymsT = Aws::Vector<Aws::String>>
    CellValueSynonym& WithSynonyms(SynonymsT&& value) { SetSynonyms(std::forward<SynonymsT>(value)); return *this;}
    template<typename SynonymsT = Aws::String>
    CellValueSynonym& AddSynonyms(SynonymsT&& value) { m_synonymsHasBeenSet = true; m_synonyms.emplace_back(std::forward<SynonymsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cellValue;
    bool m_cellValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_synonyms;
    bool m_synonymsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
