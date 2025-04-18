/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentDataDetails.h>
#include <aws/qconnect/model/IntentDetectedDataDetails.h>
#include <aws/qconnect/model/SourceContentDataDetails.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
  class GenerativeDataDetails;
  class GenerativeChunkDataDetails;

  /**
   * <p>Details about the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DataDetails">AWS
   * API Reference</a></p>
   */
  class DataDetails
  {
  public:
    AWS_QCONNECT_API DataDetails() = default;
    AWS_QCONNECT_API DataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API DataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the content data.</p>
     */
    inline const ContentDataDetails& GetContentData() const { return m_contentData; }
    inline bool ContentDataHasBeenSet() const { return m_contentDataHasBeenSet; }
    template<typename ContentDataT = ContentDataDetails>
    void SetContentData(ContentDataT&& value) { m_contentDataHasBeenSet = true; m_contentData = std::forward<ContentDataT>(value); }
    template<typename ContentDataT = ContentDataDetails>
    DataDetails& WithContentData(ContentDataT&& value) { SetContentData(std::forward<ContentDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the generative data.</p>
     */
    inline const GenerativeDataDetails& GetGenerativeData() const{
      return *m_generativeData;
    }
    inline bool GenerativeDataHasBeenSet() const { return m_generativeDataHasBeenSet; }
    template<typename GenerativeDataT = GenerativeDataDetails>
    void SetGenerativeData(GenerativeDataT&& value) {
      m_generativeDataHasBeenSet = true; 
      m_generativeData = Aws::MakeShared<GenerativeDataDetails>("DataDetails", std::forward<GenerativeDataT>(value));
    }
    template<typename GenerativeDataT = GenerativeDataDetails>
    DataDetails& WithGenerativeData(GenerativeDataT&& value) { SetGenerativeData(std::forward<GenerativeDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the intent data.</p>
     */
    inline const IntentDetectedDataDetails& GetIntentDetectedData() const { return m_intentDetectedData; }
    inline bool IntentDetectedDataHasBeenSet() const { return m_intentDetectedDataHasBeenSet; }
    template<typename IntentDetectedDataT = IntentDetectedDataDetails>
    void SetIntentDetectedData(IntentDetectedDataT&& value) { m_intentDetectedDataHasBeenSet = true; m_intentDetectedData = std::forward<IntentDetectedDataT>(value); }
    template<typename IntentDetectedDataT = IntentDetectedDataDetails>
    DataDetails& WithIntentDetectedData(IntentDetectedDataT&& value) { SetIntentDetectedData(std::forward<IntentDetectedDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the content data.</p>
     */
    inline const SourceContentDataDetails& GetSourceContentData() const { return m_sourceContentData; }
    inline bool SourceContentDataHasBeenSet() const { return m_sourceContentDataHasBeenSet; }
    template<typename SourceContentDataT = SourceContentDataDetails>
    void SetSourceContentData(SourceContentDataT&& value) { m_sourceContentDataHasBeenSet = true; m_sourceContentData = std::forward<SourceContentDataT>(value); }
    template<typename SourceContentDataT = SourceContentDataDetails>
    DataDetails& WithSourceContentData(SourceContentDataT&& value) { SetSourceContentData(std::forward<SourceContentDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the generative chunk data.</p>
     */
    inline const GenerativeChunkDataDetails& GetGenerativeChunkData() const{
      return *m_generativeChunkData;
    }
    inline bool GenerativeChunkDataHasBeenSet() const { return m_generativeChunkDataHasBeenSet; }
    template<typename GenerativeChunkDataT = GenerativeChunkDataDetails>
    void SetGenerativeChunkData(GenerativeChunkDataT&& value) {
      m_generativeChunkDataHasBeenSet = true; 
      m_generativeChunkData = Aws::MakeShared<GenerativeChunkDataDetails>("DataDetails", std::forward<GenerativeChunkDataT>(value));
    }
    template<typename GenerativeChunkDataT = GenerativeChunkDataDetails>
    DataDetails& WithGenerativeChunkData(GenerativeChunkDataT&& value) { SetGenerativeChunkData(std::forward<GenerativeChunkDataT>(value)); return *this;}
    ///@}
  private:

    ContentDataDetails m_contentData;
    bool m_contentDataHasBeenSet = false;

    std::shared_ptr<GenerativeDataDetails> m_generativeData;
    bool m_generativeDataHasBeenSet = false;

    IntentDetectedDataDetails m_intentDetectedData;
    bool m_intentDetectedDataHasBeenSet = false;

    SourceContentDataDetails m_sourceContentData;
    bool m_sourceContentDataHasBeenSet = false;

    std::shared_ptr<GenerativeChunkDataDetails> m_generativeChunkData;
    bool m_generativeChunkDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
