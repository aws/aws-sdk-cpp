/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>An error occurred when creating a recommendation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/NotifyRecommendationsReceivedError">AWS
   * API Reference</a></p>
   */
  class NotifyRecommendationsReceivedError
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API NotifyRecommendationsReceivedError();
    AWS_CONNECTWISDOMSERVICE_API NotifyRecommendationsReceivedError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API NotifyRecommendationsReceivedError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline NotifyRecommendationsReceivedError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline NotifyRecommendationsReceivedError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A recommendation is causing an error.</p>
     */
    inline NotifyRecommendationsReceivedError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline NotifyRecommendationsReceivedError& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline NotifyRecommendationsReceivedError& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the recommendation that is in error.</p>
     */
    inline NotifyRecommendationsReceivedError& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
