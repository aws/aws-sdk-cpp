/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/DataDetails.h>
#include <aws/qconnect/model/EmailGenerativeAnswerChunkDataDetails.h>
#include <aws/qconnect/model/GenerativeChunkDataDetails.h>
#include <aws/qconnect/model/GenerativeDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

DataDetails::DataDetails(JsonView jsonValue) { *this = jsonValue; }

DataDetails& DataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentData")) {
    m_contentData = jsonValue.GetObject("contentData");
    m_contentDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generativeData")) {
    m_generativeData = Aws::MakeShared<GenerativeDataDetails>("DataDetails", jsonValue.GetObject("generativeData"));
    m_generativeDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intentDetectedData")) {
    m_intentDetectedData = jsonValue.GetObject("intentDetectedData");
    m_intentDetectedDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceContentData")) {
    m_sourceContentData = jsonValue.GetObject("sourceContentData");
    m_sourceContentDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generativeChunkData")) {
    m_generativeChunkData = Aws::MakeShared<GenerativeChunkDataDetails>("DataDetails", jsonValue.GetObject("generativeChunkData"));
    m_generativeChunkDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailResponseChunkData")) {
    m_emailResponseChunkData = jsonValue.GetObject("emailResponseChunkData");
    m_emailResponseChunkDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailOverviewChunkData")) {
    m_emailOverviewChunkData = jsonValue.GetObject("emailOverviewChunkData");
    m_emailOverviewChunkDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("emailGenerativeAnswerChunkData")) {
    m_emailGenerativeAnswerChunkData =
        Aws::MakeShared<EmailGenerativeAnswerChunkDataDetails>("DataDetails", jsonValue.GetObject("emailGenerativeAnswerChunkData"));
    m_emailGenerativeAnswerChunkDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseSummarizationChunkData")) {
    m_caseSummarizationChunkData = jsonValue.GetObject("caseSummarizationChunkData");
    m_caseSummarizationChunkDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suggestedMessageData")) {
    m_suggestedMessageData = jsonValue.GetObject("suggestedMessageData");
    m_suggestedMessageDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notesData")) {
    m_notesData = jsonValue.GetObject("notesData");
    m_notesDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notesChunkData")) {
    m_notesChunkData = jsonValue.GetObject("notesChunkData");
    m_notesChunkDataHasBeenSet = true;
  }
  return *this;
}

JsonValue DataDetails::Jsonize() const {
  JsonValue payload;

  if (m_contentDataHasBeenSet) {
    payload.WithObject("contentData", m_contentData.Jsonize());
  }

  if (m_generativeDataHasBeenSet) {
    payload.WithObject("generativeData", m_generativeData->Jsonize());
  }

  if (m_intentDetectedDataHasBeenSet) {
    payload.WithObject("intentDetectedData", m_intentDetectedData.Jsonize());
  }

  if (m_sourceContentDataHasBeenSet) {
    payload.WithObject("sourceContentData", m_sourceContentData.Jsonize());
  }

  if (m_generativeChunkDataHasBeenSet) {
    payload.WithObject("generativeChunkData", m_generativeChunkData->Jsonize());
  }

  if (m_emailResponseChunkDataHasBeenSet) {
    payload.WithObject("emailResponseChunkData", m_emailResponseChunkData.Jsonize());
  }

  if (m_emailOverviewChunkDataHasBeenSet) {
    payload.WithObject("emailOverviewChunkData", m_emailOverviewChunkData.Jsonize());
  }

  if (m_emailGenerativeAnswerChunkDataHasBeenSet) {
    payload.WithObject("emailGenerativeAnswerChunkData", m_emailGenerativeAnswerChunkData->Jsonize());
  }

  if (m_caseSummarizationChunkDataHasBeenSet) {
    payload.WithObject("caseSummarizationChunkData", m_caseSummarizationChunkData.Jsonize());
  }

  if (m_suggestedMessageDataHasBeenSet) {
    payload.WithObject("suggestedMessageData", m_suggestedMessageData.Jsonize());
  }

  if (m_notesDataHasBeenSet) {
    payload.WithObject("notesData", m_notesData.Jsonize());
  }

  if (m_notesChunkDataHasBeenSet) {
    payload.WithObject("notesChunkData", m_notesChunkData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
