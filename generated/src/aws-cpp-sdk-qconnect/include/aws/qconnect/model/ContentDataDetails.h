/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/RankingData.h>
#include <aws/qconnect/model/TextData.h>
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
    AWS_QCONNECT_API ContentDataDetails();
    AWS_QCONNECT_API ContentDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the content ranking data.</p>
     */
    inline const RankingData& GetRankingData() const{ return m_rankingData; }

    /**
     * <p>Details about the content ranking data.</p>
     */
    inline bool RankingDataHasBeenSet() const { return m_rankingDataHasBeenSet; }

    /**
     * <p>Details about the content ranking data.</p>
     */
    inline void SetRankingData(const RankingData& value) { m_rankingDataHasBeenSet = true; m_rankingData = value; }

    /**
     * <p>Details about the content ranking data.</p>
     */
    inline void SetRankingData(RankingData&& value) { m_rankingDataHasBeenSet = true; m_rankingData = std::move(value); }

    /**
     * <p>Details about the content ranking data.</p>
     */
    inline ContentDataDetails& WithRankingData(const RankingData& value) { SetRankingData(value); return *this;}

    /**
     * <p>Details about the content ranking data.</p>
     */
    inline ContentDataDetails& WithRankingData(RankingData&& value) { SetRankingData(std::move(value)); return *this;}


    /**
     * <p>Details about the content text data.</p>
     */
    inline const TextData& GetTextData() const{ return m_textData; }

    /**
     * <p>Details about the content text data.</p>
     */
    inline bool TextDataHasBeenSet() const { return m_textDataHasBeenSet; }

    /**
     * <p>Details about the content text data.</p>
     */
    inline void SetTextData(const TextData& value) { m_textDataHasBeenSet = true; m_textData = value; }

    /**
     * <p>Details about the content text data.</p>
     */
    inline void SetTextData(TextData&& value) { m_textDataHasBeenSet = true; m_textData = std::move(value); }

    /**
     * <p>Details about the content text data.</p>
     */
    inline ContentDataDetails& WithTextData(const TextData& value) { SetTextData(value); return *this;}

    /**
     * <p>Details about the content text data.</p>
     */
    inline ContentDataDetails& WithTextData(TextData&& value) { SetTextData(std::move(value)); return *this;}

  private:

    RankingData m_rankingData;
    bool m_rankingDataHasBeenSet = false;

    TextData m_textData;
    bool m_textDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
