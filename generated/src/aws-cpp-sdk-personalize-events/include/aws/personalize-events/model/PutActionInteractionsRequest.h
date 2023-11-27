/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/personalize-events/PersonalizeEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-events/model/ActionInteraction.h>
#include <utility>

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

  /**
   */
  class PutActionInteractionsRequest : public PersonalizeEventsRequest
  {
  public:
    AWS_PERSONALIZEEVENTS_API PutActionInteractionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutActionInteractions"; }

    AWS_PERSONALIZEEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline const Aws::String& GetTrackingId() const{ return m_trackingId; }

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline bool TrackingIdHasBeenSet() const { return m_trackingIdHasBeenSet; }

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline void SetTrackingId(const Aws::String& value) { m_trackingIdHasBeenSet = true; m_trackingId = value; }

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline void SetTrackingId(Aws::String&& value) { m_trackingIdHasBeenSet = true; m_trackingId = std::move(value); }

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline void SetTrackingId(const char* value) { m_trackingIdHasBeenSet = true; m_trackingId.assign(value); }

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline PutActionInteractionsRequest& WithTrackingId(const Aws::String& value) { SetTrackingId(value); return *this;}

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline PutActionInteractionsRequest& WithTrackingId(Aws::String&& value) { SetTrackingId(std::move(value)); return *this;}

    /**
     * <p>The ID of your action interaction event tracker. When you create an Action
     * interactions dataset, Amazon Personalize creates an action interaction event
     * tracker for you. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/action-interaction-tracker-id.html">Action
     * interaction event tracker ID</a>.</p>
     */
    inline PutActionInteractionsRequest& WithTrackingId(const char* value) { SetTrackingId(value); return *this;}


    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline const Aws::Vector<ActionInteraction>& GetActionInteractions() const{ return m_actionInteractions; }

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline bool ActionInteractionsHasBeenSet() const { return m_actionInteractionsHasBeenSet; }

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline void SetActionInteractions(const Aws::Vector<ActionInteraction>& value) { m_actionInteractionsHasBeenSet = true; m_actionInteractions = value; }

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline void SetActionInteractions(Aws::Vector<ActionInteraction>&& value) { m_actionInteractionsHasBeenSet = true; m_actionInteractions = std::move(value); }

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline PutActionInteractionsRequest& WithActionInteractions(const Aws::Vector<ActionInteraction>& value) { SetActionInteractions(value); return *this;}

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline PutActionInteractionsRequest& WithActionInteractions(Aws::Vector<ActionInteraction>&& value) { SetActionInteractions(std::move(value)); return *this;}

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline PutActionInteractionsRequest& AddActionInteractions(const ActionInteraction& value) { m_actionInteractionsHasBeenSet = true; m_actionInteractions.push_back(value); return *this; }

    /**
     * <p>A list of action interaction events from the session.</p>
     */
    inline PutActionInteractionsRequest& AddActionInteractions(ActionInteraction&& value) { m_actionInteractionsHasBeenSet = true; m_actionInteractions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trackingId;
    bool m_trackingIdHasBeenSet = false;

    Aws::Vector<ActionInteraction> m_actionInteractions;
    bool m_actionInteractionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
