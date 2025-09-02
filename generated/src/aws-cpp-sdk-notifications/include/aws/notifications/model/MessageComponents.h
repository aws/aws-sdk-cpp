/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/Dimension.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Describes the components of a notification message.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/MessageComponents">AWS
   * API Reference</a></p>
   */
  class MessageComponents
  {
  public:
    AWS_NOTIFICATIONS_API MessageComponents() = default;
    AWS_NOTIFICATIONS_API MessageComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API MessageComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A sentence long summary. For example, titles or an email subject line.</p>
     */
    inline const Aws::String& GetHeadline() const { return m_headline; }
    inline bool HeadlineHasBeenSet() const { return m_headlineHasBeenSet; }
    template<typename HeadlineT = Aws::String>
    void SetHeadline(HeadlineT&& value) { m_headlineHasBeenSet = true; m_headline = std::forward<HeadlineT>(value); }
    template<typename HeadlineT = Aws::String>
    MessageComponents& WithHeadline(HeadlineT&& value) { SetHeadline(std::forward<HeadlineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A paragraph long or multiple sentence summary. For example, Amazon Q
     * Developer in chat applications notifications.</p>
     */
    inline const Aws::String& GetParagraphSummary() const { return m_paragraphSummary; }
    inline bool ParagraphSummaryHasBeenSet() const { return m_paragraphSummaryHasBeenSet; }
    template<typename ParagraphSummaryT = Aws::String>
    void SetParagraphSummary(ParagraphSummaryT&& value) { m_paragraphSummaryHasBeenSet = true; m_paragraphSummary = std::forward<ParagraphSummaryT>(value); }
    template<typename ParagraphSummaryT = Aws::String>
    MessageComponents& WithParagraphSummary(ParagraphSummaryT&& value) { SetParagraphSummary(std::forward<ParagraphSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complete summary with all possible relevant information.</p>
     */
    inline const Aws::String& GetCompleteDescription() const { return m_completeDescription; }
    inline bool CompleteDescriptionHasBeenSet() const { return m_completeDescriptionHasBeenSet; }
    template<typename CompleteDescriptionT = Aws::String>
    void SetCompleteDescription(CompleteDescriptionT&& value) { m_completeDescriptionHasBeenSet = true; m_completeDescription = std::forward<CompleteDescriptionT>(value); }
    template<typename CompleteDescriptionT = Aws::String>
    MessageComponents& WithCompleteDescription(CompleteDescriptionT&& value) { SetCompleteDescription(std::forward<CompleteDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of properties in key-value pairs. Pairs are shown in order of
     * importance from most important to least important. Channels may limit the number
     * of dimensions shown to the notification viewer.</p>  <p>Included
     * dimensions, keys, and values are subject to change.</p> 
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    MessageComponents& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    MessageComponents& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_headline;
    bool m_headlineHasBeenSet = false;

    Aws::String m_paragraphSummary;
    bool m_paragraphSummaryHasBeenSet = false;

    Aws::String m_completeDescription;
    bool m_completeDescriptionHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
