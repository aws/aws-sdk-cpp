/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/WorldGenerationJobErrorCode.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a failed world.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/WorldFailure">AWS
   * API Reference</a></p>
   */
  class WorldFailure
  {
  public:
    AWS_ROBOMAKER_API WorldFailure();
    AWS_ROBOMAKER_API WorldFailure(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API WorldFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline const WorldGenerationJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline void SetFailureCode(const WorldGenerationJobErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline void SetFailureCode(WorldGenerationJobErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline WorldFailure& WithFailureCode(const WorldGenerationJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the world export job if it failed:</p> <dl>
     * <dt>InternalServiceError</dt> <dd> <p>Internal service error.</p> </dd>
     * <dt>LimitExceeded</dt> <dd> <p>The requested resource exceeds the maximum number
     * allowed, or the number of concurrent stream requests exceeds the maximum number
     * allowed. </p> </dd> <dt>ResourceNotFound</dt> <dd> <p>The specified resource
     * could not be found. </p> </dd> <dt>RequestThrottled</dt> <dd> <p>The request was
     * throttled.</p> </dd> <dt>InvalidInput</dt> <dd> <p>An input parameter in the
     * request is not valid.</p> </dd> </dl>
     */
    inline WorldFailure& WithFailureCode(WorldGenerationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline const Aws::String& GetSampleFailureReason() const{ return m_sampleFailureReason; }

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline bool SampleFailureReasonHasBeenSet() const { return m_sampleFailureReasonHasBeenSet; }

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline void SetSampleFailureReason(const Aws::String& value) { m_sampleFailureReasonHasBeenSet = true; m_sampleFailureReason = value; }

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline void SetSampleFailureReason(Aws::String&& value) { m_sampleFailureReasonHasBeenSet = true; m_sampleFailureReason = std::move(value); }

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline void SetSampleFailureReason(const char* value) { m_sampleFailureReasonHasBeenSet = true; m_sampleFailureReason.assign(value); }

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline WorldFailure& WithSampleFailureReason(const Aws::String& value) { SetSampleFailureReason(value); return *this;}

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline WorldFailure& WithSampleFailureReason(Aws::String&& value) { SetSampleFailureReason(std::move(value)); return *this;}

    /**
     * <p>The sample reason why the world failed. World errors are aggregated. A sample
     * is used as the <code>sampleFailureReason</code>. </p>
     */
    inline WorldFailure& WithSampleFailureReason(const char* value) { SetSampleFailureReason(value); return *this;}


    /**
     * <p>The number of failed worlds.</p>
     */
    inline int GetFailureCount() const{ return m_failureCount; }

    /**
     * <p>The number of failed worlds.</p>
     */
    inline bool FailureCountHasBeenSet() const { return m_failureCountHasBeenSet; }

    /**
     * <p>The number of failed worlds.</p>
     */
    inline void SetFailureCount(int value) { m_failureCountHasBeenSet = true; m_failureCount = value; }

    /**
     * <p>The number of failed worlds.</p>
     */
    inline WorldFailure& WithFailureCount(int value) { SetFailureCount(value); return *this;}

  private:

    WorldGenerationJobErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_sampleFailureReason;
    bool m_sampleFailureReasonHasBeenSet = false;

    int m_failureCount;
    bool m_failureCountHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
