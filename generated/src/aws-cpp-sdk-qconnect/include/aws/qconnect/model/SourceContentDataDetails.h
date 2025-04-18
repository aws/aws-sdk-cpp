/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/SourceContentType.h>
#include <aws/qconnect/model/TextData.h>
#include <aws/qconnect/model/RankingData.h>
#include <aws/qconnect/model/CitationSpan.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Details about the source content data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SourceContentDataDetails">AWS
   * API Reference</a></p>
   */
  class SourceContentDataDetails
  {
  public:
    AWS_QCONNECT_API SourceContentDataDetails() = default;
    AWS_QCONNECT_API SourceContentDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SourceContentDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the source content.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SourceContentDataDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source content.</p>
     */
    inline SourceContentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SourceContentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SourceContentDataDetails& WithType(SourceContentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the source content text data.</p>
     */
    inline const TextData& GetTextData() const { return m_textData; }
    inline bool TextDataHasBeenSet() const { return m_textDataHasBeenSet; }
    template<typename TextDataT = TextData>
    void SetTextData(TextDataT&& value) { m_textDataHasBeenSet = true; m_textData = std::forward<TextDataT>(value); }
    template<typename TextDataT = TextData>
    SourceContentDataDetails& WithTextData(TextDataT&& value) { SetTextData(std::forward<TextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline const RankingData& GetRankingData() const { return m_rankingData; }
    inline bool RankingDataHasBeenSet() const { return m_rankingDataHasBeenSet; }
    template<typename RankingDataT = RankingData>
    void SetRankingData(RankingDataT&& value) { m_rankingDataHasBeenSet = true; m_rankingData = std::forward<RankingDataT>(value); }
    template<typename RankingDataT = RankingData>
    SourceContentDataDetails& WithRankingData(RankingDataT&& value) { SetRankingData(std::forward<RankingDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about where the text with a citation begins and ends in
     * the generated output.</p>
     */
    inline const CitationSpan& GetCitationSpan() const { return m_citationSpan; }
    inline bool CitationSpanHasBeenSet() const { return m_citationSpanHasBeenSet; }
    template<typename CitationSpanT = CitationSpan>
    void SetCitationSpan(CitationSpanT&& value) { m_citationSpanHasBeenSet = true; m_citationSpan = std::forward<CitationSpanT>(value); }
    template<typename CitationSpanT = CitationSpan>
    SourceContentDataDetails& WithCitationSpan(CitationSpanT&& value) { SetCitationSpan(std::forward<CitationSpanT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SourceContentType m_type{SourceContentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    TextData m_textData;
    bool m_textDataHasBeenSet = false;

    RankingData m_rankingData;
    bool m_rankingDataHasBeenSet = false;

    CitationSpan m_citationSpan;
    bool m_citationSpanHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
