/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TextData.h>
#include <aws/qconnect/model/RankingData.h>
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
   * <p>Details about the content data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ContentDataDetails">AWS
   * API Reference</a></p>
   */
  class ContentDataDetails
  {
  public:
    AWS_QCONNECT_API ContentDataDetails() = default;
    AWS_QCONNECT_API ContentDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the content text data.</p>
     */
    inline const TextData& GetTextData() const { return m_textData; }
    inline bool TextDataHasBeenSet() const { return m_textDataHasBeenSet; }
    template<typename TextDataT = TextData>
    void SetTextData(TextDataT&& value) { m_textDataHasBeenSet = true; m_textData = std::forward<TextDataT>(value); }
    template<typename TextDataT = TextData>
    ContentDataDetails& WithTextData(TextDataT&& value) { SetTextData(std::forward<TextDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the content ranking data.</p>
     */
    inline const RankingData& GetRankingData() const { return m_rankingData; }
    inline bool RankingDataHasBeenSet() const { return m_rankingDataHasBeenSet; }
    template<typename RankingDataT = RankingData>
    void SetRankingData(RankingDataT&& value) { m_rankingDataHasBeenSet = true; m_rankingData = std::forward<RankingDataT>(value); }
    template<typename RankingDataT = RankingData>
    ContentDataDetails& WithRankingData(RankingDataT&& value) { SetRankingData(std::forward<RankingDataT>(value)); return *this;}
    ///@}
  private:

    TextData m_textData;
    bool m_textDataHasBeenSet = false;

    RankingData m_rankingData;
    bool m_rankingDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
