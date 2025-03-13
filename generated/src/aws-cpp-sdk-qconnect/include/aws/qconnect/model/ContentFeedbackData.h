/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/GenerativeContentFeedbackData.h>
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
   * <p>Information about the feedback.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ContentFeedbackData">AWS
   * API Reference</a></p>
   */
  class ContentFeedbackData
  {
  public:
    AWS_QCONNECT_API ContentFeedbackData() = default;
    AWS_QCONNECT_API ContentFeedbackData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentFeedbackData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline const GenerativeContentFeedbackData& GetGenerativeContentFeedbackData() const { return m_generativeContentFeedbackData; }
    inline bool GenerativeContentFeedbackDataHasBeenSet() const { return m_generativeContentFeedbackDataHasBeenSet; }
    template<typename GenerativeContentFeedbackDataT = GenerativeContentFeedbackData>
    void SetGenerativeContentFeedbackData(GenerativeContentFeedbackDataT&& value) { m_generativeContentFeedbackDataHasBeenSet = true; m_generativeContentFeedbackData = std::forward<GenerativeContentFeedbackDataT>(value); }
    template<typename GenerativeContentFeedbackDataT = GenerativeContentFeedbackData>
    ContentFeedbackData& WithGenerativeContentFeedbackData(GenerativeContentFeedbackDataT&& value) { SetGenerativeContentFeedbackData(std::forward<GenerativeContentFeedbackDataT>(value)); return *this;}
    ///@}
  private:

    GenerativeContentFeedbackData m_generativeContentFeedbackData;
    bool m_generativeContentFeedbackDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
