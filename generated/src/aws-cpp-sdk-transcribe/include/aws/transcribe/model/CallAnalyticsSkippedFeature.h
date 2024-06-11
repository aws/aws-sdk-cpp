/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CallAnalyticsFeature.h>
#include <aws/transcribe/model/CallAnalyticsSkippedReasonCode.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Represents a skipped analytics feature during the analysis of a call
   * analytics job.</p> <p>The <code>Feature</code> field indicates the type of
   * analytics feature that was skipped.</p> <p>The <code>Message</code> field
   * contains additional information or a message explaining why the analytics
   * feature was skipped.</p> <p>The <code>ReasonCode</code> field provides a code
   * indicating the reason why the analytics feature was skipped.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsSkippedFeature">AWS
   * API Reference</a></p>
   */
  class CallAnalyticsSkippedFeature
  {
  public:
    AWS_TRANSCRIBESERVICE_API CallAnalyticsSkippedFeature();
    AWS_TRANSCRIBESERVICE_API CallAnalyticsSkippedFeature(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API CallAnalyticsSkippedFeature& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of analytics feature that was skipped during the analysis
     * of a call analytics job.</p>
     */
    inline const CallAnalyticsFeature& GetFeature() const{ return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(const CallAnalyticsFeature& value) { m_featureHasBeenSet = true; m_feature = value; }
    inline void SetFeature(CallAnalyticsFeature&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }
    inline CallAnalyticsSkippedFeature& WithFeature(const CallAnalyticsFeature& value) { SetFeature(value); return *this;}
    inline CallAnalyticsSkippedFeature& WithFeature(CallAnalyticsFeature&& value) { SetFeature(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a code indicating the reason why a specific analytics feature was
     * skipped during the analysis of a call analytics job.</p>
     */
    inline const CallAnalyticsSkippedReasonCode& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const CallAnalyticsSkippedReasonCode& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(CallAnalyticsSkippedReasonCode&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline CallAnalyticsSkippedFeature& WithReasonCode(const CallAnalyticsSkippedReasonCode& value) { SetReasonCode(value); return *this;}
    inline CallAnalyticsSkippedFeature& WithReasonCode(CallAnalyticsSkippedReasonCode&& value) { SetReasonCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional information or a message explaining why a specific
     * analytics feature was skipped during the analysis of a call analytics job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline CallAnalyticsSkippedFeature& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CallAnalyticsSkippedFeature& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CallAnalyticsSkippedFeature& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    CallAnalyticsFeature m_feature;
    bool m_featureHasBeenSet = false;

    CallAnalyticsSkippedReasonCode m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
