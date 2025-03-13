/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about an error returned for a <a>BatchGetIncidentFindings</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/BatchGetIncidentFindingsError">AWS
   * API Reference</a></p>
   */
  class BatchGetIncidentFindingsError
  {
  public:
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsError() = default;
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code associated with an error that was returned for a
     * <code>BatchGetIncidentFindings</code> operation.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    BatchGetIncidentFindingsError& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a specified finding for which an error was returned for a
     * <code>BatchGetIncidentFindings</code> operation.</p>
     */
    inline const Aws::String& GetFindingId() const { return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    template<typename FindingIdT = Aws::String>
    void SetFindingId(FindingIdT&& value) { m_findingIdHasBeenSet = true; m_findingId = std::forward<FindingIdT>(value); }
    template<typename FindingIdT = Aws::String>
    BatchGetIncidentFindingsError& WithFindingId(FindingIdT&& value) { SetFindingId(std::forward<FindingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for an error that was returned for a
     * <code>BatchGetIncidentFindings</code> operation.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchGetIncidentFindingsError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
