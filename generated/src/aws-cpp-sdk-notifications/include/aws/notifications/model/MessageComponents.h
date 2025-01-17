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
    AWS_NOTIFICATIONS_API MessageComponents();
    AWS_NOTIFICATIONS_API MessageComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API MessageComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A sentence long summary. For example, titles or an email subject line.</p>
     */
    inline const Aws::String& GetHeadline() const{ return m_headline; }
    inline bool HeadlineHasBeenSet() const { return m_headlineHasBeenSet; }
    inline void SetHeadline(const Aws::String& value) { m_headlineHasBeenSet = true; m_headline = value; }
    inline void SetHeadline(Aws::String&& value) { m_headlineHasBeenSet = true; m_headline = std::move(value); }
    inline void SetHeadline(const char* value) { m_headlineHasBeenSet = true; m_headline.assign(value); }
    inline MessageComponents& WithHeadline(const Aws::String& value) { SetHeadline(value); return *this;}
    inline MessageComponents& WithHeadline(Aws::String&& value) { SetHeadline(std::move(value)); return *this;}
    inline MessageComponents& WithHeadline(const char* value) { SetHeadline(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A paragraph long or multiple sentence summary. For example, Chatbot
     * notifications.</p>
     */
    inline const Aws::String& GetParagraphSummary() const{ return m_paragraphSummary; }
    inline bool ParagraphSummaryHasBeenSet() const { return m_paragraphSummaryHasBeenSet; }
    inline void SetParagraphSummary(const Aws::String& value) { m_paragraphSummaryHasBeenSet = true; m_paragraphSummary = value; }
    inline void SetParagraphSummary(Aws::String&& value) { m_paragraphSummaryHasBeenSet = true; m_paragraphSummary = std::move(value); }
    inline void SetParagraphSummary(const char* value) { m_paragraphSummaryHasBeenSet = true; m_paragraphSummary.assign(value); }
    inline MessageComponents& WithParagraphSummary(const Aws::String& value) { SetParagraphSummary(value); return *this;}
    inline MessageComponents& WithParagraphSummary(Aws::String&& value) { SetParagraphSummary(std::move(value)); return *this;}
    inline MessageComponents& WithParagraphSummary(const char* value) { SetParagraphSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complete summary with all possible relevant information.</p>
     */
    inline const Aws::String& GetCompleteDescription() const{ return m_completeDescription; }
    inline bool CompleteDescriptionHasBeenSet() const { return m_completeDescriptionHasBeenSet; }
    inline void SetCompleteDescription(const Aws::String& value) { m_completeDescriptionHasBeenSet = true; m_completeDescription = value; }
    inline void SetCompleteDescription(Aws::String&& value) { m_completeDescriptionHasBeenSet = true; m_completeDescription = std::move(value); }
    inline void SetCompleteDescription(const char* value) { m_completeDescriptionHasBeenSet = true; m_completeDescription.assign(value); }
    inline MessageComponents& WithCompleteDescription(const Aws::String& value) { SetCompleteDescription(value); return *this;}
    inline MessageComponents& WithCompleteDescription(Aws::String&& value) { SetCompleteDescription(std::move(value)); return *this;}
    inline MessageComponents& WithCompleteDescription(const char* value) { SetCompleteDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of properties in key-value pairs. Pairs are shown in order of
     * importance from most important to least important. Channels may limit the number
     * of dimensions shown to the notification viewer.</p>  <p>Included
     * dimensions, keys, and values are subject to change.</p> 
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline MessageComponents& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline MessageComponents& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline MessageComponents& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline MessageComponents& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
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
