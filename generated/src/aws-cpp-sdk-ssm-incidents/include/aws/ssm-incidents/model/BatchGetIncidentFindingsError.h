﻿/**
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
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsError();
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API BatchGetIncidentFindingsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code associated with an error that was returned for a
     * <code>BatchGetIncidentFindings</code> operation.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline BatchGetIncidentFindingsError& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline BatchGetIncidentFindingsError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline BatchGetIncidentFindingsError& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a specified finding for which an error was returned for a
     * <code>BatchGetIncidentFindings</code> operation.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }
    inline BatchGetIncidentFindingsError& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}
    inline BatchGetIncidentFindingsError& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}
    inline BatchGetIncidentFindingsError& WithFindingId(const char* value) { SetFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for an error that was returned for a
     * <code>BatchGetIncidentFindings</code> operation.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchGetIncidentFindingsError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchGetIncidentFindingsError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchGetIncidentFindingsError& WithMessage(const char* value) { SetMessage(value); return *this;}
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
