/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/RankingData.h>
#include <aws/qconnect/model/TextData.h>
#include <aws/qconnect/model/SourceContentType.h>
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
    AWS_QCONNECT_API SourceContentDataDetails();
    AWS_QCONNECT_API SourceContentDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SourceContentDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the source content.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the source content.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the source content.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the source content.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the source content.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the source content.</p>
     */
    inline SourceContentDataDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the source content.</p>
     */
    inline SourceContentDataDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source content.</p>
     */
    inline SourceContentDataDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline const RankingData& GetRankingData() const{ return m_rankingData; }

    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline bool RankingDataHasBeenSet() const { return m_rankingDataHasBeenSet; }

    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline void SetRankingData(const RankingData& value) { m_rankingDataHasBeenSet = true; m_rankingData = value; }

    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline void SetRankingData(RankingData&& value) { m_rankingDataHasBeenSet = true; m_rankingData = std::move(value); }

    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline SourceContentDataDetails& WithRankingData(const RankingData& value) { SetRankingData(value); return *this;}

    /**
     * <p>Details about the source content ranking data.</p>
     */
    inline SourceContentDataDetails& WithRankingData(RankingData&& value) { SetRankingData(std::move(value)); return *this;}


    /**
     * <p> Details about the source content text data.</p>
     */
    inline const TextData& GetTextData() const{ return m_textData; }

    /**
     * <p> Details about the source content text data.</p>
     */
    inline bool TextDataHasBeenSet() const { return m_textDataHasBeenSet; }

    /**
     * <p> Details about the source content text data.</p>
     */
    inline void SetTextData(const TextData& value) { m_textDataHasBeenSet = true; m_textData = value; }

    /**
     * <p> Details about the source content text data.</p>
     */
    inline void SetTextData(TextData&& value) { m_textDataHasBeenSet = true; m_textData = std::move(value); }

    /**
     * <p> Details about the source content text data.</p>
     */
    inline SourceContentDataDetails& WithTextData(const TextData& value) { SetTextData(value); return *this;}

    /**
     * <p> Details about the source content text data.</p>
     */
    inline SourceContentDataDetails& WithTextData(TextData&& value) { SetTextData(std::move(value)); return *this;}


    /**
     * <p>The type of the source content.</p>
     */
    inline const SourceContentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the source content.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the source content.</p>
     */
    inline void SetType(const SourceContentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the source content.</p>
     */
    inline void SetType(SourceContentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the source content.</p>
     */
    inline SourceContentDataDetails& WithType(const SourceContentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the source content.</p>
     */
    inline SourceContentDataDetails& WithType(SourceContentType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    RankingData m_rankingData;
    bool m_rankingDataHasBeenSet = false;

    TextData m_textData;
    bool m_textDataHasBeenSet = false;

    SourceContentType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
