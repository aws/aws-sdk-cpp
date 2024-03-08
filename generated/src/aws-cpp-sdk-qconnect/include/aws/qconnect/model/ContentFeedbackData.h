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
    AWS_QCONNECT_API ContentFeedbackData();
    AWS_QCONNECT_API ContentFeedbackData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentFeedbackData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline const GenerativeContentFeedbackData& GetGenerativeContentFeedbackData() const{ return m_generativeContentFeedbackData; }

    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline bool GenerativeContentFeedbackDataHasBeenSet() const { return m_generativeContentFeedbackDataHasBeenSet; }

    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline void SetGenerativeContentFeedbackData(const GenerativeContentFeedbackData& value) { m_generativeContentFeedbackDataHasBeenSet = true; m_generativeContentFeedbackData = value; }

    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline void SetGenerativeContentFeedbackData(GenerativeContentFeedbackData&& value) { m_generativeContentFeedbackDataHasBeenSet = true; m_generativeContentFeedbackData = std::move(value); }

    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline ContentFeedbackData& WithGenerativeContentFeedbackData(const GenerativeContentFeedbackData& value) { SetGenerativeContentFeedbackData(value); return *this;}

    /**
     * <p>Information about the feedback for a generative target type.</p>
     */
    inline ContentFeedbackData& WithGenerativeContentFeedbackData(GenerativeContentFeedbackData&& value) { SetGenerativeContentFeedbackData(std::move(value)); return *this;}

  private:

    GenerativeContentFeedbackData m_generativeContentFeedbackData;
    bool m_generativeContentFeedbackDataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
