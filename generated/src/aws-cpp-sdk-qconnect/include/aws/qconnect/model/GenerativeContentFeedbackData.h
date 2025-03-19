/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/Relevance.h>
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
   * <p>The feedback information for a generative target type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GenerativeContentFeedbackData">AWS
   * API Reference</a></p>
   */
  class GenerativeContentFeedbackData
  {
  public:
    AWS_QCONNECT_API GenerativeContentFeedbackData() = default;
    AWS_QCONNECT_API GenerativeContentFeedbackData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GenerativeContentFeedbackData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relevance of the feedback.</p>
     */
    inline Relevance GetRelevance() const { return m_relevance; }
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }
    inline void SetRelevance(Relevance value) { m_relevanceHasBeenSet = true; m_relevance = value; }
    inline GenerativeContentFeedbackData& WithRelevance(Relevance value) { SetRelevance(value); return *this;}
    ///@}
  private:

    Relevance m_relevance{Relevance::NOT_SET};
    bool m_relevanceHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
