/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/RedactionType.h>
#include <aws/transcribe/model/RedactionOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/PiiEntityType.h>
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
   * <p>Makes it possible to redact or flag specified personally identifiable
   * information (PII) in your transcript. If you use <code>ContentRedaction</code>,
   * you must also include the sub-parameters: <code>RedactionOutput</code> and
   * <code>RedactionType</code>. You can optionally include
   * <code>PiiEntityTypes</code> to choose which types of PII you want to
   * redact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ContentRedaction">AWS
   * API Reference</a></p>
   */
  class ContentRedaction
  {
  public:
    AWS_TRANSCRIBESERVICE_API ContentRedaction() = default;
    AWS_TRANSCRIBESERVICE_API ContentRedaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API ContentRedaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the category of information you want to redact; <code>PII</code>
     * (personally identifiable information) is the only valid value. You can use
     * <code>PiiEntityTypes</code> to choose which types of PII you want to redact. If
     * you do not include <code>PiiEntityTypes</code> in your request, all PII is
     * redacted.</p>
     */
    inline RedactionType GetRedactionType() const { return m_redactionType; }
    inline bool RedactionTypeHasBeenSet() const { return m_redactionTypeHasBeenSet; }
    inline void SetRedactionType(RedactionType value) { m_redactionTypeHasBeenSet = true; m_redactionType = value; }
    inline ContentRedaction& WithRedactionType(RedactionType value) { SetRedactionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify if you want only a redacted transcript, or if you want a redacted and
     * an unredacted transcript.</p> <p>When you choose <code>redacted</code> Amazon
     * Transcribe creates only a redacted transcript.</p> <p>When you choose
     * <code>redacted_and_unredacted</code> Amazon Transcribe creates a redacted and an
     * unredacted transcript (as two separate files).</p>
     */
    inline RedactionOutput GetRedactionOutput() const { return m_redactionOutput; }
    inline bool RedactionOutputHasBeenSet() const { return m_redactionOutputHasBeenSet; }
    inline void SetRedactionOutput(RedactionOutput value) { m_redactionOutputHasBeenSet = true; m_redactionOutput = value; }
    inline ContentRedaction& WithRedactionOutput(RedactionOutput value) { SetRedactionOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>. If you do not include <code>PiiEntityTypes</code>
     * in your request, all PII is redacted.</p>
     */
    inline const Aws::Vector<PiiEntityType>& GetPiiEntityTypes() const { return m_piiEntityTypes; }
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
    template<typename PiiEntityTypesT = Aws::Vector<PiiEntityType>>
    void SetPiiEntityTypes(PiiEntityTypesT&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::forward<PiiEntityTypesT>(value); }
    template<typename PiiEntityTypesT = Aws::Vector<PiiEntityType>>
    ContentRedaction& WithPiiEntityTypes(PiiEntityTypesT&& value) { SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value)); return *this;}
    inline ContentRedaction& AddPiiEntityTypes(PiiEntityType value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.push_back(value); return *this; }
    ///@}
  private:

    RedactionType m_redactionType{RedactionType::NOT_SET};
    bool m_redactionTypeHasBeenSet = false;

    RedactionOutput m_redactionOutput{RedactionOutput::NOT_SET};
    bool m_redactionOutputHasBeenSet = false;

    Aws::Vector<PiiEntityType> m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
