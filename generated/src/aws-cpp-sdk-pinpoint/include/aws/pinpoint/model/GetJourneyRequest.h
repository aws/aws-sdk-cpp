/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class GetJourneyRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetJourneyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJourney"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetJourneyRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetJourneyRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline GetJourneyRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetJourneyId() const{ return m_journeyId; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetJourneyId(const Aws::String& value) { m_journeyIdHasBeenSet = true; m_journeyId = value; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetJourneyId(Aws::String&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::move(value); }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetJourneyId(const char* value) { m_journeyIdHasBeenSet = true; m_journeyId.assign(value); }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline GetJourneyRequest& WithJourneyId(const Aws::String& value) { SetJourneyId(value); return *this;}

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline GetJourneyRequest& WithJourneyId(Aws::String&& value) { SetJourneyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline GetJourneyRequest& WithJourneyId(const char* value) { SetJourneyId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_journeyId;
    bool m_journeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
