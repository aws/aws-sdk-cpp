/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about an Automation failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/FailureDetails">AWS
   * API Reference</a></p>
   */
  class FailureDetails
  {
  public:
    AWS_SSM_API FailureDetails();
    AWS_SSM_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline const Aws::String& GetFailureStage() const{ return m_failureStage; }

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline bool FailureStageHasBeenSet() const { return m_failureStageHasBeenSet; }

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline void SetFailureStage(const Aws::String& value) { m_failureStageHasBeenSet = true; m_failureStage = value; }

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline void SetFailureStage(Aws::String&& value) { m_failureStageHasBeenSet = true; m_failureStage = std::move(value); }

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline void SetFailureStage(const char* value) { m_failureStageHasBeenSet = true; m_failureStage.assign(value); }

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline FailureDetails& WithFailureStage(const Aws::String& value) { SetFailureStage(value); return *this;}

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline FailureDetails& WithFailureStage(Aws::String&& value) { SetFailureStage(std::move(value)); return *this;}

    /**
     * <p>The stage of the Automation execution when the failure occurred. The stages
     * include the following: InputValidation, PreVerification, Invocation,
     * PostVerification.</p>
     */
    inline FailureDetails& WithFailureStage(const char* value) { SetFailureStage(value); return *this;}


    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline const Aws::String& GetFailureType() const{ return m_failureType; }

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline void SetFailureType(const Aws::String& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline void SetFailureType(Aws::String&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline void SetFailureType(const char* value) { m_failureTypeHasBeenSet = true; m_failureType.assign(value); }

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline FailureDetails& WithFailureType(const Aws::String& value) { SetFailureType(value); return *this;}

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline FailureDetails& WithFailureType(Aws::String&& value) { SetFailureType(std::move(value)); return *this;}

    /**
     * <p>The type of Automation failure. Failure types include the following: Action,
     * Permission, Throttling, Verification, Internal.</p>
     */
    inline FailureDetails& WithFailureType(const char* value) { SetFailureType(value); return *this;}


    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDetails() const{ return m_details; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline void SetDetails(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline void SetDetails(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& WithDetails(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetDetails(value); return *this;}

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& WithDetails(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& AddDetails(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& AddDetails(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& AddDetails(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& AddDetails(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& AddDetails(const char* key, Aws::Vector<Aws::String>&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Detailed information about the Automation step failure.</p>
     */
    inline FailureDetails& AddDetails(const char* key, const Aws::Vector<Aws::String>& value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }

  private:

    Aws::String m_failureStage;
    bool m_failureStageHasBeenSet = false;

    Aws::String m_failureType;
    bool m_failureTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
