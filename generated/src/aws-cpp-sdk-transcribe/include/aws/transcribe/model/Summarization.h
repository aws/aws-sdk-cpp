/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>

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
   * <p>Contains <code>GenerateAbstractiveSummary</code>, which is a required
   * parameter if you want to enable Generative call summarization in your Call
   * Analytics request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Summarization">AWS
   * API Reference</a></p>
   */
  class Summarization
  {
  public:
    AWS_TRANSCRIBESERVICE_API Summarization();
    AWS_TRANSCRIBESERVICE_API Summarization(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Summarization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables Generative call summarization in your Call Analytics request</p>
     * <p>Generative call summarization provides a summary of the transcript including
     * important components discussed in the conversation.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-enable-summarization.html">Enabling
     * generative call summarization</a>.</p>
     */
    inline bool GetGenerateAbstractiveSummary() const{ return m_generateAbstractiveSummary; }

    /**
     * <p>Enables Generative call summarization in your Call Analytics request</p>
     * <p>Generative call summarization provides a summary of the transcript including
     * important components discussed in the conversation.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-enable-summarization.html">Enabling
     * generative call summarization</a>.</p>
     */
    inline bool GenerateAbstractiveSummaryHasBeenSet() const { return m_generateAbstractiveSummaryHasBeenSet; }

    /**
     * <p>Enables Generative call summarization in your Call Analytics request</p>
     * <p>Generative call summarization provides a summary of the transcript including
     * important components discussed in the conversation.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-enable-summarization.html">Enabling
     * generative call summarization</a>.</p>
     */
    inline void SetGenerateAbstractiveSummary(bool value) { m_generateAbstractiveSummaryHasBeenSet = true; m_generateAbstractiveSummary = value; }

    /**
     * <p>Enables Generative call summarization in your Call Analytics request</p>
     * <p>Generative call summarization provides a summary of the transcript including
     * important components discussed in the conversation.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-enable-summarization.html">Enabling
     * generative call summarization</a>.</p>
     */
    inline Summarization& WithGenerateAbstractiveSummary(bool value) { SetGenerateAbstractiveSummary(value); return *this;}

  private:

    bool m_generateAbstractiveSummary;
    bool m_generateAbstractiveSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
