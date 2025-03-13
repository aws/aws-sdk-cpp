/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/LanguageModel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class DescribeLanguageModelResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult() = default;
    AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API DescribeLanguageModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides information about the specified custom language model.</p> <p>This
     * parameter also shows if the base language model you used to create your custom
     * language model has been updated. If Amazon Transcribe has updated the base
     * model, you can create a new custom language model using the updated base
     * model.</p> <p>If you tried to create a new custom language model and the request
     * wasn't successful, you can use this <code>DescribeLanguageModel</code> to help
     * identify the reason for this failure.</p>
     */
    inline const LanguageModel& GetLanguageModel() const { return m_languageModel; }
    template<typename LanguageModelT = LanguageModel>
    void SetLanguageModel(LanguageModelT&& value) { m_languageModelHasBeenSet = true; m_languageModel = std::forward<LanguageModelT>(value); }
    template<typename LanguageModelT = LanguageModel>
    DescribeLanguageModelResult& WithLanguageModel(LanguageModelT&& value) { SetLanguageModel(std::forward<LanguageModelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLanguageModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LanguageModel m_languageModel;
    bool m_languageModelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
