﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/SimulationJobRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobErrorCode.h>
#include <aws/core/utils/DateTime.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a failed create simulation job request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/FailedCreateSimulationJobRequest">AWS
   * API Reference</a></p>
   */
  class FailedCreateSimulationJobRequest
  {
  public:
    AWS_ROBOMAKER_API FailedCreateSimulationJobRequest();
    AWS_ROBOMAKER_API FailedCreateSimulationJobRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API FailedCreateSimulationJobRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The simulation job request.</p>
     */
    inline const SimulationJobRequest& GetRequest() const{ return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    inline void SetRequest(const SimulationJobRequest& value) { m_requestHasBeenSet = true; m_request = value; }
    inline void SetRequest(SimulationJobRequest&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }
    inline FailedCreateSimulationJobRequest& WithRequest(const SimulationJobRequest& value) { SetRequest(value); return *this;}
    inline FailedCreateSimulationJobRequest& WithRequest(SimulationJobRequest&& value) { SetRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason of the simulation job request.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline FailedCreateSimulationJobRequest& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline FailedCreateSimulationJobRequest& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline FailedCreateSimulationJobRequest& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code.</p>
     */
    inline const SimulationJobErrorCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const SimulationJobErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(SimulationJobErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline FailedCreateSimulationJobRequest& WithFailureCode(const SimulationJobErrorCode& value) { SetFailureCode(value); return *this;}
    inline FailedCreateSimulationJobRequest& WithFailureCode(SimulationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch
     * failed.</p>
     */
    inline const Aws::Utils::DateTime& GetFailedAt() const{ return m_failedAt; }
    inline bool FailedAtHasBeenSet() const { return m_failedAtHasBeenSet; }
    inline void SetFailedAt(const Aws::Utils::DateTime& value) { m_failedAtHasBeenSet = true; m_failedAt = value; }
    inline void SetFailedAt(Aws::Utils::DateTime&& value) { m_failedAtHasBeenSet = true; m_failedAt = std::move(value); }
    inline FailedCreateSimulationJobRequest& WithFailedAt(const Aws::Utils::DateTime& value) { SetFailedAt(value); return *this;}
    inline FailedCreateSimulationJobRequest& WithFailedAt(Aws::Utils::DateTime&& value) { SetFailedAt(std::move(value)); return *this;}
    ///@}
  private:

    SimulationJobRequest m_request;
    bool m_requestHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    SimulationJobErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::Utils::DateTime m_failedAt;
    bool m_failedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
